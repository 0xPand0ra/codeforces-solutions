'''
118A	String Task
https://github.com/0xPand0ra
time:92 ms	
memory:0 KB
'''


def func(str):
    data = ["a", "o", "y", "e", "u", "i"]
    str = str.lower()
    res = ''
    for i in str:
        if i not in data:
            res+='.'+i
    print(res)


if __name__ == '__main__':
    str = input()
    func(str)