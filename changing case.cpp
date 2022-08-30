#include <iostream>
using namespace std;
int main() {
    int i;
    char a[]="WELCOME";
    for(i=0;a[i]!='\0';i++){
        a[i]=a[i]+32;
        cout<<a[i];
    }
}
