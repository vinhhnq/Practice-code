# // x1+x2+...+xN= K
# // xet xN= x
# // x1+x2+...+x(N-1)= K-x
# // Dat N'= N-1, K'= K-x
# // x1+x2+...+xN'= K'
# // Gia su, giai duoc bai toan tren (N', K') co ket qua, thi bai toan (N, K)

# // x1+x2+x3=4
# // xet x3= 2
# // x1 + x2= 2 
# // Gia su dap an cho bt tren la: [(2, 0) (1, 1) (0, 2)]
# // Vay ket qua cho bai x1+x2+x3=4 la (2, 0 , 2), (1, 1, 2), (0, 2, 2) voi x3= 2
# // x3 = bat ky so nao => thi giai tuong tu
# // x3 = 4
# // x1 + x2= 0 => (0, 0) ==> (0, 0, 4)

# // B1 Duyet lan luot gia tri cho x3
# // B2 Giai bai toan x1+x2= 4-x3
# // B3 Voi moi ket qua cuar bai toan tren, them x3 vao cuoi, them tat kq vao tap ket qua

# // x1+x2=2
# // x2= 1
# // x1= 2-1= 1
# // => x1 = 1 ==> (1) ==> (1,1)

# // x2= 0
# // x1= 2-0= 2
# // => x1 = 2 ==> (2) ==> (2,0)

# // x2= 2
# // x1= 2-2= 0
# // => x1 = 0 ==> (0) ==> (0, 2)

# // solve(N,K) tra ve tap cac nghiem theo yeu cau cua de bai voi phuong trinh x1+x2+...+xN= K
def solve(N, K):
    if N == 1:
        return [[K]]
    # N > 1
    res= []
    for xN in range(0, K+1): #[0..K]
        subres= solve(N-1, K-xN) # Giai xong
        for i in range(len(subres)):
            subres[i].append(xN) # ket qua khi co dinh xN
        res= res+subres #Them ket qua vao tap ket qua tong the
    res.sort(reverse= True)
    return res
if __name__ == '__main__':
	N, K= input().split(' ')
	N, K= int(N), int(K)
	res= solve(N,K)
	for r in res:
	    print(' '.join([str(i) for i in r]))
