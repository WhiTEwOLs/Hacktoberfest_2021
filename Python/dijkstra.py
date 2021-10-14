l=int(input("Enter number of nodes: "))
w=[[-1 for i in range(l)] for j in range(l)]
for i in range(l):
  w[i][i]=0
for i in range(int(input("Enter number of edges:"))):
  a,b,c=[int(s) for s in input("Enter 2 connected vertices and weight of edge:").split()]
  w[a-1][b-1]=c

print("Adjacency Matrix: ")
for t in w:
  print(t)
  
start=int(input("\nEnter starting vertex:"))
table=[float('inf') for i in range(l)]
table[start]=0
vis = []
cur = 0

def calc(a,x):
  for j in range(l):
    if w[x][j] > 0:
      if a[x]+w[x][j]<a[j]:
        a[j]=a[x]+w[x][j]
  return a

def nextval(t):
  a=t[:]
  print(vis)
  while True:
    print(a)
    if a and t.index(min(a)) in vis:
      a.remove(min(a))
    else:
      break