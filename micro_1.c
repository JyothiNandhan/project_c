#include<stdio.h>
#include<string.h>
void household()
{

	int Units;
	float Amount,Energy_charges,Total_Amount;
	
	printf("\tEnter the number of units consumed= ");
	scanf("%d",&Units);

	
 	if(Units<=50)
	 {	
		printf("\t You belong to the A category \n");
		Amount=Units*1.45;
		Energy_charges=25;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges =%.2f Rupees\n ",Energy_charges);
 	}
  	 else if(Units<=100)
 	{
		//First Fifty Units charge is 72.5rs
		//Next we are removing those fifty units from the total units.
		printf("\t You belong to the A category \n");
		Amount=72.5+((Units-50)*2.6);
		Energy_charges=30;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges); 
 	}
		else if(Units<=200)
 	{
		//First Fifty units charge is 72.5rs.And for the 100 units is 130
		//Next we are removing those all the 100 units from the total units.
		printf("\t You belong to the B category \n");
		Amount=72.5+130+((Units-100)*4.3);
		Energy_charges=50;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
		
 	}
		else if(Units<=300)
 	{
		//First Fifty units charge is 72.5rs.And for the 100 units is 130
		//and for the 200 is 430
		//Next we are removing those all the 200 units from the total units.
 	printf("\t You belong to the c category \n");
		Amount=72.5+130+430+((Units-200)*7.2);
		Energy_charges=60;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
	 }
		else if(Units<=400)
	 {
		/*First Fifty units charge is 72.5rs.And for the 100 units is 130
		and for the 200 is 430 and for 300 is 720*/
		//Next we are removing those all the 300 units from the total units.
	 printf("\t You belong to the C category \n");
		Amount=72.5+130+430+720+((Units-300)*8.5);
		Energy_charges=80;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges =%.2f Rupees\n ",Energy_charges);
	 }
		else if(Units<=800)
 	{
		/*First Fifty units charge is 72.5rs.And for the 100 units is 130
		and for the 200 units  is 430 and for 300units is 720 for 400
		units is 3600 */
		//Next we are removing those all the 400 units from the total units.
 	printf("\t You belong to the C category \n");
		Amount=72.5+130+430+720+3600+((Units-400)*8.5);
		Energy_charges=80;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
	}

	
	Total_Amount=Amount+Energy_charges;
	printf("\t Total Amount to be paid = %.2f Rupees\n",Total_Amount);


}
void industrial()
{
	
	int Units,option;
	float Amount,Energy_charges,Total_Amount;
	printf("Enter the class you belong.\n1.Normal\n2.Ad Banner\n  ");
	scanf("%d",&option);
	switch(option)
	 {
 		
	 case 1:	
   	printf("You are a normal class industrial electrical consumer\n\n");
   	int Units;
   	printf("\t Enter number of units consumed= ");
  	scanf("%d",&Units);
 
	
	 if(Units<50)
 	{
		printf("\n\tYou belong to the A category \n");
		Amount=(50*6);
		Energy_charges=50;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
	 }
    	else if(Units<=100)
	 {
		
		printf("\tYou belong to the A category \n");
		Amount=300+((Units-50)*7.5);
		Energy_charges=60;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
	 }
	 else if(Units<=300)
	 {
		printf("\tYou belong to the B category \n");
		Amount=300+375+((Units-100)*8.9);
		Energy_charges=60;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);	
	 }
		else if(Units<=500)
		{
		printf("\tYou belong to the B category \n");
		Amount=300+375+1780+((Units-100)*9.4);
		Energy_charges=60;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
		}
		else
		{
		printf("\tYou belong to the B category \n");
		Amount=300+375+1780+1880+((Units-100)*10);
		Energy_charges=60;
		printf("\t Amount= %.2f Rupees\n",Amount);
		printf("\t Energy charges = %.2f Rupees\n ",Energy_charges);
	
		}
		break;
		case 2:	
	 
  	 printf("\t Enter number of units consumed= ");
	 scanf("%d",&Units);
	 printf("\tYou are an Advertisement (Banner)class electricity consumer\n\n");
	   if (Units<50)
	 {
	 	printf("\t\n You belong to D category\n");
	 	Amount=50*5.3;
	 	Energy_charges=60;
	 	printf("\t Amount= %.2f Rupees\n",Amount);
	  	printf("\t Energy charges = %.2f Rupees\n ",Energy_charges); 	
	 }
	 else  if (Units<=100)
	 {
	 	printf("\t\n You belong to D category\n");
	 	Amount=263+((Units-50)*6.6);
	 	Energy_charges=60;
	 	printf("\t Amount= %.2f Rupees\n",Amount);
	  	printf("\t Energy charges = %.2f Rupees\n ",Energy_charges); 	
	 }
	  else  if (Units<=200)
	 {
	 	printf("\t\n You belong to D category\n");
	 	Amount=263+750+((Units-100)*7.5);
	 	Energy_charges=60;
	 	printf("\t Amount= %.2f Rupees\n",Amount);
	  	printf("\t Energy charges = %.2f Rupees\n ",Energy_charges); 	
	 }
	   else  
	 {
	 	printf("\t\n You belong to c category <AD BANNER>\n");
	 	Amount=263+750+1000+((Units-100)*7.5);
	 	Energy_charges=60;
	 	printf("\t Amount= %.2f Rupees\n",Amount);
	  	printf("\t Energy charges = %.2f Rupees\n ",Energy_charges); 	
	 }
	  
 	 break;
	
	 default:("\tInvalid choice\n");	
	
}
	Total_Amount=Amount+Energy_charges;
	printf("\t Total Amount to be paid = %.2f Rupees\n",Total_Amount);

}
void others()
{
	int Units,option1;
	float Amount,Energy_charges,Total_Amount;
	printf("\t\nYou switched to the others section.");
	printf("\t\n1.Schools.\n2.Colleges.\n3.Temples.\n4.Cinema Theaters.\n");
	scanf("%d",&option1);

   
	switch(option1)
	{
		case 1:
			 printf("\tYou belong to the SCHOOL class \n");
		 	printf("\t Enter number of units consumed= \n");
    		 scanf("%d",&Units);	
				 if (Units<50)
				 {
					Amount=Units*5;
				}
				else 
				{
					Amount=Units*10;
				}
				Energy_charges=40;
				printf("\t Amount= %.2f Rupees\n",Amount);
		 break;
	     case 2:		
	 	printf("\tyou belong to the COLLEGE class \n");
		 printf("\t Enter number of units consumed= \n");
    	 scanf("%d",&Units);	
	 	if(Units<50)
	 	{
	 		Amount=Units*5;
	 		
		 }
		 else 
			{
				Amount=Units*10;
			}
			Energy_charges=40;
			printf("\t Amount= %.2f Rupees\n",Amount);
		 break;
		  case 3:
		printf("\tyou belong to the TEMPLE class \n");
	 	printf("\t Enter number of units consumed= \n");
    	scanf("%d",&Units);
	 	if(Units<50)
	 	{
	 		Amount=Units*5;
	 		
		 }
		 else 
			{
				Amount=Units*10;
			}
			Energy_charges=40;
			printf("\t Amount= %.2f Rupees\n",Amount);
		 break;
		 case 4:
		 	printf("\tYou belong to the Cinema Theaters class \n");
		 	printf("\t Enter number of units consumed= \n");
    		scanf("%d",&Units);
				 if (Units<50)
				 {
				 
					Amount=Units*5;
				}
			 else 
			{
				Amount=Units*10;
			}
			Energy_charges=40;
			printf("\t Amount= %.2f Rupees\n",Amount);
		 break;
		 default:
		 	printf("Invalid area");	
		}
	Total_Amount=Amount+Energy_charges;
	printf("\t Total Amount to be paid = %.2f Rupees\n",Total_Amount);

}

int main()
{
	int choice,uid;
	char s[50];
	char d[50];

while(1)
{
	printf("\nEnter your name:");
	scanf("%s",&s);
	printf("\nEnter your UID:");
	scanf ("%d",&uid);
	printf("\nEnter the type of organization \n1.Household\n2.Industrial\n3.Others.\n4.Quit\n");
	scanf("%d",&choice);
	printf("\t -----*-------------*Printing The Bill*-------------*-----\n");
	printf("\n\tNAME: %s",strcpy(d,s));
	printf("\n\tYour UID=%d\n",uid);
	switch (choice)
	{
 		case 1:
			household();
			break;
	 	case 2:
			industrial();
			break;
	 	case 3:
			others();
			break;
		 case 4:
		 	printf("\t\a -----*-------------*Have a Good Day*-------------*-----\n\a");
		 	return 0;
		 	break;
	 	default : printf("\nInvalid choice\n");
	}
}
}
