'''
result = sorted( [("kim", 1), ("park", 3), ("choi", 2)] ,
                 key = lambda x: x[1], reverse = True )
print(result)

a = 10
def func1() :
    global a
    a += 100
    print(a, "exists")
    return a
b = func1()
b += 100
print(a, b)

print((lambda a, b : a + b)(1, 2))


n = int(input())
data = list( map(int, input().split(" ")) )
data.sort(reverse = True)
print(data)


strdata = list( map(list, input().split("'", True)) )     #분할횟수가 True개 즉 1개 라는 소리
print(''.join(str(s) for s in strdata[1]))


check = list( map(int, input().split()))
print(check[0]+100)


p, q, r = map(int, input().split())
print(p, q, r+3)
'''

import sys
answer = 1
fastRead = sys.stdin.readline().rstrip()        #rstrip은 엔터제거하는 용
print(str(answer)+ "번 정답 : " + fastRead)
print(answer, "번 정답 : ",fastRead)
