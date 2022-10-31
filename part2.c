else if (type == 2)
    {

        printf("\nSelect seat no (31-100) :");
        scanf_s("%hu", &seatNo);
        if (seatNo > 30 && seatNo <= 100)
        {
            if (array[seatNo] == 0)
            {
                array[seatNo] = 1;
                flag = 0;
            }
            else
            {
                printf("\n\t Seat is already booked \n\n");
                flag = -1;
            }
            if (flag != -1) {
                printf("-----------------------------------------");
                printf("\n|\t  BOARDING PASS  \t\t|\n|\t\t\t\t\t|");
                printf("\n|  You have selected ECONOMY CLASS\t|\n|  Your SEAT no is  %d \t\t\t|\n", seatNo);
                printf("-----------------------------------------\n\n");
            }
        }
        else
            printf("\nInvaid input . Try Again !\n");
    }
    else
        printf("\nInvaid input . Try Again !\n");
    menu();
}
void cancel() {
    unsigned short int seatNo;
    printf("\nEnter the seat no to cancel \n");
    scanf_s("%hu",&seatNo);
    if (array[seatNo] == 1) {
        array[seatNo] = 0;
        printf("Your Seat is cancelled \n");
    }
    else
        printf("It is NOT booked \n");

    menu();
}
void print()
{
    printf("\n\tSEATS STATUS. AVAILABLE(0) , BOOKED(1) \n----------------------------------------------------\n");
    for (int i = 0; i < 100; i++)
    {
        if (i % 10 == 0)
            printf("\n\t\t");

        else
            printf("%d ", array[i]);
    }
    printf("\n\n");
    menu();
}