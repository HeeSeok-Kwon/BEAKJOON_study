from collections import deque
import sys

n, m = map(int, input().split())
arr = []
q = deque()
count = 0
for i in range(m):
  arr.append(list(map(int, input().split())))
  for j in range(n):
    if arr[i][j] == 1:
      q.append([i,j])
      
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]
def bfs(count):
  while q:
    x, y = q.popleft()
    if arr[x][y] == -1:
      continue
    else:
      for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if nx >= 0 and nx < m and ny >= 0 and ny < n:
          if arr[nx][ny] == 0:
            arr[nx][ny] = arr[x][y]+1 
            if arr[nx][ny] > count:
              count = arr[nx][ny]
            q.append([nx, ny])
      # print(arr)
  # print(arr)
  return count

cnt = bfs(count)
chk = True
for i in range(m):
  if 0 in arr[i]:
    chk = False
    print(-1)
    break
if chk:
  if cnt == 0:
    print(cnt)
  else: 
    print(cnt-1) # 처음 1을 빼줘야 함
  

