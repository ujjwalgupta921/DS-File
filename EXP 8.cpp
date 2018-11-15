#include<iostream>
using namespace std;
class insertion_sort
{
	int n,i,j,k,key;
	int a[20];
	public:
		void getdata()
		{
			cout<<"Enter number of elements: "<<endl;
			cin>>n;
			cout<<"Enter elements : "<<endl;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void sorting()
		{
			for(k=0;k<n-1;k++)
			{
				for(j=1;j<n;j++)
				{
					key=a[j];
					for(i=j-1;i>=0;i--)
					{
						if(key<a[i])
						{
							a[i+1]=a[i];
						}
						else
						break;
					}
					a[i+1]=key;
				}
			}
		}
		void display()
		{
			cout<<"Elements are : "<<endl;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<endl;
			}
		}
};
int main()
{
	insertion_sort is;
	is.getdata();
	is.sorting();
	is.display();
}
