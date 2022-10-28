'''
58A - Chat room
https://github.com/0xPand0ra
time:46 ms	
memory:0 KB
'''

def func(str):
    hello = 'hello'
    c = 0
    for i in str:
      if i == hello[min(4, c)] and c<5:
        c+=1
    [print("YES") if c==5 else print("NO")]


if __name__ == '__main__':
    str = input()
    func(str)