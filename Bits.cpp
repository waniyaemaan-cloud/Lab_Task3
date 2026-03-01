#include<iostream>
using namespace std;

main(){
cout<<"Enter the size in megabytes (MB):";
float MB;
cin>>MB;
float KB;
KB=1024*MB;
float Bytes;
Bytes=KB*1024;
float Bits;
Bits=Bytes*8;
cout<<"The size is"<<Bits<<"in Bits";
}
