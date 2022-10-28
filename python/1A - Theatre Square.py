'''
    1A. Theatre Square
    https://github.com/0xPand0ra
    time: 46 ms	
    memeory: 0 KB
'''

def func(n, m, a):
    if m%a > 0:
        m+=(a-m%a)
    if n%a > 0:
        n+=(a-n%a) 

    print(int(m/a)*int(n/a))

    


if __name__ == '__main__':
    n, m, a = input().split()
    m = int(m)
    n = int(n)
    a = int(a)

    func(n, m, a)
    