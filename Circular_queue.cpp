#include<iostream>
using namespace std;

class Circular
{
    int front;
    int rear;
    int array[5];

    public :
        Circular()
        {
            front = rear = -1;
        }

        bool isFull()
        {
            if((front == 0 && rear == 4 ) || (front == rear+1))

                    return true;
                else
                    return false;             
             
        }

        bool isEmpty()
        {
            if(front == -1)
             
                return true;
            else
                return false;
        }

        int enqueue(int x)
        {
             if(isFull())
             {
                cout<<"Queuue is Full "<<endl;
             }
             else
                   int x = array[rear];
                 if(front == -1)
                 {
                    front++;
                    rear++;
                    array[rear] = x;
                 }
                 else
                 {
                    rear = (rear + 1) % 5;
                    array[rear] = x;
                 }
                 return x;
        }

        int  dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is Empty "<<endl;
                return -1;
            }
            else
            {

            
                 int x = array[front];
                if(front == rear)
                {
                    front = rear = -1;
                }
                else
                   {
                     front = (front + 1) % 5;
                   }

                return x;
            }
        }
};

int main()
{
    Circular q;
    q.enqueue(10);  // insertion
    q.enqueue(20);   
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.dequeue();  // Delition
    q.dequeue();

    q.enqueue(70);
    q.enqueue(90);




    while(!q.isEmpty())
    {
        cout<<q.dequeue()<<" ";
    }
    return 0;
}