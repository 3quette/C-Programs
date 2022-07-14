#include<stdio.h>
#include<string.h>
struct library{
	int accession_num;
	char title[20];
	char author[20];
	int price;
	int flag;
};
int lenOfArray=2;
int book_info;
int key;
char author_name[20];
int i,count=0;

int main(){
	struct library l1[lenOfArray];
	for(i=0;i<lenOfArray;i++){
       		printf("enter the book information\n");
       		printf("enter accession number\n");
       		scanf("%d",&l1[i].accession_num);
       		printf("enter title\n");
       		scanf("%s",&l1[i].title);
       		printf("enter author name\n");
       		scanf("%s",&l1[i].author);
       		printf("enter price\n");
       		scanf("%d",&l1[i].price);}
    printf("to see the books press '1'\nto add a book press '2'\n");
    printf("to see all the books in the library of a particular author press '3'\n");
    printf("to see the number of books of a particular title press '4'\n");
    printf("to see the the total number of books in the library press '5'\n");
    printf("to issue a book press '6'\n");
    
	printf("enter key");
	scanf("%d",&key);
       switch(key){
       	case 1:
       		for(i=0;i<lenOfArray;i++){
		    printf("ACCESSION NUMBER : %d\n",l1[i].accession_num);
			printf("TITLE : %s\n",l1[i].title);
		    printf("AUTHOR : %s\n",l1[i].author);
		    printf("PRICE : %d\n",l1[i].price);
		}
		break;
        case 2:
        	lenOfArray++;
        	printf("1 book is added in the library\n");
        	printf("now the number of books in the library are : %d",lenOfArray);
        	break;
       	case 3:
		   printf("Enter author name: ");
		   scanf("%s",&author_name);
		   for(i=0;i<lenOfArray;i++){
		   	if(strcmp(&author_name,l1[i].author) == 0){
			   printf("Books of this author are : %s\n",l1[i].title);	
			   }}
			   break;
			   
       	case 4:
		   	printf("Enter the title of the book: ");
		   	scanf("%s",&book_info);
		   	for(i=0;i<lenOfArray;i++){
		   		if(strcmp(&book_info,l1[i].title) == 0){
		   			count++;
		   			}}
		   			printf("the number of books of the specified title are : %d\n",count);
		   			break;
		case 5:
		   	printf("Total No Of Books Are: %d\n",lenOfArray);
            break;
		case 6:
			printf("1 book has been issued");
			lenOfArray--;
			printf("now the number of books in the library are : %d",lenOfArray);
			break;
	   default:
	    printf("you've entered invalid key number");
	   }
       }
		
			
			
			
			
