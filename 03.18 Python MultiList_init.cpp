arr = [[0]* 3] * 4  # 2차원 리스트 초기화 잘못된 예
print(arr)

arr[1][1] = 5
print(arr)

brr = [[10, 20], [30, 40], [50, 60]]
brr[0][0] = 3
print(brr)

c = [[0]*3 for _ in range(3)]  #2차원 리스트 초기화 방법
c[1][1] = 1
print(c)

a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3, 5}
result = [i for i in a if i not in remove_set]
print(result)

