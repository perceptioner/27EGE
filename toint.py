f = open("/home/dimon/Downloads/28131_B.txt")

a = []
s = ""
cx = 0
for i in f:
    a.append(i.replace("\r\n",','))

for i in range(0, len(a)-1):
    s += a[i]
    cx += 1
print(s)
