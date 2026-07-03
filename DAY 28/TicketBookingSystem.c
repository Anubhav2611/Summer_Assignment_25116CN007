#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int availableSeats = 50;
    int choice, tickets;

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Check Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Seats: %d\n", availableSeats);
                break;

            case 2:
                printf("Enter number of tickets: ");
                scanf("%d", &tickets);

                if(tickets <= availableSeats && tickets > 0)
                {
                    availableSeats = availableSeats - tickets;
                    printf("%d ticket(s) booked successfully.\n", tickets);
                    printf("Remaining Seats: %d\n", availableSeats);
                }
                else
                {
                    printf("Tickets not available.\n");
                }
                break;

            case 3:
                printf("Thank you for using the Ticket Booking System.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 3);

    return 0;
}