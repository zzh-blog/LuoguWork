n = int(input())
Begin = 0
count = 0
while(count < n):
    Begin += 1
    count += Begin

count -= Begin
if Begin%2 == 0:
    x = Begin
    y = 1
    for i in range(Begin):
        count += 1
        
        if count == n:
            print(str(y)+"/"+str(x))
            break
        
        x -= 1
        y += 1
else:
    x = 1
    y = Begin
    for i in range(Begin):
        count += 1
        
        if count == n:
            print(str(y)+"/"+str(x))
            break
        
        x += 1
        y -= 1
