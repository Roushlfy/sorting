from random import randint
import time
MAX = 1_000_000_000
MIN = 0

def main():
    scale = [1000,2000,3000,4000,5000,6000,7000,8000,9000,10000,
        20000,30000,40000,50000,60000,70000,80000,90000,100_000]
    print(f"Scale:[{MIN},{MAX}]")
    for len in scale:
        len //= 10
        arr = []
        for _ in range(len):
            arr.append(randint(MIN,MAX))
        start =time.process_time()
        for _ in range(10):
            selection(arr, len)
        end = time.process_time()
        print(f"Sorting {len} elements. Averaged time: {(end-start)/10}s\n")

    return

def selection(arr:list, len:int):
    for i in range(len):
        for j in range(len-i):
            if arr[i + j] < arr[i]:
                arr[i], arr[i+j] = arr[i + j], arr[i]
    return

main()
