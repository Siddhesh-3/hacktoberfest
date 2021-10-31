/*

  * C program to search for an element in linked list

  */

 #include <stdio.h>

 #include <stdlib.h>

  

 struct node

 {

     int a;

     struct node *next;

 };

  

 void generate(struct node **, int);

 void search(struct node *, int, int);

 void delete(struct node **);

  

 int main()

 {

     struct node *head;

     int key, num;

  

     printf("Enter the number of nodes: ");

     scanf("%d", &num);

     generate(&head, num);

     printf("Enter key to search: ");

     scanf("%d", &key);

     search(head, key, num);

     delete(&head);

 }

  

 void generate(struct node **head, int num) {

     int i;

     struct node *temp;

  

     for (i = 0; i < num; i++)

     {

         temp = (struct node *)malloc(sizeof(struct node));

         temp->a = rand() % num;

         printf("%d    ", temp->a);

         if (*head == NULL)

         {

             *head = temp;

             (*head)->next = NULL;

         }

         else

         {

             temp->next = *head;

             *head = temp;

         }

     }

 }

  

 void search(struct node *head, int key, int index)

 {

     if (head->a == key)

     {

         printf("Key found at Position: %d", index);

     }

     if (head->next == NULL)

     {

         return;

     }

     search(head->next, key, index - 1);

 }

  

 void delete(struct node **head)

 {

     struct node *temp;

     while (*head != NULL)

     {

         temp = *head;

         *head = (*head)->next;

         free(temp);

     }

 }

 

/*

Output: 

 Enter the number of nodes: 6

 1    4    3    1    5    1

 Enter key to search: 1

 Key found at Position: 6

 Key found at Position: 4

 Key found at Position: 1

*/
