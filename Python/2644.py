n = int(input())
t = [0 for _ in range(n+1)]  
temp = [False for _ in range(n+1)]    
a, b = map(int, input().split())
for _ in range(int(input())):
    x, y = map(int, input().split())
    t[y] = x

cnt_a = 0
cnt_b = 0
while t[a] > 0:
  temp[a] = True
  cnt_a += 1
  a = t[a]

while t[b] > 0:
  if temp[b] == True:
    cnt_a -= 1
    b = t[b]
    continue
  temp[b] = True
  cnt_b += 1
  b = t[b]

if a == b:
  print(cnt_a+cnt_b)
else :
  print(-1)
