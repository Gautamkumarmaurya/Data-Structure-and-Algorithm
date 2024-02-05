#include<iostream>
using namespace std;

class Double
{ 
     int front;
     int rear;
     int array[100];

     public :
         Double()
         {
            front = rear = -1;
         }

         void  push_front(int x)
         {
            if(front <= 0)
            {
                cout<<"Insertion front are not possible "<<endl;
            }
            else
            {
               // int x = array[front];
                if(front == -1)
                {
                     front++;
                     rear++;
                     array[front] = x;
                }
                else
                {
                    front--;
                    array[front] = x;
                }
                  
            }
         }

          int  push_back(int x)
          {
             if(rear == 99)
             {
                cout<<"Push back are not Possible "<<endl;
             }
             else
             {
                int x = array[rear];
                if(front == -1 && rear == -1)
                {
                     front++;
                     rear++;
                     array[rear] = x;
                }
                else
                {
                    rear++;
                    array[rear] = x;
                }
             }
          }
         
          void pop_front()
          {
            if(front == -1)
            {
                cout<<"Deletion front are not Possible "<<endl;
            }
            else
            {
                //int x = array[front];
                if(front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    front++;
                }
            }
          }

          int  pop_back()
          {
            if(rear == -1)
            {
                cout<<"Deletion back are not possible "<<endl;
            }
            else
            {
                if(front == rear)
                {
                    front = rear = -1;
                }
                else
                {
                    rear--;
                }
            }
          }

          bool isempty()
          {
            if(front == -1 && rear == -1)
            {
                return true;
            }
            else
            {
                return false;
            }
          }

          
};
int main()
{
    Double  d;
     d.push_front(10);
     d.push_front(20);
     d.push_front(30);
     d.push_front(40);
     d.push_front(50);

    // cout<<"Pop back Element " <<  d.pop_back()<<" ";

    // while(!d.isempty())
    // {
    //     cout<<d.pu()<<endl;
    // }
    return 0;
}