def solve(N, K, a):
  if N == 1:
    if K % a[0] == 0:
      return [[int(K/a[0])]] # X1 * a1 = K 
    return []
  res = []
  for xN in range(0, K+1):
    if a[N-1]*xN > K:
        break 
    subres = solve(N-1, K-a[N-1]*xN, a[:-1])
    for j in range(len(subres)):
        subres[j].append(xN)
    res += subres
  res.sort(reverse=True)
  return res
N, K = input().split(' ')
N, K = int(N), int(K)
a = input().split(' ')
for i in range(N):
    a[i] = int(a[i])
res = solve(N, K, a)
if len(res) == 0:
  print('Vo nghiem!')
else:
  for r in res:
    print(' '.join([str(i) for i in r]))