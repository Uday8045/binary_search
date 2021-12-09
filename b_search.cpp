#include <iostream>
using namespace std;

int binary_search(int a[],int start, int end, int key)
{

while(start<=end)
{

int mid;
mid=(start+end)/2;

if(a[mid]==key)
return mid;

else if(key<a[mid])
end=mid-1;

else if(a[mid]<key)
start=mid+1;


}
return -1;



}
int main()
{
int a[]= {1,2,3,4,5,6,7,8,9,10};

int l=sizeof(a)/sizeof(a[0]);

cout<<binary_search(a,0,l-1,8);
 return 0;
 
 }
