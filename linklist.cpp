#include <iostream>
using namespace std;
struct node{
   int data;
   struct node *next;
    
};

struct node *head = NULL;

void insert(int new_data)
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = head;
    head=new_node;

}
void display()
{
   struct node *temp;
   temp = head;
   while(temp !=NULL)
   {
    cout<<temp->data<<" ";
    temp = temp->next;
   }
}
void del(int x)
{
    struct node *temp1;
    struct node *temp2;
    temp1 = head;
    
    while(temp1->data != x)
    {
      temp2 = temp1;
      temp1 = temp1->next;
    }
    temp2->next = temp1->next;


}

int main()
{
  insert(1);
  insert(2);
  insert(3);
  insert(4);
  insert(5);
  display();
  del(3);

  return 0;
}
