#include<iostream>
using namespace std;
int main(){
int *p= new int[5];
int *q;
p[0]=2;
p[1]=4;
p[2]=6;
p[3]=8;
p[4]=10;
q= new int [10];
for (int i = 0; i<5;i++){
    q[i]=p[i];
}
delete []p;
p=q;
q= NULL;
for (int j=0;j<10;j++){
    cout<<p[j]<<endl;
}
return 0;
}