/*
2. Write a program that use a structure to hold information about movies, such as title, genre, director, release year,
and rating. Write a program that allows users to add new movies, search for movies by genre, and display all movie
details.
*/

//will be using DMA here to Dynamically allocate space whenever a new movie is going to be added
//for this, i must use malloc first, then, use reallc as needed or necessary

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Movie{
	char title[100];
	char genre[50];
	char director[50]; //just his name
	char releaseYear[5]; // yyyy + \0
	float rating; //out of 10 probably?
};




//function prototypes:
void AddNewMovie(struct Movie **movies, int *n);
void SearchMovie(struct Movie *movies, int n); //by genre
void DisplayAllMovies(struct Movie *movies, int n);





int main(){
	int numMovies = 0; //n in functions
	struct Movie *movies = NULL; //so initially, we can only store one movie, and then, increase space for another when added movie
	
	int choice = -1;
	while(choice != 4){
		printf("\nKey:\n1. Add New Movie\n2. Search Movie\n3. Display All Movies\n4. Exit\n\n");
		printf("Choice: ");
		scanf("%d", &choice);
		getchar();
		
		switch(choice){
			case 1: //Add new movie
				printf("--- Add Movie ---\n\n");
				AddNewMovie(&movies, &numMovies);
				break;
			case 2: //Search Movie
				printf("--- Search Movie ---\n\n");
				SearchMovie(movies, numMovies);
				break;
			case 3: //display all movies
				printf("--- Display All Movies ---\n\n");
				DisplayAllMovies(movies, numMovies);
				break;
			case 4:
				printf("Exiting...\n");
				break;
			default:
				printf("Invalid Choice. Please enter again.\n");
		}
	}
	return 0;
}

void AddNewMovie(struct Movie **movies, int *n){ //n repreasents the numMovies
	*n = *n + 1; //increament the counter
	*movies = realloc(*movies, (*(n))*sizeof(struct Movie)); //allocate an empty space where another movie can be added by increasing current size by 1
	
	int idx = *n - 1;
	printf("Title: ");
	scanf(" %[^\n]", (*movies)[idx].title);
	printf("Genre: ");
	scanf(" %[^\n]", (*movies)[idx].genre);
	printf("Director Name: ");
	scanf(" %[^\n]", (*movies)[idx].director);
	printf("Release Year: ");
	scanf(" %s", (*movies)[idx].releaseYear);
	printf("Rating: ");
	scanf(" %f", &(*movies)[idx].rating);
	getchar(); //inorder to consume the new line character
}



void SearchMovie(struct Movie *movies, int n){
	char tempGenre[50];
	printf("Enter Genre To Search: ");
	scanf(" %[^\n]", tempGenre);
	int i;
	int found = 0;
	for(i = 0; i < n; i++){
		if(strcmp(movies[i].genre, tempGenre) == 0){
			printf("Title: %s\n", movies[i].title);
			printf("Genre: %s\n", movies[i].genre);
			printf("Director: %s\n", movies[i].director);
			printf("Released: %s\n", movies[i].releaseYear);
			printf("Rating: %.1f\n\n", movies[i].rating);
			found = 1;
		}
	}
	if(found == 0){
		printf("No Movies Found!\n");
	}
}



void DisplayAllMovies(struct Movie *movies, int n){
	if(n == 0){
		printf("No Movies Added.\n");
	}
	else{
		int i;
		for(i = 0; i < n; i++){
			printf("Title: %s\n", movies[i].title);
			printf("Genre: %s\n", movies[i].genre);
			printf("Director: %s\n", movies[i].director);
			printf("Released: %s\n", movies[i].releaseYear);
			printf("Rating: %.1f\n\n", movies[i].rating);
		}
	}
}






