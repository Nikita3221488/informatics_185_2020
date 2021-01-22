import math
#1
text ="The tiger once ranged widely from the Eastern Anatolia Region in the west to the Amur River basin, and in the south from the foothills of the Himalayas to Bali in the Sunda islands."
print("count of a is " + str(text.count('a')))
print("count of s is " + str(text.count('s')))

#2
a = int(input("len ") )
def mayatnik(a):
    T=0.2
    T = 2*math.pi*math.sqrt(a/9.8)
    print("period = "+str(T))
mayatnik(a)

#3
def calc(x,y,n):
    if n==1:
        print(str(x) +" + "+ str(y) +" = "+ str(x+y))
    elif n==2:
        print(str(x) +" - "+ str(y) +" = "+ str(x-y))
    elif n==3:
      print(str(x) +" / "+ str(y) +" = "+ str(x/y))
    elif n==4:
        print(str(x) +" * "+ str(y) +" = "+ str(x*y))
    elif n==5:
        print(str(x) +" ** "+ str(y) +" = "+ str(x**y))
calc(2,23,1)
calc(7,12,2)
calc(6,14,3)
calc(24,14,4)
calc(74,2,5)

#4
P = float(input("sum "))
I = 0.15
n = int(input("quantity age "))
m = int(input("3 or 6 or 12 month "))
def procent(P,I,n,m):
    if (m==3 or m==6 or m==12):
        S = P*(1+(I)/(m/12))**(m/12*n)
        print("S = "+str(S))
    else:
        print("m - error")

procent(P,I,n,m)

#5
k=int(input("k = "))
n=1
def count(n,k):
    for x in range(n,k):
        S=(n+3**n)/(n+5**(2*n))
    print("S = "+str(S))

count(n,k)

#6
def ranges():
    result = 0
    array = input("nunbers ")
    array = array.split(' ')
    for i in range(len(array)):
        if array[i]!=" ":
            if int(array[i])%2!=0:
                result=result+int(array[i])
    print("summ nechetnoe = " + str(result))
ranges()