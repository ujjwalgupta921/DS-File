#include<iostream>
using namespace std;
class sort{
	public:
		int *arr;
		int size;
		void input()
		{
			cin>>size;
			arr=new int [size];
			cout<<"Enter the element of the array : ";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void selectionsort()
		{
			int pivot;
			for(int i=0;i<size-1;i++)
			{
				pivot=i;
				for(int j=i+1;j<size;j++)
				{
					if(arr[j]<arr[pivot])
					{
						pivot=j;
					}
				}
				if(pivot !=i)
				{
					int temp=arr[i];
					arr[i]=arr[pivot];
					arr[pivot]=temp;
				}
			}
		}
		void merge(int l,int m,int r,int *aux)
		{
			int i=l;
			int j=m+1;
			int k;
			for(k=l;k<=r;k++)
			{
				if(i>m)
				aux[k]=arr[j++];
				else if(j>r)
				aux[k]=arr[i++];
				else if(arr[i]>arr[j])
				aux[k]=arr[j++];
				else
				aux[k]=arr[i++];
			}
			for(k=l;k<=r;k++)
			{
				arr[k]=aux[k];
			}
		}
		void msort(int l,int r,int *aux)
		{
			if(l>=r)
			{
				return;
			}
			int m=(l+r)/2;
			msort(l,m,aux);
			msort(m+1,r,aux);
			merge(l,m,r,aux);
		}
		void mergesort(sort s1,sort s2)
		{
			int i,j,k=0;
			size =s1.size+s2.size;
			arr=new int[size];
			for(i=0;i<s1.size;i++)
			{
				arr[k++]=s1.arr[i];
			}
			for(j=0;j<s2.size;j++)
			{
				arr[k++]=s2.arr[j];
			}
			static int aux[1000];
			msort(0,size-1,aux);
		}
		void print()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	sort s1,s2,s3;
	cout<<"Enter the size of 1st array : ";
	s1.input();
	cout<<"Enter the size of the 2nd array : ";
	s2.input();
	s1.selectionsort();
	s2.selectionsort();
	s3.mergesort(s1,s2);
	cout<<"1st array after selection sort : ";
	s1.print();
	cout<<"2nd array after selection sort : ";
	s2.print();
	cout<<"combined array after merge sort : ";
	s3.print();
	}
