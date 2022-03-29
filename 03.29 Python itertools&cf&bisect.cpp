from bisect import bisect_left, bisect_right
from collections import deque
import heapq
from itertools import combinations, combinations_with_replacement, permutations, product
import math
from re import X
from typing import Counter


result = sorted( [("kim", 1), ("park", 3), ("choi", 2)] ,
                 key = lambda x: x[1], reverse = True )
print(result, "\n")


data = ['a', 'b', 'c']
print(list(permutations(data, 3)))
print()
print(list(combinations(data, 2)))
print()
print(list(combinations_with_replacement(data, 2)))
print()
print(list(product(data, repeat = 2)))
print()


def heapsort(iterable) :
    h = []
    result = []
    for value in iterable :
        heapq.heappush(h, value)    # -value ´Â ÃÖ´ëÈü
    for _ in range(len(h)) :
        result.append(heapq.heappop(h)) 
    return result
print(heapsort([1, 3, 4, 5, 9, 8, 2, 6, 7]))


a = [1, 2, 4, 4, 4, 8]
x = 4
print(bisect_left(a, x))
print(bisect_right(a, x))
print()

deq = deque([2,2,2,3,4])
deq.appendleft(1)
deq.append(5)
deq.append("hey")
print(deq)
print(list(deq))
print()

cnt = Counter(deq)
print(cnt[2])
print(cnt['hey'])
print(dict(cnt))

print()
print(math.factorial(5))
print(math.gcd(21, 14))
print(math.pi, math.e)
