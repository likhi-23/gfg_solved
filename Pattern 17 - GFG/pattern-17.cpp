//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        // code here
        char a='A';
        for(int i=1; i<=n; i++){
            a='A';
            for(int j=1; j<=n; j++){
                if(j<=n-i){
                    cout<<" ";
                }
                else{
                    cout<<a;
                    a++;
                }
            }
          
        
         a='A';

            a=(i-2)+'A';
            for(int j=1; j<=i-1; j++){
             cout<<a;
             a--;
            }
            cout<<endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends