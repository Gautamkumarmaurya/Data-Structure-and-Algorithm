#include<iostream>
using namespace std;

class node
{
      public :
         node *next;
         int value;

         node()
         {
            next = NULL;
         }
};

class SinglyLinkedList
{
    node *head;

        public :

             SinglyLinkedList()
             {
                head = NULL;
             }

             void insert_at_begining(int x)
             {
                   node *temp = new node();
                   temp->value = x;
                   temp->next = head;
                   head = temp;
             }

             void insert_at_end(int x)
             {
                   node *temp = new node();
                   temp->value = x;

                   if(head == NULL)
                   {
                      head = temp;
                   }
                   else
                   {
                      node *ptr = head;
                      while (ptr->next != NULL)
                      {
                          ptr = ptr->next;
                      }
                         ptr->next = temp;
                      
                   }
              }

              void insert_at_middle(int x, int index)
              {
                     node *temp = new node();
                     temp->value = x;

                     if(index == 0)
                     {
                        temp->next = head;
                        head = temp;
                     }
                     else
                     {
                         node *ptr = head;
                         while(index > 1)
                         {
                            ptr = ptr->next;
                            index--;
                         }
                         temp->next = ptr->next;
                          ptr->next = temp;

                     }
              }

              void deletion_at_beg()
              {
                   if(head == NULL)
                   {
                    cout<<"Linked list is empty() "<<endl;
                   }
                   else
                   {
                      cout<<"Delete Element "<<head->value<<endl;

                      node *ptr = head;
                      head = head->next;
                      delete(ptr);
                   }                  
              }

                void deletion_at_end()
               {
                  if(head == NULL)
                  {
                    cout<<"Linked list is Empty "<<endl;
                  }
                  else if(head->next == NULL)
                  {
                    delete(head);
                    head == NULL;
                  }
                  else
                  {
                      node *ptr = head;
                    while(ptr->next->next != NULL)
                    {
                        ptr = ptr->next;

                    }
                     

                    cout<<"Deleted Element  "<<ptr->next->value<<endl;
                    delete(ptr->next);
                    ptr->next = NULL;
                  }
               }
               

               void deletion_at_middle(int index)
               {  
                 if(head == NULL)
                 {
                  cout<<"List is empty "<<endl;
                 }
                 else if(index == 0)
                 {
                     node *ptr = head;
                     head = head->next;
                 }
                   else
                     {
                         node *temp1, *temp2 = head;
                         while(index > 0)
                         {
                            temp1 = temp2;
                            temp2= temp2->next;
                            index--;
                         }
                          temp1->next = temp2->next;
                          delete(temp2);  

                     }
               }
             void display()
             {
                  if(head == NULL)
                  {
                    cout<<"Singly Linked List is Empty "<<endl;
                  }
                  else
                  {

                    node *temp = head;

                    while(temp!=NULL)
                    {
                        cout<<temp->value<<" -> ";
                        temp = temp->next;
                    }
                     cout<<"NULL";
                  }
                   
             }
};

int main()
{

    SinglyLinkedList l1;
   
  while(true)
  {
    cout<<"\n1.  Insertion_at_begining " ;
    cout<<"\n2.  Insertion_at_Middle " ;
    cout<<"\n3.  Insertion_at_End " ;
    cout<<"\n4.  Deletion_at_begining " ;
    cout<<"\n5.  Deletion_at_Middle ";
    cout<<"\n6.  Deletion_at_End " ;
     
     

    int choice;
    int value,index;
    cout<<"\n\nEnter Your Choice : ";
    cin>>choice;
    
    switch (choice)
    {
    case  1:
           cout<<"\nEnter the number : ";
           cin>>value;
           l1.insert_at_begining(value);
           l1.display();
           cout<<"\n\n";
            
          break;

    case 2 :
           cout<<"\n Enter the number : ";
           cin>>value;
           cout<<"\n Enter the index  : ";
           cin>>index;
           l1.insert_at_middle(value,index);
           l1.display();
           cout<<"\n\n";
           break;

    case 3 :
        cout<<"\nEnter the number  : ";
        cin>>value;
        l1.insert_at_end(value);
        l1.display();
        cout<<"\n\n";

    case 4:
           l1.deletion_at_beg();
           l1.display();
           cout<<"\n\n";
          break;

    case 5:
           
           cout<<"\n Enter the index  : ";
           cin>>index;
           l1.deletion_at_middle(index);
           l1.display();
           cout<<"\n\n";
          
          
          break;

    case 6:
          l1.deletion_at_end();
          l1.display();
          cout<<"\n\n";
          break;
           
     
        default:
        break;
    }

  }
     
}