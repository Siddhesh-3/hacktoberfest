#include <stdio.h> 
#include <stdlib.h> 
struct node
{
  int num;
  struct node *next;
};
int create_List(struct node **);
int palindrome_check(struct node *, int);
void release_Node(struct node **);
int palindrome_check(struct node *palindrome, int counter)
{
  int i = 0, j;
  struct node *front, *rear;
  while (i != counter / 2)
    {
      front = rear = palindrome;
      for (j = 0; j < i; j++)
	{
	  front = front->next;
	}
      for (j = 0; j < counter - (i + 1); j++)
	{
	  rear = rear->next;
	}
      if (front->num != rear->num)
	{
	  return 0;
	}
      else
	{
	  i++;
	}
    }
  return 1;
}
int create_List(struct node **head)
{
  int n, ch, counter = 0;
  struct node *temp;
  do
    {
      printf ("Enter the data into the list :  ");
      scanf ("%d ", &n);
      counter++;
      temp = (struct node *) malloc (sizeof (struct node));
      temp->num = n;
      temp->next = *head;
      *head = temp;
      printf ("Do you want enter more elements in the list press [1/0] :  ");
      scanf ("%d ", &ch);
     }
  while (ch != 0);
  printf ("\n ");
  return counter;
}
void release_Node(struct node **head)
{
  struct node *temp = *head;
  while ((*head) != NULL)
    {
      (*head) = (*head)->next;
      free (temp);
      temp = *head;
    }
}
int main ()
{
  struct node *palindrome = NULL;
  int result, counter;
  counter = create_List(&palindrome);
  result = palindrome_check (palindrome, counter);
  if (result == 1)
    {
      printf ("The linked list is a palindrome.\n ");
    }
  else
    {
      printf ("The linked list is not a palindrome.\n ");
    }
  release_Node(&palindrome);
  return  0;
}
