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
int main()
{
int s[5]={4,5,-8,0,87};
float c[5]={1.4,5.7,-6.8,5.446,0.99};
bubble_sort(s,5);
bubble_sort(c,5);
int x=0,y=0;
cout<<"Integer array in ascending order:"<<endl;
while(x<5)
{
cout<<s[x]<<"\n";
x++;
}


cout<<"Floating array in ascending order:"<<endl;
while(y<5)
{
cout<<c[y]<<"\n";
y++;
}
return 0;
}

