#include<stdio.h>
#include<stdlib.h>

/**
 * @brief structure details about the details of passenger
 * 
 */
struct details{
	char name[30];
	char Adha[30];
	char age1[30];
	float price;
	int amount;
	int reason;
};

/**
 * @brief Structure BusDetails is details about the Air_details
 * 
 */

struct Airetails{
	char Name_Air[25];
	int ID_Air[15];
	int Time;
	float price;
};

/**
 * @brief Structure seat is the details about the seat details
 * 
 */

struct seat{
	char Numbe[25];
	int total[15];
	int new2;
	float Id_seat;
};

/**
 * @brief Air is the details about the Airline
 * 
 */

struct air{
	char name[30];
	char to[30];
	char from[30];
	float cost;
	int air_id;
	int seats;
};

/**
 * @brief The person structure is structure about the person
 * 
 */

struct person{
	char name[25];
	char phone[15];
	int id;
	float cost;
};

/**
 * @brief the structure booking is about booking
 * 
 */
struct booking{
	int id;
	int air_id;
	int seats;
};
