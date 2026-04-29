#include <iostream>
using namespace std; 


int main(){ 
int a=5;
cout<<sizeof(a)<<endl;
cout<<"int:"<<sizeof(int)<<endl;
cout<<"long:"<<sizeof(long)<<endl;
cout<<"char:"<<sizeof(char)<<endl;
cout<<"bool:"<<sizeof(bool)<<endl;
cout<<"float:"<<sizeof(float)<<endl;
cout<<"double:"<<sizeof(double)<<endl;


cout<<&a<<endl;
cout<<a<<endl;
cout<<*(&a)<<endl;
cout<<sizeof(int*)<<endl;
cout<<sizeof(long*)<<endl;
cout<<sizeof(char*)<<endl;
cout<<sizeof(float*)<<endl;
cout<<sizeof(double*)<<endl;
cout<<sizeof(bool*)<<endl;

int* direccion;
cout<<direccion<<endl;
cout<<&direccion<<endl;
cout<<*direccion<<endl;



return 0;
}


