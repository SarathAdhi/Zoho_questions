//Using Recursion reverse the string such as

//Eg 1: Input: one two three
//      Output: three two one
//Eg 2: Input: I love india
//      Output: india love I 

#include <iostream>
using namespace std;
void reverse(char *str) {
   if(*str == '\0')
   return;
   else {
      reverse(str+1);
      cout<<*str;
   }
}
int main() {
   char str[100] = "";
   
   cout<<"enter: ";
   gets(str);

   cout<<str<<endl;

   reverse(str);
   return 0;
}