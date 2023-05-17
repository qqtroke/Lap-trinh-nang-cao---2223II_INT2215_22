#include<bits/stdc++.h>
using namespace std;
int revNum(int str) {
   string s = to_string(str);
   reverse(s.begin(), s.end());
   stringstream ss(s);
   int rev = 0;
   ss >> rev;
   return rev;
}
bool isMysteryNumber(int n) {
   for (int i=1; i <= n/2; i++) {
      int j = revNum(i);
      if (i + j == n) {
         cout << i << " " << j;
         return true;
      }
   }
   return false;
}
int main() {
   int num = 121;
   if(isMysteryNumber(num)){
      cout << "\n" << num << " is a Mystery number";
   }else{
      cout << " is not a Mystery number";
   }
}