#include <iostream>

using namespace std;



void sort3(int *a,int len)
{
	int temp=0;
	int issorted=0;//如过排好序则为1
	for(int i=0;(i<len)&&(issorted==0);i++)
	{

		issorted=1;
		for(int j=1;j<(len-i);j++)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j-1];
				a[j-1]=a[j];
				a[j]=temp;
				issorted=0;
			}


		}
	}



}




int main()
{

	int a[10]={1,2,3,4,5,0,6,8,7,9};
	int len=sizeof(a)/sizeof(*a);
	sort3(a,len);

	for (int i=0;i<len;i++)
	{

		cout<<a[i]<<endl;

	}
}