#include<stdio.h>
#include<string.h>

#define Max_Room 10
#define Max_Name_Len 50

struct Reservation{
    int roomNumber;
    char guestName[Max_Name_Len];
    int isalreadybooked;
};
void initializeRooms(struct Reservation rooms[]);
void displayAvailableRooms(struct Reservation rooms[]);
void bookRooms(struct Reservation rooms[]);
void displayReservations(struct Reservation roooms[]);

int main()
{
    struct Reservation rooms[Max_Room];
    int choice;

    initializeRooms(rooms);
    do{
        printf("\n---Hotel Reservation---\n");
        printf("1. Display available rooms\n");
        printf("2. Book a room\n");
        printf("3. Display all reservation\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
        displayAvailableRooms(rooms);
        break;
        case 2:
        bookRooms(rooms);
        break;
        case 3:
        displayReservations(rooms);
        break;
        case 4:
        printf("Exiting system\n");
        break;
        default:
        printf("Invalid choice! Please try again\n");
    }
} while (choice != 4);
return 0;
}
void initializeRooms(struct Reservation rooms[])
{
    for(int i = 0;i<Max_Room;i++)
    {
    rooms[i].roomNumber=i+1;
    rooms[i].isalreadybooked = 0;
    strcpy(rooms[i].guestName, "None");
}
}

void displayAvailableRooms(struct Reservation rooms[])
{
    printf("\nAvailable roooms:\n");
    for(int i = 0; i<Max_Room;i++)
    {
        if(!rooms[i].isalreadybooked)
        {
            printf("Room %d \n",rooms[i].roomNumber);
        }
    }
}
void bookRooms(struct Reservation rooms[])
{
    int roomNumber;
    char guestName[Max_Name_Len];
    printf("\nEnter room numeber to book:");
    scanf("%d",&roomNumber);

    if(roomNumber <1 || roomNumber > Max_Room)
    {
        printf("Inalid room number please try again later");
    }
    else if(rooms[roomNumber-1].isalreadybooked)
    {
        printf("Room %d is already booked",roomNumber);
    }
    else{
        printf("Enter guest name: ");
        scanf("%s", guestName);
        rooms[roomNumber-1].isalreadybooked = 1;
        strcpy(rooms[roomNumber-1].guestName,guestName);
        printf("Room %d booked sucessfully for %s.\n",roomNumber,guestName);
    }
}
    void displayReservations(struct Reservation rooms[])
    {
        printf("\nCurrent Reservation: \n");
        for(int i= 0;i < Max_Room;i++)
        {
            if (rooms[i].isalreadybooked)
            {
                printf("Room %d - Guest: %s\n",rooms[i].roomNumber, rooms[i].guestName);
            }
        }

    }
    
    








