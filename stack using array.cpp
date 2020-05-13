#include<iostream>
using namespace std;

class Stack{
	private:
		int top;
		int arr[5];
	public:
		Stack()
		{
			//Constructor - initially stack is initailized with value zero.
			top=-1;
			for(int i=0; i<5; i++)
			{
				arr[i]=0;
			}
		}
		bool isEmpty()
		{
			if(top==-1)
				return true;
			else
				return false;
		}
		bool isFull()
		{
			if(top==4)
				return true;
			else
			  return false;
		}
		void push(int val)
		{
			if(isFull())
			{
				cout<<"Stack OverFlow"<<endl;	
			}
			else
			{
				top++;
				arr[top]=val;	
			}
		}
		
		int pop()
		{
			
			if(isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				int popValue;
				popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;	
			}
			
		}
		int count()
		{
			return (top+1);
		}
		int peek(int pos)
		{
			if(isEmpty())
			{
				cout<<"Stack Underflow"<<endl;
				return 0;
			}
			else
			{
				return arr[pos];
			}
		}
		
		void change(int pos, int val)
		{
			arr[pos]= val;
			cout<<"value changed at location "<<pos<<endl;
		}
		void display()
		{
			cout<<"All values in Stack are : "<<endl;
			
			for(int i=4; i>-1; --i)
			{
				cout<<arr[i]<<endl;
			}
		}
};

int main()
{
	Stack s1;
	int option, pos,value;
	do
	{
		cout<<"What operation do you want to perform... enter 0 to exit.."<<endl;
		cout<<"1.Push"<<endl;
		cout<<"2.Pop"<<endl;
		cout<<"3.isEmpty"<<endl;
		cout<<"4.isFull"<<endl;
		cout<<"5.Peek"<<endl;
		cout<<"6.Count"<<endl;
		cout<<"7.Change"<<endl;
		cout<<"8.Display"<<endl;
		cout<<"9.Clear Screen"<<endl;
		
		cin>>option;
		
		switch(option)
		{
			case 0:
				break;
			case 1: 
				cout<<"Enter value to push in the stack"<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2:
				cout<<"Pop function called - Popped Value: "<<s1.pop()<<endl;
				break;
			case 3:
				if(s1.isEmpty())
					cout<<"Stack is Empty"<<endl;
					break;
			case 4:
				if(s1.isFull())
					cout<<"Stack is Full"<<endl;
				else
					cout<<"Stack is not Full"<<endl;
					break;
			case 5:
				cout<<"Enter position: "<<endl;
				cin>>pos;
				cout<<"Peek Function called - Value at position "<<pos<<" is "<<s1.peek(pos)<<endl;
				break;
			case 6:
				cout<<"Count function called - Total no. of  Value: "<<s1.count()<<endl;
				break;
			case 7: 
				cout<<"Change function called "<<endl;
				cout<<"Enter postion of item to change : "<<endl;
				cin>>pos;
				cout<<"Enter value to be replaced with : "<<endl;
				cin>>value;
				s1.change(pos,value);
				break;
			case 8:
				cout<<"Dispaly function called "<<endl;
				s1.display();
				break;
			case 9:
				system("cls");
				break;
			default:
				cout<<"Invalid input!!"<<endl;		
		}
		
	}while(option!=0);
	
	return 0;
}

// By: Ankit Kumar Tiwari
// GitHub Link: https://github.com/ankitkumar25/Stack-Implementation-Using-Array



