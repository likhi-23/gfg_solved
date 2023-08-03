#User function Template for python3
class Solution:
    def fib (self,N):
        #code here
        a=0
        b=1
        if N==0 or N==1:
            return N
        for i in range(N-1):
            c=a+b
            a=b
            b=c
        return c%10


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ob = Solution()
        print(ob.fib(N))
# } Driver Code Ends