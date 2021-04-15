#include<stdio.h>
#include<string.h>
#include"AirHeader.h"
/**
 * @brief Display Air is is Function to Display bus 
 * Taking argument "air" struct type and "int"
 * 
 */
void DisplayAirline(struct air *, int );

/**
 * @brief This function is used to take a details of flight
 * 
 */

void EnterAirDetails(struct air *, int );


/**
 * @brief reserrvation fun take air , struct type person , booking for Reservation_Air
 * 
 */
void Reservation_Air(struct air *, struct person *, struct booking *, int , int );

/**
 * @brief Display_Passenger is a function to display all customer
 * 
 */
void Display_Passenger(struct person *, int );

/**
 * @brief function to enter the details about customer
 * @return void
 * 
 */

void EnterPassengerDetails(struct person *, int );

/**
 * @brief function to show the details about all flight
 * @return void
 */
void DisplayAirlineDetails(struct air *, int );

/**
 * @brief fucntion to show the details of all the cust.
 * @return void
 */
void DisplayPassengerDetails(struct person *, struct booking *, int );

/**
 * @brief finally fuction to determine the the details about the price
 * 
 * @return float 
 */
float Pricing_Details( int , float );


/**
 * @brief main started here
 * 
 * @return int 
 */

int main()

{
	/**
	 * @brief  	The password is "Welcome@123 Plz provide pass when asked for Admin pass"
	 * 
	 */
	char password[20] = "Welcome@123"; 


	int x;
	int r=0;
	int p=0;
	char pass[20];
	int reg_no;
	int age;
	char name1[20];
	struct air ptr1[100];
	struct person ptr2[100];
	struct booking ptr3[100];
	int count=0;
	int num=0;

	
	
	while(x!=5)
	{
		int choice;
		printf("\n\t*----------------------------*");
		printf("\n\t|****************************|");
		printf("\n\t|++++++++++++++++++++++++++++|");
		printf("\n\t| Welcome to Airline systmem |");
		printf("\n\t|++++++++++++++++++++++++++++|");
		printf("\n\t|****************************|");
		printf("\n\t*----------------------------*\n");
		printf("               1- Update Flight Schedule (Admin):       \n");
		printf("               2- Check Flight Bookings made (Admin):      \n");
		printf("               3- Book Flight tickets(User):    \n");
		printf("               4- Check Flight Schedule(User):                             \n");
		printf("               5- Exit system:                                    \n");
		printf(" ********************************************************************** \n");
		printf("  Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("Enter Admin password to enter:\n");
				scanf("%s",&pass);
				if (strcmp(pass,password)==0)
				{
				
					if(r>=0)
					{
						EnterAirDetails(ptr1,r);
						r = r+1;
					}
				}
				break;
			case 2:
				printf("Enter Admin password:\n");
				scanf("%s",&pass);
				if (strcmp(pass,password)==0)
				{
					int y=0,a=0,b=0;
					while(y!=3)
					{	
						int ch;
						printf("                 Admin Options\n");
						printf(" -------------------------------------------------------------------\n");
						printf("               1- Check flight Map:           \n");
						printf("               2- Check Fight bookings:          \n");
						printf("               3- Exit:                              \n");
						printf(" ------------------------------------------------------------------ \n");
						printf("  Enter your choice: ");
						scanf("%d",&ch);
						
						switch(ch)
						{
							case 1:
								while(a!=3)
								{
									int aird;
									printf(" -------------------------------------------------------------------\n");
									printf("               1- Print all flight details:           \n");
									printf("               2- Search specific flight based on ID:          \n");
									printf("               3- Exit:                              \n");
									printf(" ------------------------------------------------------------------ \n");
									printf("  Enter your choice: ");
									scanf("%d",&aird);
									switch(aird)
									{
										int sp_id;
										case 1:
											DisplayAirline(ptr1, r);			
											break;
										case 2:
											printf("Enter ID:\n");
											scanf("%d",&sp_id);
											DisplayAirlineDetails(ptr1,sp_id);
											break;
										case 3:
											a=3;
											break;
										default: 
											printf("Incorret Entry\n");
											break;
									}
								}
								break;	
							case 2:
								while(b!=3)
								{
									int custd;
									printf(" -------------------------------------------------------------------\n");
									printf("               1- Print all Passengers details:           \n");
									printf("               2- Search specific Passenger ID:          \n");
									printf("               3- Exit:                              \n");
									printf(" ------------------------------------------------------------------ \n");
									printf("  Enter your choice: ");
									scanf("%d",&custd);
									switch(custd)
									{
										int cuid;
										case 1:
											Display_Passenger(ptr2, r);			
											break;
										case 2:
											printf("Enter ID:\n");
											scanf("%d",&cuid);
											DisplayPassengerDetails(ptr2,ptr3,cuid);
											break;
										case 3:
											b=3;
											break;
										default: 
											printf("Incorret Entry\n");
											break;
									}
								}
								break;	
							case 3:
								y=3;
								break;
							default: 
								printf("Incorret Entry\n");
								break;
						}
					}
				}
				break;
			case 3:
				if(p>=0)
				{
					EnterPassengerDetails(ptr2,p);
					Reservation_Air(ptr1,ptr2,ptr3,p,r);
					p = p+1;
				}
				break;
			case 4:
				DisplayAirline(ptr1, r);			
				break;
			case 5:
				x=5;
				break;
			default: 
				printf("Incorret Entry\n");
				break;
		}
	}
	return 0;
}	


									
					
					
					
					
					
					
					
					
								
					
					
					
					
					
					
					
					
