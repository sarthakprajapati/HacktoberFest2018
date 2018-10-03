#include<stdio.h>
#include<conio.h>

struct node
{
struct node *previous;
int info;
struct node *next;	
};

struct node *start=NULL;

struct node *create_node()
{
 struct node *temp;
 int data;
 temp=malloc(sizeof(struct node));
 printf("Enter the information\n");
 scanf("%d",&data);
 temp->previous=NULL;
 temp->info=data;
 temp->next=NULL;
 return temp;
}

// DISPLAYING ALL THE ELEMENTS
void display()
{
	struct node *ptr;
	ptr=start;
	if(start==NULL)
	{
		printf("List is Empty\n");
		return;
	}
	while(ptr!=NULL)
	{
		printf("%d ",ptr->info);
		ptr=ptr->next;
	}
}

// COUNTING ALL THE NODES
int count()
{
	int count=0;
	struct node *temp;
	if(start==NULL)
	{
		count=0;
	}
	temp=start;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}

// DELETING THE PARTICULAR ELEMENT 
void deleteit()
{
	int data;
	struct node *ptr,*temp;
	printf("Enter the element you want to delete\n");
	scanf("%d",&data);
	ptr=start;
	if(start==NULL)
	{
		printf("List is Empty\n");
	    return;
	}
	if(start->info==data)
	{
		temp=start;
		start->next->previous=NULL;
		start=start->next;
		free(temp);
		printf("Element deleted successfully\n");
		return;
	}
	ptr=start->next;
	while(ptr!=NULL)
	{
		if(ptr->info==data)
		{
		temp=ptr;
		ptr->next->previous=ptr->previous;
		ptr->previous->next=ptr->next;
		free(temp);
		printf("Element deleted successfully\n");
		return;
	   }
	   else   
	  {
	  	ptr=ptr->next;
	  }
	}
	printf("Element does not exist\n");
	}

// INSERTING THE ELEMENT AT THE BEGINNING
void insertion_at_beginning()
{
	struct node *temp=create_node();
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
		start->previous=temp;
		start=temp;
	}
}

// INSERTING THE ELEMENT ANYWHERE 
void insertion_at_anywhere()
{
	int position,counter=1;
	struct node *save,*temp;
	printf("Enter the position where you want to enter\n");
	scanf("%d",&position);
	if(position==1)
	{
	insertion_at_beginning();
	return;
    }
    save=start;
    if(position<=count())
    {
    	if(counter!=position)
    	{
    		counter++;
    		save=save->next;
		}
		temp=create_node();
		temp->previous=save->previous;
		temp->next=save;
		save->previous->next=temp;
		save->previous=temp;
	}
	else
	{
		printf("position is not in range\n");
	}
}

// INSERTING THE ELEMENT AT THE LAST
void insertion_at_last()
{
    struct node *temp=create_node();
	struct node *ptr;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	temp->previous=ptr;	
   }
}

// PRINTING THE ELEMENTS IN THE REVERSE ORDER
void print_in_reverse()
{
	struct node *ptr,*prev;
	ptr=start;
	while(ptr!=NULL)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	while(prev!=NULL)
	{
		printf("%d ",prev->info);
		prev=prev->previous;
	}
}

//SEARCHING A PARTICULAR ELEMENT
void search()
{
	int data;
	struct node *ptr;
	if(start==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("Enter the element you want to search\n");
		scanf("%d",&data);
		ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->info==data)
			{
				printf("Element Found\n");
				return;
			}
			ptr=ptr->next;
		}
		printf("Element does not exist\n");
	}
}

// CHOICE FUNCTION TO CHOOSE THE DESIRED OPTION
void choice()
{
	int choice;
	while(1)
	{
		system("cls");
		printf("1.Insert the element at last\n2.Delete the element\n3.Display\n4.search\n5.reverse\n6.Insert the element at the beginning\n7.Insert the element anywhere\n8.exit");
	    printf("\nEnter you choice\n");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
	    		insertion_at_last();
	    		break;
	    	case 2:
	    		deleteit();
	    		getch();
	    		break;
	    	case 3:
	    		display();
	    		getch();
	    		break;
	    	case 4:
	    		search();
	    		getch();
	    		break;
	    	case 5:
	    		print_in_reverse();
	    		getch();
	    		break;
	    	case 6:
	    		insertion_at_beginning();
	    		break;
	    	case 7:
	    		insertion_at_anywhere();
	    		getch();
	    		break;
	    	case 8:
	    		exit(0);
		}
	}
}

// MAIN FUNCTION TO IMPLEMENT ALL THE OPERATIONS;
int main()
{
	choice();
	getch();
	return 0;
}
