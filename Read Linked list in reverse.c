/*

   C Program to Read a Linked List in Reverse

   */

 #include <stdio.h>

 #include <stdlib.h>

  

 struct node

 {

     int num;

     struct node *next;

 };

  

 void create(struct node **);

 void reversedisplay(struct node *);

 void release(struct node **);

 void display(struct node *);

  

 int main()

 {

     struct node *p = NULL;

     struct node_occur *head = NULL;

     int n;

  

     printf("Enter data into the list");

     create(&p);

     printf("Displaying the nodes in the list:");

     display(p);

     printf("Displaying the list in reverse:");

     reversedisplay(p);

     release(&p);

  

     return 0;

 }

  

 void reversedisplay(struct node *head)

 {

     if (head != NULL)

     {

         reversedisplay(head->next);

         printf("%d	", head->num);     }

 }

  

 void create(struct node **head)

 {

     int c, ch;

     struct node *temp, *rear;

  

     do

     {

         printf("Enter number: ");

         scanf("%d", &c);

         temp = (struct node *)malloc(sizeof(struct node));

         temp->num = c;

         temp->next = NULL;

         if (*head == NULL)

         {

             *head = temp;

         }

         else

         {

             rear->next = temp;

         }

         rear = temp;

         printf("Do you wish to continue [1/0]: ");

         scanf("%d", &ch);

     } while (ch != 0);

     printf("");

 }

  

 void display(struct node *p)

 {

     while (p != NULL)

     {

         printf("%d	", p->num);

         p = p->next;

     }

     printf("");

 }

  

 void release(struct node **head)

 {

     struct node *temp = *head;

     *head = (*head)->next;

     while ((*head) != NULL)

     {

         free(temp);

         temp = *head;

         (*head) = (*head)->next;

     }

 }

 

/*

Output:

 

 Enter data into the list

 Enter number: 1

 Do you wish to continue [1/0]: 1

 Enter number: 2

 Do you wish to continue [1/0]: 1

 Enter number: 3

 Do you wish to continue [1/0]: 1

 Enter number: 4

 Do you wish to continue [1/0]: 1

 Enter number: 5

 Do you wish to continue [1/0]: 0

  

 Displaying the nodes in the list:

 1 2 3 4 5 

 Displaying the list in reverse:

 5 4 3 2 1

*/
