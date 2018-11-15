#include<iostream>
using namespace std;
class stack_array
{
	int stk[200],top;
	public:
		stack_array()
		{
			top=-1;
		}
		void push(int x);
		void pop();
		void display();
};
void stack_array::push(int x)
{
	if(top>200)
	{
		cout<<"stack is full"<<endl;
		return;
	}
	stk[++top]=x;
	cout<<"successfully inserted"<<endl;
}
void stack_array::pop()
{
	if(top<0)
	{
		cout<<"underflow"<<endl;
		return;
	}
	cout<<"deleted element is:"<<stk[top--]<<endl;
}
void stack_array::display()
{
	if(top<0)
	{
		cout<<"stack is empty"<<endl;
		return;
	}
	for(int i=top;i>=0;i--)
	
		cout<<"Stack is:"<<stk[i]<<endl;
	}
	int main()
	{
		stack_array sh;
		sh.push(1);
		sh.push(2);
		sh.push(3);
		sh.push(4);
		sh.display();
		sh.pop();
		sh.display();
	}
