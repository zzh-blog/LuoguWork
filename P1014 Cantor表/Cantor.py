n = int(input())
Begin = 0 # 斜行元素数
count = 0 # 统计总元素数
while(count < n):
    Begin += 1
    count += Begin

count -= Begin
if Begin%2 == 0:
    x = Begin
    y = 1
    length = n - count - 1
    print(str(y+length)+"/"+str(x-length))
else:
    x = 1
    y = Begin
    length = n - count - 1
    print(str(y-length)+"/"+str(x+length))
