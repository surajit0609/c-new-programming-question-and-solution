#include<stdio.h>
struct car
{
	
char *color;
char *brand;
char *model;
};


void printcar (car carvariable)
	{
	
	
	
	
	printf("Brand =%s,Model =%s,Color =%s\n",carvariable.brand,carvariable.model,carvariable.color);
}
		
int main()
	{
	car carvariable;
	
	carvariable.model="neno";
	
	carvariable.brand="tata";
	
	carvariable.color="orange";
	

		
	printcar( carvariable);
	
	
	
	return 0;
		
		
	}
	
	
	
	

