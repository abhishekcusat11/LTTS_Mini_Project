#include "AirHeader.h"

float Pricing_Details( int , float );


void DisplayPassengerDetails(struct person *p1, struct booking *p2, int n)
{
	printf("        Customer details       \n");
	printf("CustomerID: %d\n",(p1+n)->id);
	printf("Name: %s\n",(p1+n)->name);
	printf("Phone num: %s\n",(p1+n)->phone);
	printf("air booked: %d\n",(p2+n)->air_id);
	printf("No. of seats: %d\n",(p2+n)->seats);	
	printf("-------------------------------------------------\n");	
}
void DisplayAirline(struct air *p, int n)
{
	printf("        Sevices Available        \n");
	for(int i=0; i<n; i++)
	{
		printf("air ID: %d\n",(p+i)->air_id);
		printf("airName: %s\n",(p+i)->name);
		printf("Destination: %s\n",(p+i)->to);	
		printf("From: %s\n",(p+i)->from);
		printf("Cost: Rs %f\n",(p+i)->cost);
		printf("-------------------------------------------------\n");
	}	
}

void Display_Passenger(struct person *p, int n)
{
	for(int i=0; i<n; i++)
	{
		printf("CustomerID: %d\n",(p+i)->id);
		printf("Name: %s\n",(p+i)->name);
		printf("Phone num: %s\n",(p+i)->phone);	
		printf("-------------------------------------------------\n");
	}	
}
									
				
void DisplayAirlineDetails(struct air *p1, int n)
{
	printf("        air Details       \n");
	printf("air ID: %d\n",(p1+n)->air_id);
	printf("air Name: %s\n",(p1+n)->name);
	printf("Destination: %s\n",(p1+n)->to);	
	printf("From: %s\n",(p1+n)->from);
	printf("Cost: Rs %f\n",(p1+n)->cost);
	printf("Seats: %d\n",(p1+n)->seats);
	printf("-------------------------------------------------\n");	
}		

void Reservation_Air(struct air *p1, struct person *p2, struct booking *p3, int id, int count)
{
	int airid,bseat;
	float val;
	(p3 + id)->id = id;
	DisplayAirline(p1,count);
	printf("Enter the air ID of your choice:");
	scanf("%d",&airid);
	(p3 + id)->air_id = airid;
	float price = (p1+airid)->cost;
	if((p1 + airid)->seats >= 0)
	{
		printf("Seats available: %d\n",(p1 + airid)->seats);
		printf("Enter required no. of seats: ");
		scanf("%d",&bseat);
		(p1+airid)->seats = (p1+airid)->seats - bseat;
		if((p1 + airid)->seats >= 0)
		{
			printf("Seats Booked!\n");
			(p3 + id)->seats = bseat;
			val = Pricing_Details(bseat,price);
			(p2+id)->cost = val;
			printf("Total Amount: %f",(p2+id)->cost);
		}
		else
		{
			printf("Booking failed\n");
		}
	}
	else
	{
		printf("airFull\n");
	}			
}				
	

void EnterPassengerDetails(struct person *p, int n )
{
	printf("Name:");
	scanf("%s",(p + n)->name);
	printf("Phone Number:");
	scanf("%s",(p + n)->phone);
	(p + n)->id = n;	
}
				
					
void EnterAirDetails(struct air *p, int n)
{
	printf("Enter name of Air:");
	scanf("%s",(p + n)->name);
	printf("Destination:");
	scanf("%s",(p + n)->to);
	printf("From:");
	scanf("%s",(p + n)->from);
	printf("Enter the price:");
	scanf("%f",&(p + n)->cost);
	(p + n)->air_id =n;
	(p + n)->seats =40;
}
float Pricing_Details( int s, float c)
{
	return (s*c);
}
