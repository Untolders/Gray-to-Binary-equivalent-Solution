###############################################################################################################################  Question  #############################################################################################

Given an integer number n, which is a decimal representation of Gray Code. Find the binary equivalent of the Gray Code & return the decimal representation of the binary equivalent.

 

Note: Please visit here to learn How Gray Code is generated.

Example 1:

Input: 
n = 4
Output: 
7
Explanation:
Given 4, its gray code =  110.
Binary equivalent of the gray code 110 is 100.
Return 7 representing gray code 100.
Example 2:

Input: 
n = 15
Output: 
10
Explanation:
Given 15 representing gray code 1000.
Binary equivalent of gray code 1000 is 1111.
Return 10 representing gray code 1111 
ie binary 1010.
Your Task: 
You don't need to read input or print anything. Your task is to complete the function grayToBinary() which accepts an integer n as an input parameter and returns decimal representation of the binary equivalent of the given gray code.

Expected Time Complexity: O(log (n)).
Expected Auxiliary Space: O(1).

Constraints:
0 <= n <= 108







###############################################################################################################################  Solution  #############################################################################################
  //{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        if(n<2)
        return n;
      vector<int>bit;
      
      while(n){
          bit.push_back(n%2);
          n=n/2;
      }
      int s=bit.size();
      int p=pow(2,s-1);
      int ans=p * bit[s-1];
      p=p/2;
      vector<int>b;
      b.push_back(bit[s-1]);
      
      for(int i=s-2;i>=0;i--){
           
          if(b[b.size()-1]!=bit[i]){
              b.push_back(1);
              ans=ans+p;
            
          }else{
              b.push_back(0);
          }
          p=p/2;
      }
      return ans;
      
      
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends
