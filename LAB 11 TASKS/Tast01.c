/*
Problems:
1. Write a program that uses structures to manage flight information, including flight number, departure city,
destination city, date, and available seats. 

Create functionalities to:
- book a seat and 
- display flight details.

*/

#include <stdio.h>
#include <string.h>


struct Flight{
	int flightNum;
	char departureCity[50];
	char destinationCity[50];
	char date[11]; // dd/mm/yyyy + \0
	int availableSeats;
};



//function prototypes

void DisplayFlightDetails(struct Flight flights);
void BookSeat(struct Flight *flights);





int main(){
	struct Flight flights;
	
	//setting stuff:
	
	flights.flightNum = 1;
	strcpy(flights.departureCity, "Karachi");
	strcpy(flights.destinationCity, "Dubai");
	strcpy(flights.date, "15/12/2025");
	flights.availableSeats = 50;
	
	int choice = -1;
	
	while(choice != 3){
		printf("Key:\n1. Book Seat\n2. Display Flight Details\n3. Exit\n\n");
		printf("Choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: // Book Seat
				BookSeat(&flights);
				break;
			case 2: //Display Flight Details
				DisplayFlightDetails(flights);
				break;
			case 3: // exit
				printf("\nExiting...\n");
				break;
			default: //invalid input
				printf("\nInvalid Input! Enter Again.\n");
		}
	}
	return 0;	
}



//function definations:

/*
void SetFlight(struct *flights, int *n){
	if(*n == 50){
		printf("Airport Full!\n");
		return;
	}
	else{
		flights[*n].flightNum = *n;
		printf("Enter Departure City: ");
		scanf("%[^/n]", &flights[*n].departureCity);
		printf("Enter Destination City: ");
		scanf("%[^/n]", &flights[*n].destinationCity);
		printf("Enter Date (dd/mm/yyyy): ");
		scanf("%d %d %d", &flights[*n].date.day, &flights[*n].date.month, &flights[*n].date.year);	
		printf("Enter Total Seats: ");
		scanf("%d", &flights[*n].availableSeats);
		*n = *n + 1;
	}
}

*/

void DisplayFlightDetails(struct Flight flights){
	printf("Flight Number: %d\n", flights.flightNum);
	
	printf("Departure City: %s\n", flights.departureCity);
	
	printf("Destination City: %s\n", flights.destinationCity);
	
	printf("Flight Date: %s\n", flights.date);	
	
	printf("Available Seats: %d\n", flights.availableSeats);
	
}



void BookSeat(struct Flight *flights){
	
	if((*flights).availableSeats == 0){
		printf("\nNo seats available!\n");
		return;
	}
	else{
		((*flights).availableSeats)--;
		printf("\nSeat Booked Successfully!\n");
		printf("Available Seats: %d\n", (*flights).availableSeats);
		return;
	}
	
}


