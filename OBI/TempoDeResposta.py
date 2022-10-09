n = int(input())

vacuo = [False]*100
tempo = [0]*100

for _ in range(n):
  evento, x = input().split()
  x = int(x)
  
  if evento == 'R':
    vacuo[x] = True
    for i in range(100):
      if vacuo[i]:
        tempo[i] += 1
  if evento == 'E':
    vacuo[x] = False
    for i in range(100):
      if vacuo[i]:
        tempo[i] += 1
  if evento == 'T':
    for i in range(100):
      if vacuo[i]:
        tempo[i] += x - 1
  
for i in range(100):
  if tempo[i] > 0:
    if vacuo[i]:
      print(i, -1)
    else:
      print(i, tempo[i])