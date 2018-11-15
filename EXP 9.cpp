#include<iostream>
using namespace std;
int a[30];
int n,lb,loc,ub,left,right,temp,temp1;
void quicksort(int[10],int,int);
int pivot(int[],int,int);
int main()
{
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter Array Elements"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
}
void quicksort(int a[],int lb,int ub)
{
	int p;
	if(lb<ub)
	{
		p=pivot(a,lb,ub);
		quicksort(a,lb,p-1);
		quicksort(a,p+1,ub);
	}
}
int pivot(int a[],int lb,int ub)
{
    for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
		}	
		cout<<endl;
		int left=lb;
		int right=ub;
		int loc=lb;
		while((a[loc]<=a[right])&&(loc!=right))
		{
			 right=right-1; 
		}
		if(loc==right)
		{
			return loc;
		}
		temp=a[loc];
		a[loc]=a[right];
		a[right]=temp;
		loc=right;
		while((a[left]<=a[loc])&&(loc!=left))
		{
			left=left+1;
		}
		if(loc==left)
		{
			return loc;
		}
		temp1=a[loc];
		a[loc]=a[left];
		a[left]=temp1;
		loc=left;
		quicksort(a,0,n-1);
}
