#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* head,*newnode,*temp1,*temp2;
int c =0;
void add_beg ()
{
	int data;
	c=c+1;
	printf("Enter element to be inserted: ");
	scanf("%d",&data);
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->link = NULL;
	newnode->link = head;
	head=newnode;
}
void add_end()
{
	int data;
	printf("Enter element to be inserted: ");
	scanf("%d",&data);
	newnode = (struct node*)malloc(sizeof(struct node));
	newnode->data = data;
	newnode->link = NULL;
	temp1 = head;
	c=c+1;
	if (temp1==NULL)
	{
    	head = newnode;
	}
	else
	{
		while (temp1->link!=NULL)
		{
			temp1 = temp1->link;
		}
		temp1->link = newnode;
	}	
}
void add_pos()
{
	int n,data,i;
	printf("Enter the positive integer less than %d :",c+2);
	scanf("%d",&n);
	if (n<=c+1)
	{
		if (n==1)
		{	
    		add_beg();
		}
		else 
		{
			printf("Enter element to be inserted: ");
			scanf("%d",&data);
			temp1 = head;
			c=c+1;
			newnode = (struct node*)malloc(sizeof(struct node));
			newnode->data = data;
			newnode->link = NULL;
			for (i=1;i<n-1;i++)
			{	
				temp1 = temp1->link;
			}
			newnode->link = temp1->link;
			temp1->link = newnode;
		}	
	}
	else
	{
		printf("Enter the valid position");
	}
}
void delete_beg()
{
   temp1 = head;
   if (head == NULL)
   {
       printf("Deletion is not possible\n");
   }
   else
   {
    	c=c-1;
    	head = temp1->link;
	    printf("The deleted element is %d\n",temp1->data);
    	free(temp1);
   }
}
void delete_end()
{
    temp1 = head;
    if (head == NULL)
    {
        printf("Deletion is not possible\n");
    }
    else if(head->link==NULL)
    {
    	c=c-1;
        printf("The deleted element is %d\n",head->data);
        head=NULL;
        free(temp1);
    }
    else
	{
    	while (temp1->link->link!=NULL)
    	{
        	temp1=temp1->link;
    	}
    	c=c-1;
	    temp2=temp1->link;
    	printf("The deleted element is %d\n",temp1->link->data);
	    temp1->link = NULL;
    	free(temp2);
	}	
}
void delete_pos(){
    int n,i;
    if (head == NULL)
    {
         printf("Deletion is not possible\n");
    }
    else 
	{
    	printf("Enter positon(lessthan %d) to delete the element: ",c+1);
    	scanf("%d",&n);
    	if(n>c)
    	{
        	printf("Enter valid position\n");
    	}
    	else
   		{
    		temp1 = head;
    		if(n==1)
	    	{
    	    	delete_beg();
    		}
	    	else if(head->link == NULL)
    		{
        		c=c-1;
	        	printf("The deleted element is %d\n ",head->data);
	    	    head=NULL;
    	    	free(temp1);
    		}
	    	else
			{
        		for(i=1;i<n-1;i++)
        		{
            		temp1=temp1->link;
        		}
	        	c=c-1;
   	    		temp2=temp1->link;
	      		printf("The deleted element is %d\n",temp2->data);
    			temp1->link = temp1->link->link;
        		free(temp2);
    		}
		}
	}
}
void search(){
    if(head == NULL)
	{
        printf("No elements to be searched");
    }
    else
	{
	    int data;
    	int f=0;
	    printf("Enter the element to be searched: ");
    	scanf("%d",&data);
	    struct node * temp1 = head;
    	while(temp1->link!=NULL)
		{
        	if (temp1->data==data)
			{
            	f+=1;
            	break;
        	}
        	temp1 = temp1->link;
    	}
    	if (f>0)
		{
        	printf("The element is found\n");
    	}
    	else 
		{
        	printf("Element is not found\n");
   		}
	}
}
void display()
{
	struct node* temp1;
	temp1 = head;
	if(head==NULL)
    	{
        	printf("No elements to print");
    	}
    else
	{
		while(temp1!=NULL)
		{
			printf("%d ",temp1->data);
			temp1 = temp1->link;
		}
	}
	printf("\n");
}
int main()
{
	int choice;
	printf("MENU\n1.Insert at begining\n2.Insert at end\n3.Insert at position\n4.Delete at begining\n5.Delete at end\n6.Delete at position\n7.display\n8.search\n");
	while(1)
	{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{		
			case 1:
				add_beg();
				break;	
			case 2:
				add_end();
				break;
			case 3:
				add_pos();
				break;
			case 4:
				delete_beg();
				break;
			case 5:
				delete_end();
				break;
			case 6:
				delete_pos();	
				break;
			case 7:
				display();
				break;
			case 8:
				search();
				break;
			default:
				printf("Enter valid input\n");
		}
	}
}
