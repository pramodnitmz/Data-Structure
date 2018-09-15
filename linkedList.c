#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}node;

node *head=NULL, *rear;

void insert();
void delete();
void display();

int main()
{
	int s;
	node *temp;

	while(1)
	{
		printf("1.Insert\n2.Delete\n3.Clear Screen\n4.Exit\nEnter your choice : ");
		scanf("%d",&s);
		switch(c)
		{
			case 1:
				insert();
				break;

			case 2:
				delete();
				break;

			case 3:
				system("tput clear");
				break;

			case 4:
				exit(0);

			default:
				printf("Invalid Choice!\n");
		}
	}

	return 0;
}

void insert()
{
	int value;
	printf("Enter the value: ");
	scanf("%d", &value);

	node *temp = malloc(sizeof(node));
	temp->data = value;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
		rear = temp;
	}
	else
	{
		rear->next = temp;
		rear = temp;
	}
	display();
}

void delete()
{
	node *temp=head;
	if(head != NULL)	
	head = head->next;
	free(temp);
	display();
}

void display()
{
	node *temp = head;
	if(head == NULL)
	{
		printf("List is Empty!\n");
		return;
	}
	while(temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
}
