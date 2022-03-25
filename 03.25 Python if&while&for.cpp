from re import X

x = 15
if 10 <= x and x <= 100 :          # 10 <= x <= 100 °¡´É
    print(x);
    print("hey1")
print("hey2")

a = [1, 2, 3, 4, 5, 5, 5]
remove_set = {3, 5}
result = []
for i in a:
    if i not in remove_set:
        result.append(i)
print(result)
result = [i for i in a if i not in remove_set]
print(result)


result2 = 0
while i<=9:
    if i%2 == 1 :
        result2 += i
    i += 1
print(result2)

result3 = 0
for i in range(1, 10) :
    result3 += i
print(result3)

