#include <bits/stdc++.h>
using namespace std;
vector<int> allIndex(vector<int> a,int target, int start)
{
       
        if (start == a.size()) {
            vector<int> ans; 
            return ans;
        }
 
  
        vector<int> smallIndex = allIndex(a, target, start + 1);

        if (a[start] == target) {
           vector<int> result(smallIndex.size()+1);
 
          
            result[0] = start;
            for (int i = 0; i < smallIndex.size(); i++) {
 
                
                result[i + 1] = smallIndex[i];
            }
            return result;
        }
        else {
 
          
            return smallIndex;
        }
}
int main()
{
    vector<int> a={1,2,3,2,2,5};
    int target=2;
 
        vector<int> output =  allIndex(a, target, 0);
 
        // Printing the output array
        for (int i = 0; i < output.size(); i++) {
            cout<<output[i]<<" ";
        }
}