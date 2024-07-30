#include <bits/stdc++.h>
string reverseString(string str)
{
 // Write your code here.
 int n=str.size();
 string r;
 for(int i=n-1;i>=0;i--){
 r+=str[i];
 }
 return r;
}
