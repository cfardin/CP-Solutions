# using python 

n = (input())
num = ''  
for i in range(0, len(n)):
    if i == 0 and int(n[0]) == 9:
        num += '9'
    else:
        if int(n[i]) > 4:
            num += str(9- int(n[i]))
        else:
            num += n[i]

print(num)


