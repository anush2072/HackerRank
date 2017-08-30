/*
Insert function for a linked->list
*/
#include <iostream>
#include <cstddef>
using namespace std;	
class Node
{
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};
class Solution{
    public:        
      Node* insert(Node *head,int data)
      {
          //If empty insert new node as head
          if(head == NULL)
              return new Node( data);

          //Using recursion
          //Inserting remaininf nodes at the end
          if(head->next == NULL){
              head->next = new Node(data);
          }
          else{ //Recursively iterate to the last node
              insert(head->next,data);
         }
          /*
          else{
              //Using iterative approach
              Node* iterator = head;
              Node* tail;
              while(iterator){
                  tail = iterator;
                  iterator = iterator->next;
              }          
              tail->next = new Node(data);
          }
         */

          return head;  
          
      }

      void display(Node *head)
      {
          Node *start=head;
          while(start)
          {
              cout<<start->data<<" ";
              start=start->next;
          }
      }
};


int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
		
}