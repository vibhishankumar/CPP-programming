#include <bits/stdc++.h> 
using namespace std; 
vector<int> subArraySum(int arr[], int n, int sum) 
{ 
    int curr_sum, i, j; 
  vector<int> v;
    for (i = 0; i < n; i++) { 
        curr_sum = arr[i]; 
        for (j = i + 1; j <n; j++) { 
            if (curr_sum == sum) { 
                     v.push_back(i);
                     v.push_back(j-1);
            } 
            if (curr_sum > sum || j == n) 
                break; 
            curr_sum = curr_sum + arr[j]; 
        } 
    } 
    return v; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sum = 23;
    
    vector<int> a;
    
    a=subArraySum(arr, n, sum);
    //cout<<a<<endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0; 
} 
