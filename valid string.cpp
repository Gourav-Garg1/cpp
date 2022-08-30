#include <iostream>
using namespace std;
int main() {
    char a[]="grv123@";
    for(int i=0;a[i]!='\0';i++){
        if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122 || a[i]>=48 && a[i]<=57 ){
          
        }  
        else{
            cout<<"invalid string";
            return 0;
        }
    } cout<<"valid string";
}
