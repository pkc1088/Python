print("hello world")
print('hello world')
a = 100
print(a)

if a==100:
    print("a is 100")
else:
    print("a is not 100")

arr = [1, 2, 3, 4.4]
print(arr)
print(arr[-1])
print(arr[0:2])

brr = [1] * 10
print(brr)

brr = [i*i for i in range(10) if i%2 == 1]
brr.append(2)
brr.sort(reverse = True)
print(brr)

crr = [[0] * 3 for _ in range(4)]  #ÀÌÂ÷¿ø¹è¿­ 
crr[1][1] = 3
print(crr)

drr = [[0] * 3] * 4
drr[1][1] = 5
drr[3] = 10
print(drr)
drr.insert(2, 10)
print(drr)

