#include<stdio.h>
struct employee_data{
	char name[20];
	int salary;
	int hoursOfwork;
};
int lenOfArray=2;
int main(){
	struct employee_data E1[lenOfArray];
	int i;
	
int incsalary[lenOfArray];
	for(i=0;i<lenOfArray;i++){
		printf("ENTER EMPLOYEE DATA\n:");
		printf("enter name :");
		scanf("%s\n",&E1[i].name);
		printf("enter salary :");
		scanf("%d",&E1[i].salary);
		printf("enter hours of work per day :");
		scanf("%d",&E1[i].hoursOfwork);
	}
	for(i=0;i<lenOfArray;i++){
		if(E1[i].hoursOfwork<=8){
			incsalary[i]=E1[i].salary+50;
			printf("NAME : %s\n",E1[i].name);
			printf("SALARY AFTER INCREMENT IS : %d\n",incsalary[i]);
		}
		else if(E1[i].hoursOfwork<=10){
			incsalary[i]=E1[i].salary+100;
			printf("NAME : %s",E1[i].name);
			printf("SALARY AFTER INCREMENT IS : %d\n",incsalary[i]);
		}
		else if(E1[i].hoursOfwork>=12){
			incsalary[i]=E1[i].salary+150;
			printf("NAME : %s\n",E1[i].name);
			printf("SALARY AFTER INCREMENT IS : %d\n",incsalary[i]);
		}
	}
	
}
