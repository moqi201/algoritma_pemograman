import random
import time

class CircularBuffer:
    def __init__(self, size):
        self.size = size
        self.buffer = [None] * size
        self.front = self.rear = -1

    # Menambahkan data ke buffer
    def enqueue(self, data):
        if (self.rear + 1) % self.size == self.front:
            print("Buffer is Full. Cannot enqueue data:", data)
        else:
            if self.front == -1:
                self.front = 0
            self.rear = (self.rear + 1) % self.size
            self.buffer[self.rear] = data
            print(f"Data {data} enqueued at position {self.rear}")

    # Menghapus data dari buffer
    def dequeue(self):
        if self.front == -1:
            print("Buffer is Empty. No data to process.")
            return None
        else:
            data = self.buffer[self.front]
            if self.front == self.rear:
                self.front = self.rear = -1  # Buffer kosong setelah dequeue
            else:
                self.front = (self.front + 1) % self.size
            print(f"Data {data} dequeued from position {self.front - 1}")
            return data

    # Menampilkan isi buffer
    def display(self):
        if self.front == -1:
            print("Buffer is Empty")
        else:
            print("Buffer content: ", end="")
            if self.rear >= self.front:
                for i in range(self.front, self.rear + 1):
                    print(self.buffer[i], end=" ")
            else:
                for i in range(self.front, self.size):
                    print(self.buffer[i], end=" ")
                for i in range(0, self.rear + 1):
                    print(self.buffer[i], end=" ")
            print()

# Fungsi simulasi sistem yang menerima data dan memprosesnya
def simulate_streaming(buffer, num_operations):
    for _ in range(num_operations):
        action = random.choice(['enqueue', 'dequeue'])
        if action == 'enqueue':
            data = random.randint(1, 100)  # Data acak dari sensor
            buffer.enqueue(data)
        else:
            buffer.dequeue()
        buffer.display()
        time.sleep(1)  # Simulasi jeda waktu antar operasi

# Inisialisasi buffer dengan ukuran tertentu
buffer_size = 5
buffer = CircularBuffer(buffer_size)

# Simulasi menerima dan memproses data
simulate_streaming(buffer, 10)