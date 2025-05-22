#include<iostream>
using namespace std;
// User function template for C++
class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        int n=pat.size();
        int arr1[26]={0};
        for(int i=0;i<n;i++){
            arr1[pat[i]-'a']++;
        }
        
        int i=0,j;
        int arr2[26]={0};
        for(j=0;j<n;j++){
            arr2[txt[j]-'a']++;
        }
       
        int m=txt.size();
        int count=0;
        j--;
        while(j<m){
            int x;
            for( x=0;x<26;x++){
                if(arr1[x]!=arr2[x]){
                    break;
                }
            }
            if(x==26){
               
                count++;
            }
            j++;
            arr2[txt[j]-'a']++;
            arr2[txt[i]-'a']--;
            i++;
            
        }
        return count;
    }
};
int main(){
    string txt="aabaabaa";
    string pat="aaba";
    Solution s;
    cout<<s.search(pat,txt);
}