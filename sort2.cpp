#include <iostream>

using namespace std;





void  sort2(int *a,int len)
{
	int temp;
	for(int i=1;i<len;i++)
	{

		temp=a[i];
		for(int j=i-1;(j>=0)&&a[j]>temp;j--)
		{
			
				a[j+1]=a[j];
				a[j]=temp;
		
		}

	}



}

int main()
{

	int a[10]={1,2,3,4,5,0,6,8,7,9};
	int len=sizeof(a)/sizeof(*a);
	sort2(a,len);

	for (int i=0;i<len;i++)
	{

		cout<<a[i]<<endl;

	}


}