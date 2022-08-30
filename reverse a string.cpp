#include <iostream>
using namespace std;
int main() {
    int i,j;
    char a[]="welcome";
    char t;
    for(j=0;a[j]!='\0';j++){}
    j=j-1;
    for(i=0;i<j;i++,j--){
        t=a[i];
        a[i]=a[j];
        a[j]=t;

        
    }
    cout<<a;
    
}
