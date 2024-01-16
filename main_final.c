#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *getcost(int brand, int arr[50], int service_cost[50])
{
    int x1, x2, x3, x4, x5, x6, x7, x8;

    if (brand == 1)
    {
        x1 = 100;
        x2 = 2000;
        x3 = 300;
        x4 = 3000;
        x5 = 500;
        x6 = 6000;
        x7 = 700;
        x8 = 400;
    }

    else if (brand == 2)
    {
        x1 = 120;
        x2 = 2200;
        x3 = 320;
        x4 = 3200;
        x5 = 520;
        x6 = 6200;
        x7 = 720;
        x8 = 400;
    }

    else if (brand == 3)
    {
        x1 = 130;
        x2 = 2300;
        x3 = 330;
        x4 = 3200;
        x5 = 530;
        x6 = 6300;
        x7 = 730;
        x8 = 400;
    }

    else if (brand == 4)
    {
        x1 = 140;
        x2 = 2400;
        x3 = 340;
        x4 = 3200;
        x5 = 540;
        x6 = 6400;
        x7 = 740;
        x8 = 400;
    }

    else if (brand == 5)
    {
        x1 = 150;
        x2 = 2500;
        x3 = 350;
        x4 = 3200;
        x5 = 550;
        x6 = 6500;
        x7 = 750;
        x8 = 400;
    }

    else if (brand == 6)
    {
        x1 = 160;
        x2 = 2600;
        x3 = 360;
        x4 = 3200;
        x5 = 560;
        x6 = 6600;
        x7 = 760;
        x8 = 400;
    }

    else if (brand == 7)
    {
        x1 = 170;
        x2 = 2700;
        x3 = 370;
        x4 = 3200;
        x5 = 570;
        x6 = 6700;
        x7 = 770;
        x8 = 400;
    }

    service_cost[0] = x1 * arr[0];

    service_cost[1] = x2 * arr[1];

    service_cost[2] = x3 * arr[2];

    service_cost[3] = x4 * arr[3];

    service_cost[4] = x5 * arr[4];

    service_cost[5] = x6 * arr[5];

    service_cost[6] = x7 * arr[6];

    service_cost[7] = x8 * arr[7];

    return service_cost;
}
void billformat(char customer_name[50], char date[50], char service_centre_info[10], char number[12], char car_model[50])
{
    printf("\t        GALAXY CAR SERVICES");
    printf("\n--------------------------------------------------");

    printf("\nDate: %s", date);
    printf("\nBranch: %s\n", service_centre_info);
    printf("--------------------------------------------------");

    printf("\n1. Customer Name: %s", customer_name);
    printf("\n2. Contact Number: %s", number);
    printf("\n3. Car Model: %s", car_model);
    printf("\n--------------------------------------------------\n");

    printf("Services\t\t\t\t");
    printf("Total\t\t");
    printf("\n--------------------------------------------------");
    printf("\n\n");
}
void billgenerator(int i, int cost, int brand, int serv_input[9], int service_cost[8])
{
    printf("Break Pads\t\t\t\t%d\n", service_cost[0]);
    printf("Tyres\t\t\t\t\t%d\n", service_cost[1]);
    printf("AC Filters\t\t\t\t%d\n", service_cost[2]);
    printf("Rubbing Polish\t\t\t\t%d\n", service_cost[3]);
    printf("Wheel Alignment\t\t\t\t%d\n", service_cost[4]);
    printf("Dent Repair and Painting\t\t%d\n", service_cost[5]);
    printf("Infotenment System\t\t\t%d\n", service_cost[6]);
    printf("Engine Oil\t\t\t\t%d\n", service_cost[7]);

    for (i = 0; i < 8; i++)
    {
        cost = cost + service_cost[i];
    }
    int labour = (0.1) * cost;
    int Total;
    int dis, gst, netTotal;
    int grandTotal;

    Total = labour + cost;

    printf("Labour Charges\t\t\t\t%d\n", labour);
    printf("\n--------------------------------------------------");
    printf("\nSub Total\t\t\t\t%d", Total);

    if (Total < 5000)
    {
        dis = 0.05 * Total;
        netTotal = Total - dis;
        printf("\nDiscount @5%s\t\t\t\t%d", "%", dis);
    }
    else if (Total >= 5000 && Total <= 10000)
    {
        dis = 0.08 * Total;
        netTotal = Total - dis;
        printf("\nDiscount @8%s\t\t\t\t%d", "%", dis);
    }
    else if (Total > 10000)
    {
        dis = 0.12 * Total;
        netTotal = Total - dis;
        printf("\nDiscount @12%s\t\t\t\t%d", "%", dis);
    }
    else
    {
        printf("Error");
    }

    gst = 0.18 * netTotal;
    grandTotal = netTotal + gst;

    printf("\n\nNet total\t\t\t\t%d", netTotal);
    printf("\nGST @18%s\t\t\t\t%d", "%", gst);
    printf("\n--------------------------------------------------\n");
    printf("Grand total\t\t\t\t%d", grandTotal);
    printf("\n--------------------------------------------------\n");
}

int main()
{
    char service_centre_info[10];
    char customer_name[50];
    char date[50];
    char mechanic_name[20], car_model[50];
    int mechanic_id;

    // SERVICE CENTRE INFORMATION

    printf("------------------------------------------------------------------\n");
    printf("           GALAXY CAR SERVICE CENTER INFORMATION SYSTEM           \n");
    printf("------------------------------------------------------------------\n\n");

    printf("Enter the Branch Name:\n");
    gets(service_centre_info);

    // CUSTOMER INFORMATION

    char number[12];

    printf("\nEnter Date:\n");
    gets(date);

    printf("\nCustomer Details:\n");

    printf("\n1. Enter Customer Name:\n");
    gets(customer_name);

    printf("\n2. Enter Mobile Number:\n");
    gets(number);

    // MECHANIC INFORMATION

    printf("\nMechanic Details:\n");

    printf("\n1. Enter Mechanic Name:\n");
    gets(mechanic_name);

    printf("\n2. Enter the 5 digit Mechanic Id:\n");
    scanf("%d", &mechanic_id);
    fgetc(stdin);
    system("cls");

    // CAR INFORMATION

    int brand;

    printf("\nCar Information:\n\n");

    printf("1. Select Brand Name:\n\n");

    printf("Enter 1 : HONDA\nEnter 2 : HYUNDAI\nEnter 3 : MARUTI SUZUKI\nEnter 4 : TATA\nEnter 5 : TOYOTA\nEnter 6 : OTHERS\n");
    scanf("%d", &brand);
    fgetc(stdin);

    printf("\n2. Enter Car Model:\n");
    gets(car_model);

    // SERVICE KEYPOINT INFORMATION

    int i;
    int serv_input[9];
    int service_cost[8], cost = 0;
    char key;
    char feedback[100];

    for (i = 0; i < 8; i++)
    {
        service_cost[i] = 0;
    }

    printf("\nSelect the Services:\n\n");

    printf("Press 1 for Yes and 0 for No\n\n");

    printf("Were the Break Pads changed: ");
    scanf("%d", &serv_input[0]);

    printf("Were the Tyres changed, if yes then how many tyres? ");
    scanf("%d", &serv_input[1]);

    printf("Were the AC Filters changed: ");
    scanf("%d", &serv_input[2]);

    printf("Rubbing Polish:");
    scanf("%d", &serv_input[3]);

    printf("Wheel Alignment: ");
    scanf("%d", &serv_input[4]);

    printf("Dent Repair and Painting: ");
    scanf("%d", &serv_input[5]);

    printf("Infotenment System Repair: ");
    scanf("%d", &serv_input[6]);

    printf("Were Engine Oil changed: ");
    scanf("%d", &serv_input[7]);

    system("cls");

    printf("INVOICE:\n\n");

    billformat(customer_name, date, service_centre_info, number, car_model);

    *getcost(brand, serv_input, service_cost);

    billgenerator(i, cost, brand, serv_input, service_cost);

    fgetc(stdin);

    // CUSTOMER FEEDBACK

    printf("\nCUSTOMER FEEDBACK:");

    printf("\n\nTo rate our services please give feedback.\n");
    printf("To give feedback press y\n");
    printf("To skip this step press n\n");
    scanf("%c", &key);
    fgetc(stdin);

    if (key == 'y')
    {
        printf("\nFeedback:\n");
        gets(feedback);
        printf("\n\nThank You for choosing our services!");
    }
    else
    {
        printf("\n\nThank You for choosing our services!");
    }

    // SAVING BILL IN FILE TXT

    FILE *fptr;

    fptr = fopen("INVOICE.txt", "w");

    fprintf(fptr, "\t        GALAXY CAR SERVICES");
    fprintf(fptr, "\n--------------------------------------------------");

    fprintf(fptr, "\nDate: %s", date);
    fprintf(fptr, "\nBranch: %s\n", service_centre_info);
    fprintf(fptr, "--------------------------------------------------\n");
    fprintf(fptr, "Mechanic name: %s\n", mechanic_name);
    fprintf(fptr, "Mechanic ID no: %d\n", mechanic_id);
    fprintf(fptr, "--------------------------------------------------");

    fprintf(fptr, "\n1. Customer Name: %s", customer_name);
    fprintf(fptr, "\n2. Contact Number: %s", number);
    fprintf(fptr, "\n3. Car Model: %s", car_model);
    fprintf(fptr, "\n--------------------------------------------------\n");

    fprintf(fptr, "Services\t\t\t\t");
    fprintf(fptr, "Total\t\t");
    fprintf(fptr, "\n--------------------------------------------------");
    fprintf(fptr, "\n\n");

    fprintf(fptr, "Break Pads\t\t\t\t%d\n", service_cost[0]);
    fprintf(fptr, "Tyres\t\t\t\t\t%d\n", service_cost[1]);
    fprintf(fptr, "AC Filters\t\t\t\t%d\n", service_cost[2]);
    fprintf(fptr, "Rubbing Polish\t\t\t\t%d\n", service_cost[3]);
    fprintf(fptr, "Wheel Alignment\t\t\t\t%d\n", service_cost[4]);
    fprintf(fptr, "Dent Repair and Painting\t\t%d\n", service_cost[5]);
    fprintf(fptr, "Infotenment System\t\t\t%d\n", service_cost[6]);
    fprintf(fptr, "Engine Oil\t\t\t\t%d\n", service_cost[7]);

    for (i = 0; i < 8; i++)
    {
        cost = cost + service_cost[i];
    }
    int labour = (0.1) * cost;
    int Total;
    int dis, gst, netTotal;
    int grandTotal;

    Total = labour + cost;

    fprintf(fptr, "Labour Charges\t\t\t\t%d\n", labour);
    fprintf(fptr, "\n--------------------------------------------------");
    fprintf(fptr, "\nSub Total\t\t\t\t%d", Total);

    if (Total < 5000)
    {
        dis = 0.05 * Total;
        netTotal = Total - dis;
        fprintf(fptr, "\nDiscount @5%s\t\t\t\t%d", "%", dis);
    }
    else if (Total >= 5000 && Total <= 10000)
    {
        dis = 0.08 * Total;
        netTotal = Total - dis;
        fprintf(fptr, "\nDiscount @8%s\t\t\t\t%d", "%", dis);
    }
    else if (Total > 10000)
    {
        dis = 0.12 * Total;
        netTotal = Total - dis;
        fprintf(fptr, "\nDiscount @12%s\t\t\t\t%d", "%", dis);
    }
    else
    {
        printf("Error");
    }

    gst = 0.18 * netTotal;
    grandTotal = netTotal + gst;

    fprintf(fptr, "\n\nNet total\t\t\t\t%d", netTotal);
    fprintf(fptr, "\nGST @18%s\t\t\t\t%d", "%", gst);
    fprintf(fptr, "\n--------------------------------------------------\n");
    fprintf(fptr, "Grand total\t\t\t\t%d", grandTotal);
    fprintf(fptr, "\n--------------------------------------------------\n");
    fprintf(fptr, "\t\tTHANK YOU\n");
    fprintf(fptr, "\n\t\tCUSTOMER FEEDBACK\n");

    if (key == 'y')
        fprintf(fptr, "%s", feedback);
    else
        fprintf(fptr, "No feedback given by customer");

    fclose(fptr);

    return 0;
}