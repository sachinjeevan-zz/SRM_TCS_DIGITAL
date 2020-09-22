import math
class Prime:
    @staticmethod
    def isPrime(n):
        if(n<=1):
            return False
        elif(n>3 and (n%2==0 or n%3==0)):
            return False
        k = 1
        a,b=6*k-1,6*k+1
        z = int(math.sqrt(n))
        while(a<=z or b<=z):
            if(n%a==0 or n%b==0):
                return False
            k+=1
            a,b = 6*k-1,6*k+1
        return True