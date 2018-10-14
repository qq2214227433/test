#include <iostream>
using namespace std;




void sort1(int *a,int len)
{
	int temp;	
	for(int i=0;i<len;i++)
	{

		for(int j=i;j<len;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}


}


int main()
{
	int a[10]={10,7,8,6,9,5,6,3,4,1};
	sort1(a,sizeof(a)/sizeof(*a));


	for(int i=0;i<sizeof(a)/sizeof(*a);i++)
	{
		cout<<a[i]<<endl;

	}
}