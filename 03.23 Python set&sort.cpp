array = [3, 5]
array[0], array[1] = array[1], array[0]
print(array)


arr = [("바나나", 2), ("사과", 1), ("당근", 3)]
#def setting(data):
#    return data[1]
#result = sorted(arr, key = setting)
result = sorted(arr, key = lambda setting : setting[1])
print(result)


n, k = map(int, input().split())
print(n, k)


data =  dict()
data['coconut'] = 'Coconut'
data['apple'] = 'Apple'
key_list = data.keys()
value_list = data.values()
print(key_list)
print(value_list)
for key in key_list :
    print(data[key])

data = set([1, 1, 2, 2, 3])
data2 = set([2, 3, 4, 5, 5, 7])
print(data)
print(data|data2)
print(data&data2)
print(data - data2) 
