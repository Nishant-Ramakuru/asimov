

s1=0;
s2=0;
s3=0;
s4=0;
S=[0]
S.remove(0)
x=0;
y=0;
X=[0]
Y=[0]
#P & Q are firt encounters
P=[0]
P.remove(0)
Q=[0]
Q.remove(0)
#J & k are second encounters
J=[0]
J.remove(0)
K=[0]
K.remove(0)
   
print('origin is')
print(X,Y)
#***********************************TREMAUX ALGORITHM*************************
O=s1+s2+s3+s4
rule=1
while rule<5:
    if O<2:
        rule=2
       
#*************************************Rule 1*************************
    if rule==1 :
        if s1==0 :
            S(len(S)+1)=1
        
        if s2==0 :
            S(len(S)+1)=2
        
        if s3==0 :
            S(len(S)+1)=3
        
        if s4==0 :
            S(len(S)+1)=4

        R=random.randint(1,len(S))
#...........................if no object to the left.................
        if R==1 :
            print('going left')
            while s1>=m:
                print('arduino code left')
                x=x-1
                X.append(x)
                if s1<m :
                    break
            
            print('new position')
            print(X(len(X)),Y(len(Y)))    
        #plot2d(X(len(X)),Y(len(Y)),-4)    
#.........................if no object forward........................        
        if R==2 :
            print('going forward')            
            while s2>=m:
                print('arduino code forward')
                y=y+1;
                Y.append(y)        
                if s2<m :
                    break
                
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
#............................if no object to the right......................        
        if R==3 :
            print('going right')
            while s3>=m:
                print('arduino code right')
                x=x+1;
                X.append(x)
                if s3<m :
                    break
        
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
#............................if no object to the back....................        
        if R==4 :
            print('going backward')
            while s4>m:
                print('arduino code backward')
                y=y-1;
                Y.append(y)
                if s4<m :
                    break
                
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
        
        S=[0]
        S.remove(0)
#.....................encountered an intersection..................        
    if rule==2 :
#P&Q are interesction coordinates        
        for i in range(0,len(X)):
            if X(len(X))==(X[i]):
                for j in range(0,len(Y)):
                    if Y(len(Y))==(Y[j]):
                        
                        
                        
                

        P.append(X(len(X)-1))
        Q.append(Y(len(Y)-1))
        #plot2d(P(len(P)),Q(len(Q)),-3);        
        if s1==0 :
            S(len(S)+1)=1
        
        if s2==0 :
            S(len(S)+1)=2
        
        if s3==0 :
            S(len(S)+1)=3
        
        if s4==0 :
            S(len(S)+1)=4
        
    
        R=random.randint(1,4)
    
        if R==1 :
            print('going left')
            print('arduino code left')
            x=x-1;
        
            X.append(x)
            print('new position')
            print(X(len(X)),Y(len(Y)))    
        #plot2d(X(len(X)),Y(len(Y)),-4)
        if R==2 :
            print('going forward')
            print('arduino code forward')
            y=y+1;
        
            Y.append(y)
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
        if R==3 :
            print('going right')
            print('arduino code right')
            x=x+1;
        
            X.append(x)
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
        if R==4 :
            print('going backward')
            print('arduino code backward')
            y=y-1;
        
            Y.append(y)
            print('new position')
            print(X(len(X)),Y(len(Y)))
        #plot2d(X(len(X)),Y(len(Y)),-4)
        P.append(X(len(X)))
        Q.append(Y(len(Y)))
        
    if rule==3 :    
        


#step forward

    if s2==0 :
        print('going left')
        print('arduino code forward')
        y=y+1;
    end
    Y.append(y)
    print('new position')
    print(X(len(X)),Y(len(Y)))

#step left
    
    if s1==0 :
    print('going left')
    print('arduino code left')
    x=x-1;
    end
    X.append(x)
    print('new position')
    print(X(len(X)),Y(len(Y)))

#step right

    if s3==0 :
    print('going right')
    print('arduino code right')
    x=x+1;
    end
    X.append(x)
    print('new position')
    print(X(len(X)),Y(len(Y)))

#step back

    if s4==0 :
    print('going backward')
    print('arduino code backward')
    y=y-1;
    end
    Y.append(y)
    print('new position')
    print(X(len(X)),Y(len(Y)))
    
    
end  
end
end



##plot2d(x,y,-1);

