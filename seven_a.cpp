#include<iostream>
#include<cstring>

using namespace std;

template<class T>

void  bubble_sort(T a[],int z)

{
for(int i=0;i<z-1;i++)
for(int j=z-1;i<j;j--)
if(a[j]<a[j-1])

{
T p;
p=a[j];
a[j]=a[j-1];
a[j-1]=p;
}
}
