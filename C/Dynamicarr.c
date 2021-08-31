//HackerRank Problem
//Dynamic Array
#include <stdio.h>
#include <stdlib.h>
//This stores the total number of books in each shelf.
int* total_number_of_books;
//This stores the total number of pages in each book of each shelf.
int** total_number_of_pages;
//The rows represent the shelves and the columns represent the books.

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while(total_number_of_queries--) 
      {
        int type_of_query;
        scanf("%d", &type_of_query);
        if(type_of_query == 1) 
          {
            //Process the query of first type here.
            int x, y;
            scanf("%d %d", &x, &y);
          }
        else if(type_of_query == 2)
          {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
          }
        else 
          {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
          }
      }

    if(total_number_of_books) 
      {
        free(total_number_of_books);
      }
    
    for(int i = 0; i < total_number_of_shelves; i++) 
      {
        if(*(total_number_of_pages + i)) 
          {
            free(*(total_number_of_pages + i));
          }
      }
    
    if(total_number_of_pages) 
      {
        free(total_number_of_pages);
      }
    
    return 0;
}