#include <iostream>
using namespace std;
int main() {
    int i,j;
  char a[]="painter";
  char b[]="painting";
  for(i=0,j=0;a[i]!='\0',b[j]='\0';i++,j++){
      if(a[i]!=b[j]);
      break;
      }
      if(a[i]==b[j]){
          cout<<"equal";
      }else if(a[i]>b[j]){
          cout<<"smaller";
      }else{
          cout<<"larger";
      }
  }


