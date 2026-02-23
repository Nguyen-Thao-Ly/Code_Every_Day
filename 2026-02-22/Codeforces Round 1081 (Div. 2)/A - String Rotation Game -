def DemKhoi(d, st):
    cnt = 0
    old = st[0]
    
    for i in range(1, d) :
        if st[i] != old :
            cnt += 1
            old = st[i]
    
    cnt += 1
    return cnt


def XoayKhoi(d, st):
    
    MAXX = -1e9
    MAXX = max(MAXX, DemKhoi(d,st))
    
    for i in range(1, d):
        st2 = st[0]
        
        st3 = ''
        for i in range(1,d) :
            st3 +=  st[i]
        
        st = st3 + st2
        MAXX = max(MAXX, DemKhoi(d,st))
        #print(st)
    
    return MAXX

#================================#
n = int(input())

for i in range(n):
    d = int(input())
    st = input()
    
    print(XoayKhoi(d, st))
