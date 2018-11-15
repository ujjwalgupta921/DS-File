#include <iostream>
using namespace std;
class arr
{
    int a[100];
    int n;
public:
    void form_array();
    void insert_at_pos();
    void delete_ele();
    void find_loc();
    void display();
};
void arr::form_array()
{
	cin>>n;
    for(int i=0;i<n;i++)
    {
		cin>>a[i];
    }
}
void arr::insert_at_pos()
{
    int pos;
    int num;
    cout<<"Enter the position and number to insert"<<endl;
    cin>>pos>>num;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    n=n+1;
}
void arr::delete_ele()
{
    int i;int pos;
        char j;
        int val;
        cout<<"press p for entering position and v for value"<< endl;
        cin>>j;
        if(j=='p')
        {
        cout<< "enter the position";
        cin>>pos;
        for(i=pos;i<10;i++)
        {
			a[i]=a[i+1];
        }
        }
        else if(j=='v')
        {
			cout<<"enter the value"<<endl;
            cin>>val;
            for(i=0;i<n;i++)
            {
                if(a[i]==val)
                {
                    pos=i;
                    break;
                }
            }
             for(i=pos;i<10;i++)
        {
			 a[i]=a[i+1];
        }
}
        n=n-1;
}
void arr::find_loc()
{
    int pos;
    int coun=0;
    int val;
    cout<<"enter the number to search";
    cin>>val;
     for(int i=0;i<n;i++)
            {
                if(a[i]==val)
                {
                    pos=i;coun++;
                    break;
				}
            }
       if(coun==1)
            cout<<pos;
        else if(coun==0)
            cout<<"number not found";
}
void arr::display()
{
	int i;
    for(i=0;i<n;i++)
    {
			cout<<a[i]<<endl;
    }
}
int main()
{
    arr p;
    p.form_array();
    int ch=1;
cout<<"1.Insert a new element at a specified position"<<endl;
cout<<"2.Delete an element either whose value is given or whose position is given"<<endl;
cout<<"3.To find the location of a given element"<<endl;
cout<<"4.To display the elements of the linear array"<<endl;
    while(ch!=5)
    {
			cin>>ch;
        switch(ch)
        {
			case 1:p.insert_at_pos();
            break;
            case 2:p.delete_ele();
            break;
            case 3:p.find_loc();
            break;
            case 4:p.display();
            break;
            default:ch=5;
        }
    }
return 0;
}
