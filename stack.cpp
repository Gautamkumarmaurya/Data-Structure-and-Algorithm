// #include<iostream>
// using namespace std;

// class Stack
// {
//     int top;
//     int array[100];

//       public :
         
//          Stack()
//          {
//             top=-1;   //default Constructor
//          }

//          void push(int x)   // insert function
//          {
//             if(top==99)
//             {
//                 cout<<"Data overflow "<<endl;
//             }
//             else
//             {
//                 top++;
//                 array[top] = x;
//             }
//          }

//          int pop()    // Detete function
//          {
//             if(top==-1)
//             {
//                 cout<<"Data underflow "<<endl;
//             }
//             else
//             {
//                 int x = array[top];
//                 top--;
//                 return x;
//             }
//          }

//          int  peek() //check top element 
//          {
//             if(top==-1)
//             {
//                 cout<<"Data underflow "<<endl;
//                  return -1;
//             }
//             else
//             {   
//                 return array[top];;
//             }
//          }

//          bool isempty()    // Stack Empty()
//          {
//             if(top==-1)
//             {
//                  return true;
//             }
//             else
//             {
//                 return false;
//             }
//          }
// };
// int main()
// {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     s.push(50);

    

//     cout<<"Peek Element "<<s.peek()<<endl;
//     cout<<endl;

//      while(!s.isempty())
//      {
//         cout<<s.peek()<<" ";
//         s.pop();
//      }
//     cout<<endl;

//     return 0;
// }
 

 