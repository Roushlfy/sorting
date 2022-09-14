from random import randrange
from re import S
import time

def rand_million(i):
    file = open(f'../data/million{i}.txt','x')
    for _ in range(0,1_000):
        for _ in range(0,1_000):
            file.write(str(randrange(10)))
        file.write("\n")
    file.close()


def trillion_from_pi():
    """Generate 1 trillion bits of pi and save it into a file.
    """
    with open('../data/million_from_pi.txt','x') as file:
        for _ in range(0,1_000_000_000):
            file.write(str(randrange(10)))

if __name__ == '__main__':
    st = time.time()
    for i in range(10):
        start = time.process_time()
        rand_million(i)
        end = time.process_time()
        print(f"CPU Execution time:\nGenerating 1 million integers between 0 and 10:\n{end-start}s")

    ed = time.time()
    print(f'\nTotal time: {ed-st}s')