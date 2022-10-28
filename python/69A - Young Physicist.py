'''
69A - Young Physicist
https://github.com/0xPand0ra
time:92 ms	
memory:0 KB
'''

def func(vectors):
    for i in range(3):
        suma = 0
        for j in range(len(vectors)):
            suma += vectors[j][i]
        if suma !=0 :
            print('NO')
            return
    print('YES')

if __name__ == '__main__':
    ite = int(input())
    vectors = []
    for i in range(ite):
        a, b, c = input().split(sep=' ')
        vector = [int(a), int(b), int(c)]
        vectors.append(vector)
    
    func(vectors)