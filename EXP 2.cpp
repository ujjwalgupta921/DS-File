#include<iostream>
using namespace std;
class array1
{
	int size;
	int arr[100];
	public:
		array1()
		{
			cout<<"Enter the size of array\n";
			cin>>size;
			cout<<"Enter the values:\n";
			for(int i=0;i<size;i++)
			{
				cin>>arr[i];
			}
		}
		void location()
		{
			int ele1,i;
			cout<<"Enter the element you want to search\n";
			cin>>ele1;
			int f=0;
			for(i=0;i<size;i++)
		{
			if(arr[i]==ele1)
			{
				f=1;
				cout<<"Element is found at pos"<<i<<endl;
			}
		}
		if(f==0)
		{
			cout<<"Element not found\n";
		}
		}
};
int main()
{
	array1 obj1;
	obj1.location();
}
