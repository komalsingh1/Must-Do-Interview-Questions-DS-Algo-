/*Detect Loop in linked list*/

/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/
int detectloop(Node *list)
{
   // your code here
   Node *slow=list,*fast=list;
   while(slow && fast && fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
   
   if(slow==fast)
   return 1;
}
    return 0;
}
