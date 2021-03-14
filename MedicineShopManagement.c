#include<stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
HANDLE H;
COORD coord = {0, 0};
void Add_Brand_Info();
void Show_Brand_List();
void brand();
void user_login();
void user_menu();
void admin_login();
int main();
void Admin();
void user_complain();
void complain_admin();
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void welcome()
{
    H = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H, 10);

  printf(R"EOF(


  ||========================================================================||
  ||</|\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//|\>||
  ||//*\\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\//*\\||
  ||(*O*))============================================================((*O*)||
  ||\\*//                                                              \\*//||
  ||<\|/                                                                \|/>||
  ||>>|                                                                  |<<||
  ||>>|                                                                  |<<||
)EOF");
printf("  ||<<|      ");
SetConsoleTextAttribute(H, 9);
printf("******  *** *   *  ******  *      *  ** *      ***** ");
SetConsoleTextAttribute(H, 10);
printf("       |<<||\n");
printf("  ||<<|      ");
SetConsoleTextAttribute(H, 9);
printf("*       *    *  *  *       * *    *  *    *   *      ");
SetConsoleTextAttribute(H, 10);
printf("       |>>||\n");
printf("  ||>>|      ");
SetConsoleTextAttribute(H, 9);
printf("*       *    *  *  *       *  *   *  *     *  *      ");
SetConsoleTextAttribute(H, 10);
printf("       |<<||\n");
printf("  ||>>|      ");
SetConsoleTextAttribute(H, 9);
printf("******  *   *   *  ******  *   *  *  *     *   ***** ");
SetConsoleTextAttribute(H, 10);
printf("       |<<||\n");
printf("  ||<<|      ");
SetConsoleTextAttribute(H, 9);
printf("*       * *     *  *       *    * *  *     *        *");
SetConsoleTextAttribute(H, 10);
printf("       |>>||\n");
printf("  ||>>|      ");
SetConsoleTextAttribute(H, 9);
printf("*       *   *   *  *       *     **  *    *         *");
SetConsoleTextAttribute(H, 10);
printf("       |<<||\n");
printf("  ||>>|      ");
SetConsoleTextAttribute(H, 9);
printf("*       *    *  *  ******  *      *  ** *      ***** ");
SetConsoleTextAttribute(H, 10);
printf("       |<<||\n");
printf("  ||>>|                                                                  |<<||\n");
printf("  ||>>|                                                                  |<<||\n");
printf("  ||<<|                     ");
SetConsoleTextAttribute(H, 12);
printf("FRIENDS MEDICINE SHOP");
SetConsoleTextAttribute(H, 10);
printf("                        |>>||\n");
printf("  ||>>|                                                                  |<<||\n");
printf("  ||<<|                          ");
SetConsoleTextAttribute(H, 14);
printf("Since-2021");
SetConsoleTextAttribute(H, 10);
printf("                              |>>||\n");
printf("  ||<<|                                                                  |>>||\n");
printf("  ||<<|                   ");
SetConsoleTextAttribute(H, 13);
printf("Mirpur-2,Dhaka,Bangladesh");
SetConsoleTextAttribute(H, 10);
printf("                      |>>||");
printf(R"EOF(
  ||</|\                                                                /|\>||
  ||//*\\==============================================================//*\\||
  ||(*O*))/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\((*O*)||
  ||\\*//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\*//||
  ||<\|///============================================================\\\|/>||
 )EOF");
    time_t now = time(&now);
    if (now == -1)
    {
        puts("The time() function failed");
    }
    struct tm *ptr = localtime(&now);
    if (ptr == NULL){
        puts("The gmtime() function failed");
    }
    char timedate[24];
    strcpy(timedate, asctime(ptr));
    SetConsoleTextAttribute(H, 10);
    printf(" ||>>|//                                                              \\\\|<<||\n");
    printf("  ||<<|/");
    SetConsoleTextAttribute(H, 11);
    printf("      Date: %c%c %c%c%c %c%c%c%c        %c%c%c           ",timedate[8],timedate[9],timedate[4],timedate[5],timedate[6],timedate[20],timedate[21],timedate[22],timedate[23],timedate[0],timedate[1],timedate[2]);
    printf("Time: %c%c%c%c%c%c%c%c     ",timedate[11],timedate[12],timedate[13],timedate[14],timedate[15],timedate[16],timedate[17],timedate[18]);
    SetConsoleTextAttribute(H, 10);
    printf("\\|<<||\n");
    printf("  ||</|\\                                                                /|\\>||\n");
    printf("  ||//*\\\\                                                              //*\\\\||");
    printf(R"EOF(
  ||(*O*))============================================================((*O*)||
  ||\\*//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\*//||
  ||<\|//\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\\|/>||
  ||========================================================================||
    )EOF");
    SetConsoleTextAttribute(H, 14);
}


void Add_Brand_Info()
{
    int price;
    FILE *fptr;
    char brands[50],medicine[20];
    fptr = fopen("demo.txt", "a");
    if (fptr == NULL)
    {
        printf("\t\t\tFile does not exists \n");

    }
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tAdd Brand Info:\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tEnter the brand name: ");
    scanf("\t\t\t%s", &brands);
    fprintf(fptr, "\t\t\tBrand: %s\n", brands);
    printf("\n\t\t\tEnter the medicine name: ");
    scanf("\t\t\t%s", &medicine);
    fprintf(fptr, "\t\t\tMedicine: %s\n", medicine);
    printf("\t\t\tEnter medicine price: ");
    scanf("\t\t\t%d", &price);
    fprintf(fptr, "\t\t\tPrice: %d tk\n\n", price);
    fclose(fptr);
    printf("\n\n\t\t\tPress any key to Brand");
    getch();
    system("cls");
    welcome();
    brand();
}


void Show_Brand_List()
{
    system("cls");
    welcome();
    FILE *fp;
    char buff[255];
    {
        SetConsoleTextAttribute(H, 13);
        printf("\n\n\t\t\tBrand List:\n\n");
        SetConsoleTextAttribute(H, 14);
    }
    fp = fopen("demo.txt", "r");
    while(fgets(buff, sizeof(buff), fp) != NULL)
    {
        fputs(buff, stdout);
        fputs("\n\n", stdout);
     }
    fclose(fp);
    printf("\t\t\tPress any key to Brand");
    getch();
    system("cls");
    welcome();
    brand();
}

void delete_brand()
{
    FILE *main, *temp;
    char ban[100]="demo.txt";
    main=fopen(ban,"r");
    temp=fopen("temp.txt","w");

    char buffer[255];
    char buff[200];
    int count = 1;
    int del;


    if (main == NULL || temp == NULL)
    {
        printf("\t\t\tFile does not exists \n");
        return;
    }
    SetConsoleTextAttribute(H, 13);
    printf("\t\t\tDelete Brand: \n");
    SetConsoleTextAttribute(H, 14);

     while(fscanf(main, "%s", buff)!=EOF)
    {
    printf("\t\t\t%s \n", buff);
    }
    printf("\t\t\tDelete row: ");
    scanf("\t\t\t%d\n",&del);
    rewind(main);
    while ((fgets(buffer, 255, main)) != NULL)
    {
        if (del != count)
            fputs(buffer, temp);
        count++;
    }
    fclose(main);
    fclose(temp);
    remove(ban);
    rename("temp.txt", ban);
    SetConsoleTextAttribute(H, 13);
    printf("\t\t\tDelete Successful\n");
    SetConsoleTextAttribute(H, 14);
    main = fopen(ban, "r");
    while(fscanf(main, "%s", buff)!=EOF)
    {
    printf("\t\t\t%s \n", buff);
    }
    fclose(main);
    system("cls");
    welcome();
    Show_Brand_List();
}

void update_brand()
{
    int price;
    char brands[50],medicine[20];
    FILE *main, *temp;
    char ban[100]="demo.txt";
    main=fopen(ban,"r");
    temp=fopen("temp.txt","w");

    char buffer[255];
    char buff[200];
    int count = 1;
    int del;


    if (main == NULL || temp == NULL)
    {
        printf("\t\t\tFile does not exists \n");
        return;
    }
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tUpdate Brand: \n");
    SetConsoleTextAttribute(H, 14);

     while(fscanf(main, "%s", buff)!=EOF)
    {
    printf("\t\t\t%s \n", buff);
    }
    printf("\n\t\t\tUpdate row: ");
    scanf("\t\t\t%d",&del);
    rewind(main);
    while ((fgets(buffer, 255, main)) != NULL)
    {
        if (del != count)
            fputs(buffer, temp);
        else if (del==count)
        {
        printf("\n\t\t\tEnter the brand name: ");
        scanf("\t\t\t%s", &brands);
        fprintf(temp, "\t\t\tBrand: %s\n", brands);
        printf("\n\t\t\tEnter the medicine name: ");
        scanf("\t\t\t%s", &medicine);
        fprintf(temp, "\t\t\tMedicine: %s\n", medicine);
        printf("\t\t\tEnter medicine price: ");
        scanf("\t\t\t%d", &price);
        fprintf(temp, "\t\t\tPrice: %d tk\n\n", price);
        }
        count++;
    }
    fclose(main);
    fclose(temp);
    remove(ban);
    rename("temp.txt", ban);
    printf("\t\t\tDelete Successful\n");
    main = fopen(ban, "r");
    while(fscanf(main, "%s", buff)!=EOF)
    {
    printf("\t\t\t%s \n", buff);
    }
    fclose(main);
    system("cls");
    welcome();
    Show_Brand_List();
}

void brand()
{
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\t\tBRAND: \n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Add Brand Info \n");
    printf("\t\t\t2. Show Brand List \n");
    printf("\t\t\t3. Update Brand Info \n");
    printf("\t\t\t4. Delete Brand Info\n");
    printf("\t\t\t5. Back to Admin Panel\n");
    int ch;
    printf("\n\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    system("cls");
    welcome();
    switch(ch)
    {
    case 1:
        Add_Brand_Info();
        break;
    case 2:
        Show_Brand_List();
        break;
    case 3:
        update_brand();
        break;
    case 4:
        delete_brand();
        break;
    case 5:
        Admin();
        break;

    default:
        printf("\t\t\tWrong Input\n");

    }

}

void about()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tAbout Us:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\nFriends Medicine Shop is the biggest digital pharmacy of Bangladesh. \nCurrently the free home delivery service is available to residents of Dhaka city only, \nand throughout the country for a very nominal charge and no minimum order volume restrictions. \nBanglaMeds was created with a vision to serve people with a smile, \nto provide quality service over a virgin sector and become the industry leader in E-commerce healthcare.");
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\n\t\t\tMd. Abu Bakar Siddiq\n\t\t\tEmail: abubakar32888@gmail.com\n\n\t\t\tMd. Hadisur Rahman\n\t\t\tEmail: hadisurrahman2020@gmail.com\n\n\t\t\tNishat Summya  Mitu\n\t\t\tEmail: nishatmitu111@gmail.com\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\n\n\t\t\tPress any key to Information");
    getch();
    system("cls");
    welcome();
    information();
}

void terms()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tTerms and Condition:\n");
    SetConsoleTextAttribute(H, 14);
    printf("Terms of Use:\nWelcome to BanglaMeds.com.bd. BanglaMeds Pharmacy Limited (BanglaMeds) provides access to the BanglaMeds.com.bd website or the mobile application/app or any other media (Website) to you subject to the terms and conditions (Terms) set out on this page. By using the Website, you, a registered or guest user in terms of the eligibility criteria set out herein (User) agree to be bound by the Terms. Please read them carefully as your continued usage of the Website, you signify your agreement to be bound by these Terms. If you do not want to be bound by the Terms, you must not subscribe to or use the Website or our services. By impliedly or expressly accepting these Terms, you also accept and agree to be bound by BanglaMeds Policies (including but not limited to Privacy Policy available. In these Terms, references to you, User shall mean the end user/customer accessing the Website, its contents and using the Services offered through the Website. References to the “Website”, BanglaMeds, “BanglaMeds.com.bd”, we, us and our shall mean the Website and/or BanglaMeds Pharmacy Limited. The contents set out herein form an electronic record in terms of Information & Communication Technology Act, 2006 and rules there under as applicable and as amended from time to time. As such, this document does not require any physical or digital signatures and forms a valid and binding agreement between the Website and the User. The Website is operated by BanglaMeds Pharmacy Limited., a company incorporated under the laws of Bangladesh having its registered office at Plot#69, Rajuk Karmachari Commercial Complex, Sector-7, Uttara, Dhaka-1230, Bangladesh. All references to the Website in these Terms shall deem to refer to the aforesaid entity in inclusion of the online portal.");
    printf("\n\n\t\t\tPress any key to Information");
    getch();
    system("cls");
    welcome();
    information();
}

void privacy()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tPrivacy and Policy:\n");
    SetConsoleTextAttribute(H, 14);
    printf("When you use our Website, we collect and store your personal information which is provided by you from time to time. Our primary goal in doing so is to provide our valuable customers and users with  safe, efficient, smooth and customized experience. This allows us to provide services and features that most likely meet your needs, and to customize our website to make your experience safer and easier. More importantly, while doing so, we collect personal information from you that we consider necessary for achieving this purpose. Below are some of the ways in which we collect and store your information: We receive and store any information you enter on our website or give us in any other way. We use the information that you provide for such purposes as responding to your requests, customizing future shopping for you, improving our stores, and communicating with you. We also store certain types of information whenever you interact with us. For example, like many websites, we use cookies, and we obtain certain types of information when your web browser accesses BanglaMeds.com.bd.bd or advertisements and other content served by or on behalf of friends.com.bd on other websites. To help us make e-mails more useful and interesting, we often receive a confirmation when you open e-mail from Friends Medicine Shop if your computer supports such capabilities. Information about our customers is an important part of our business, and we are not in the business of selling it to others. We release account and other personal information when we believe release is appropriate to comply with the law; enforce or apply our Terms of Use and other agreements; or protect the rights, property, or safety of friends.com.bd, our users, or others. This includes exchanging information with other companies and organizations for fraud protection");
    printf("\n\n\t\t\tPress any key to User Manu");
    getch();
    system("cls");
    welcome();
    user_menu();
}

void information()
{
    system("cls");
    welcome();
    int a;
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tInformation:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. About Us\n\t\t\t2. Terms and Conditions\n\t\t\t3. Privacy and Policy\n\t\t\t4. Back to User Menu\n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("\t\t\t%d",&a);
    switch(a)
    {
    case 1:
        about();
        break;
    case 2:
        terms();
        break;
    case 3:
        privacy();
        break;
    case 4:
        system("cls");
        welcome();
        user_menu();
        break;
    default:
        system("cls");
        welcome();
        printf("\t\t\tWrong Input!\n");
    }

}

void user_logout()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tLOGOUT SUCCESSFUL.\n\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tPress any key to Main Menu.\n");
    getch();
    system("cls");
    main();
}

void user_profile()
{
    system("cls");
    welcome();
    FILE *fp;
    char buff[255];
    {
        SetConsoleTextAttribute(H, 13);
        printf("\n\t\t\tMy Profile:\n\n");
        SetConsoleTextAttribute(H, 14);
    }
    fp = fopen("user.txt", "r");
    while(fgets(buff, sizeof(buff), fp) != NULL)
    {
        fputs(buff, stdout);
        fputs("\n\n", stdout);
     }
    fclose(fp);
    printf("\n\n\t\t\tPress any key to User Menu.\n");
    getch();
    system("cls");
    welcome();
    user_menu();
}


void user_complain()
{
    system("cls");
    welcome();
    char complain[500],name[20],email[20];
    FILE *fptr;
    fptr = fopen("complain.txt", "a");
    if (fptr == NULL)
    {
        printf("\t\t\tFile does not exists \n");
    }
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tType your complain:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tName: ");
    scanf("\t\t\t%s",&name);
    fprintf(fptr, "\t\t\tName: %s\n ",name);
    printf("\n\t\t\tEmail: ");
    scanf("\t\t\t%s",&email);
    fprintf(fptr, "\t\t\tEmail: %s\n ",email);
    printf("\n\t\t\tComplain: ");
    scanf("\t\t\t%s",&complain);
    fprintf(fptr, "\t\t\tComplain: %s",complain);
    fclose(fptr);

    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tYour complain successful.\n\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tPress any key to User Menu.\n");
    getch();
    system("cls");
    welcome();
    user_menu();
}

void buy_medicine()
{
    system("cls");
    welcome();
    char Brand[10],Medicine[10],Name[10],father[10],village[10],thana[10],distric[10];
    FILE *fptr;
    int Amount,house,BKASH,Verify,password;
    fptr = fopen("med.txt", "a");
    if (fptr == NULL)
    {
        printf("\t\t\tFile does not exists \n");
    }
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tBuy Medicine:\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tEnter Brand Name: ");
    scanf("\t\t\t%s",&Brand);
    fprintf(fptr, "\t\t\tBrand Name: %s,\n ",Brand);
    printf("\t\t\tEnter Medicine Name: ");
    scanf("\t\t\t%s",&Medicine);
    fprintf(fptr, "\t\t\tMedicine Name: %s,\n ",Medicine);
    printf("\t\t\tEnter Amount of Medicine: ");
    scanf("\t\t\t%d",&Amount);
    fprintf(fptr, "\t\t\tAmount of Medicine: %d,\n ",Amount);

    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tOrder & Delivery step:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tEnter Your Name: ");
    scanf("\t\t\t%s",&Name);
    fprintf(fptr, "\t\t\tName: %s,\n ",Name);
    printf("\t\t\tEnter your Father's name: ");
    scanf("\t\t\t%s",&father);
    fprintf(fptr, "\t\t\tFather's Name: %s,\n ",father);
    printf("\t\t\tEnter your City/Village name: ");
    scanf("\t\t\t%s",&village);
    fprintf(fptr, "\t\t\tCity/Village Name: %s,\n ",village);
    printf("\t\t\tEnter your House number: ");
    scanf("\t\t\t%d",&house);
    fprintf(fptr, "\t\t\tHouse Number: %d,\n ",house);
    printf("\t\t\tEnter your Thana name: ");
    scanf("\t\t\t%s",&thana);
    fprintf(fptr, "\t\t\tThana Name: %s,\n ",thana);
    printf("\t\t\tEnter your Distric name: ");
    scanf("\t\t\t%s",&distric);
    fprintf(fptr, "\t\t\tDistric Name: %s,\n ",distric);
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tPayment System:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tMobile Banking: Bkash\n\t\t\tAccount Type: Merchant Account\n\t\t\tBkash Number: 01521744196\n\n");
    printf("\n\t\t\tEnter your BKASH number: ");
    scanf("\t\t\t%d",&BKASH);
    fprintf(fptr, "\t\t\tBkash Number: %d,\n ",BKASH);
    printf("\t\t\tEnter pin to Verify your BKASH number: ");
    scanf("\t\t\t%d",&Verify);
    fprintf(fptr, "\t\t\tVerify Number: %d,\n ",Verify);

    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tVerify Successful\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tEnter your BKASH password: ");
    scanf("\t\t\t%d",&password);
    fprintf(fptr, "\t\t\tBkash Password: %d.\n ",password);
    fclose(fptr);

    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t###############################################################\n");
    printf("\t##################");
    SetConsoleTextAttribute(H, 14);
    printf(" Friends Medicine Shop");
    SetConsoleTextAttribute(H, 13);
    printf(" ######################\n");
    printf("\t###############################################################\n");
    printf("\t                                                               \n");
    printf("\t #########  ##     ##      ##      ###    ##  ##   ##   #####  \n");
    printf("\t    ##      ##     ##     ####     ## #   ##  ## ##    #       \n");
    printf("\t    ##      #########    ##  ##    ##  #  ##  ###       #####  \n");
    printf("\t    ##      ##     ##   ########   ##   # ##  ## ##          # \n");
    printf("\t    ##      ##     ##  ##      ##  ##    ###  ##   ##   #####  \n");
    printf("\t                                                               \n");
    printf("\t###############################################################\n");
    printf("\t###################");
    SetConsoleTextAttribute(H, 14);
    printf(" Your order successful");
    SetConsoleTextAttribute(H, 13);
    ;printf(" #####################\n");
    printf("\t###############################################################\n\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tPress any key to User Manu.\n");
    getch();
    system("cls");
    welcome();
    user_menu();
}

void price_list()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tPrice List:\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tBeximco:\n\t\t\t1. Acifix\t120tk\n\t\t\t2. Aristocal\t80tk\n\t\t\t3. clobex\t150tk\n\t\t\t4. Cox B\t125tk\n\t\t\t5. Cerivin\t100tk\n\n");
    printf("\t\t\tACI:\n");
    printf("\t\t\t1. Abixa\t110tk\n\t\t\t2. Acical\t70tk\n\t\t\t3. Amlex\t80tk\n\t\t\t4. Cab\t200tk\n\t\t\t5. Denicol\t65tk\n\n");
    printf("\t\t\tAmce:\n");
    printf("\t\t\t1. A-Cold\t130tk\n\t\t\t2. A-Fenac\t140tk\n\t\t\t3. A Fenac Jel\t90tk\n\t\t\t4. D-Calex\t180tk\n\t\t\t5. Calbo-B\t45tk\n\n");
    printf("\t\t\tSqure:\n");
    printf("\t\t\t1. Ace plus\t110tk\n\t\t\t2. Adryl\t210tk\n\t\t\t3. Cabrol\t80tk\n\t\t\t4. Calbo-C\t250tk\n\t\t\t5. Ceevit\t20tk\n\n");
    printf("\t\t\tSK+F:\n");
    printf("\t\t\t1. Alcet\t60tk\n\t\t\t2. Rosela\t180tk\n\t\t\t3. Vifas\t270tk\n\t\t\t4. Esita\t175tk\n\t\t\t5. Danilo\t350tk\n\t\t\t6. Nayproxen\t160tk\n\t\t\t\n\t\t\t7. Tramadol\t90tk\n\n");
    printf("\t\t\tHealthcare:\n");
    printf("\t\t\t1. Acifix\t245tk\n\t\t\t2. Aristocal\t420tk\n\t\t\t3. clobex\t130tk\n\t\t\t4. Cox B\t275tk\n\t\t\t5. Cerivin\t360tk\n\n");
    printf("\t\t\tPress any key to Buy Medicine.\n");
    getch();
    system("cls");
    welcome();
    buy_medicine();
}

void beximco()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tBeximco medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Acifix\n\t\t\t2. Aristocal\n\t\t\t3. clobex\n\t\t\t4. Cox B\n\t\t\t5. Cerivin\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}
void aci()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tACI medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Abixa\n\t\t\t2. Acical\n\t\t\t3. Amlex\n\t\t\t4. Cab\n\t\t\t5. Denicol\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}
void acme()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tAmce medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. A-Cold\n\t\t\t2. A-Fenac\n\t\t\t3. A Fenac Jel\n\t\t\t4. D-Calex\n\t\t\t5. Calbo-B\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}
void squre()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tSqure medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Ace plus\n\t\t\t2. Adryl\n\t\t\t3. Cabrol\n\t\t\t4. Calbo-C\n\t\t\t5. Ceevit\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}
void skf()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tSK+F medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Alcet\n\t\t\t2. Rosela\n\t\t\t3. Vifas\n\t\t\t4. Esita\n\t\t\t5. Danilo\n\t\t\t6. \n\t\t\t\n\t\t\t7. Tramadol\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}
void healthcare()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tHealthcare medicine list:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Acifix\n\t\t\t2. Aristocal\n\t\t\t3. clobex\n\t\t\t4. Cox B\n\t\t\t5. Cerivin\n\n");
    printf("\t\t\tPress any key to Price List.\n");
    getch();
    system("cls");
    welcome();
    price_list();
}

void brand_name()
{
    system("cls");
    welcome();
    int a;
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tBrand List:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Beximco\n\t\t\t2. ACI\n\t\t\t3. Acme\n\t\t\t4. Squre\n\t\t\t5. SK+F\n\t\t\t6. Healthcare\n\t\t\t7. Back to User Menu\n\n");
    printf("\t\t\tEnter your choice: ");
    scanf("\t\t\t%d",&a);
     switch(a)
    {
    case 1:
        beximco();
        break;
    case 2:
        aci();
        break;
    case 3:
        acme();
        break;
    case 4:
        squre();
        break;
    case 5:
        skf();
        break;
    case 6:
        healthcare();
        break;
    case 7:
        system("cls");
        welcome();
        user_menu();
        break;
    default:
        system("cls");
        welcome();
        printf("\t\t\tWrong Input!\n");
    }
}

void EmergencyContact()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tEmergency Contact:\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tEmail: hadisurrahman2020@gmail.com\n\t\t\tPhone: 01521744196\n\t\t\tFacebook: www.facebook.com/HNnafis\n\n\n");
    printf("\t\t\tPress any key to User Menu.\n");
    getch();
    system("cls");
    welcome();
    user_menu();
}



void user_menu()
{
    int a;
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\t\tUSER PANEL: \n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Brand name \n");
    printf("\t\t\t2. Price List \n");
    printf("\t\t\t3. Buy medicine \n");
    printf("\t\t\t4. Information \n");
    printf("\t\t\t5. Emergency Contact \n");
    printf("\t\t\t6. Complain Box \n");
    printf("\t\t\t7. My Profile \n");
    printf("\t\t\t8. Log Out \n");
    printf("\n\t\t\tEnter your choice: ");
    scanf("\t\t\t%d",&a);
    switch(a)
    {
        case 1:
            brand_name();
        case 2:
            price_list();
        case 3:
            buy_medicine();
            break;
        case 4:
            information();
            break;
        case 5:
            EmergencyContact();
            break;
        case 6:
            user_complain();
            break;
        case 7:
            user_profile();
            break;
        case 8:
            user_logout();
            break;

        default:
            printf("\t\t\tWrong Input!\n");
    }
}

void user_login()
{
    char x[25],y[25];
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tLOGIN YOUR ACCOUNT");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tUser Name: ");
    scanf("%s",&x);
    printf("\t\t\tUser Password: ");
    scanf("%s",&y);
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tLog in Successful\n\n");
    SetConsoleTextAttribute(H, 14);
    system("cls");
    welcome();
    user_menu();
}

void registration()
 {
     char name[30],gender[50],adress[50],number[50],email[50], user_name[25], password[50];
     FILE *fptr;
     int id;

     float intake, section;
     fptr = fopen("user.txt", "w+");
     if (fptr == NULL)
     {
         printf("\t\t\tFile does not exists \n");
         return;
     }
     SetConsoleTextAttribute(H, 13);
     printf("\n\t\t\tCREAT YOUR ACCOUNT\n");
     SetConsoleTextAttribute(H, 14);
     printf("\t\t\tEnter your name: ");
     scanf("\t\t\t%s", &name);
     fprintf(fptr, "\t\t\tName: %s\n ", name);
     printf("\t\t\tEnter your gender: ");
     scanf("\t\t\t%s", &gender);
     fprintf(fptr, "\t\t\tGender: %s\n ", gender);
     printf("\t\t\tEnter your adress: ");
     scanf("\t\t\t%s", &adress);
     fprintf(fptr, "\t\t\tAdress: %s\n ", adress);
     printf("\t\t\tEnter your phone number: ");
     scanf("\t\t\t%s", &number);
     fprintf(fptr, "\t\t\tNumber: %s\n ", number);
     printf("\t\t\tEnter your email: ");
     scanf("\t\t\t%s", &email);
     fprintf(fptr, "\t\t\tEmail: %s\n", email);
     printf("\t\t\tEnter your user name: ");
     scanf("\t\t\t%s", &user_name);
     fprintf(fptr, "\t\t\tUser name: %s\n ", user_name);
     printf("\t\t\tEnter the password: ");
     scanf("\t\t\t%s", &password);
     fprintf(fptr, "\t\t\tPassword: %s\n", password);
     fclose(fptr);

     system("cls");
     welcome();
     SetConsoleTextAttribute(H, 13);
     printf("\n\t\t\tAccount Creat Successful.\n\n\n");
     SetConsoleTextAttribute(H, 14);
     printf("\n\t\t\tPress any kay to Log in");
     getch();
     user_login();

 }

void User()
{
    int a;
    printf("\n\t\t\t1. LOGIN\n\t\t\t2. REGISTRATION\n\n\t\t\tEnter your choice: ");
    scanf("%d",&a);
    system("cls");
    welcome();
    switch(a)
    {
        case 1:
             user_login();
             break;
        case 2:
             registration();
             break;

    }

}
void admin_login()
{
    char x[25],y[25];
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tLOGIN YOUR ACCOUNT");
    SetConsoleTextAttribute(H, 14);
    printf("\n\t\t\tUser Name: ");
    scanf("%s",&x);
    printf("\t\t\tUser Password: ");
    scanf("%s",&y);
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\n\t\t\tAdmin Login Successful\n\n");
    SetConsoleTextAttribute(H, 14);
    Admin();
}

void OrderRequest()
{
    {
    FILE *fp;
    char buff[255];
    {
        SetConsoleTextAttribute(H, 13);
        printf("\n\n\t\t\tOrder History:\n\n");
        SetConsoleTextAttribute(H, 14);
    }
    fp = fopen("med.txt", "r");
    while(fgets(buff, sizeof(buff), fp) != NULL)
    {
        fputs(buff, stdout);
        fputs("\n\n", stdout);
     }
    fclose(fp);
    printf("\t\t\tPress any key to Admin Panel");
    getch();
    system("cls");
    welcome();
    Admin();
}
}

void admin_logout()
{
    system("cls");
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tEXIT SUCCESSFUL.\n\n\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tPress any key to Main Menu.\n");
    getch();
    system("cls");
    main();
}

void complain_admin()
{
    system("cls");
    welcome();
    FILE *fp;
    char buff[255];
    {
        SetConsoleTextAttribute(H, 13);
        printf("\n\t\t\tReceived User Complain:\n\n");
        SetConsoleTextAttribute(H, 14);
    }
    fp = fopen("complain.txt", "r");
    while(fgets(buff, sizeof(buff), fp) != NULL)
    {
        fputs(buff, stdout);
        fputs("\n\n", stdout);
     }
    fclose(fp);
    printf("\n\n\t\t\tPress any key to Admin Panel");
    getch();
    system("cls");
    welcome();
    Admin();
}


void payment_system()
{
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tPayment System:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\tMobile Banking: Bkash\n\t\t\tAccount Type: Merchant Account\n\t\t\tBkash Number: 01521744196\n\n");
    printf("\t\t\tPress any key to Admin Menu.\n");
    getch();
    system("cls");
    welcome();
    Admin();
}

void Admin()
{
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\t\tADMIN PANEL: \n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. Brand \n");
    printf("\t\t\t2. Order Request \n");
    printf("\t\t\t3. Payment System \n");
    printf("\t\t\t4. Complain Box \n");
    printf("\t\t\t5. Exit \n");

    int ch;
    printf("\n\t\t\tEnter your Choice: ");
    scanf("%d", &ch);
    system("cls");
    welcome();
    switch(ch)
    {
    case 1:
        brand();
        break;
    case 2:
        OrderRequest();
        break;
    case 3:
        payment_system();
        break;
    case 4:
        complain_admin();
        break;
    case 5:
        admin_logout();
        break;

    default:
        system("cls");
        welcome();
        printf("\t\t\tWrong Input\n");
    }
}

int main()
{
    welcome();
    SetConsoleTextAttribute(H, 13);
    printf("\n\t\t\tMain Menu:\n");
    SetConsoleTextAttribute(H, 14);
    printf("\t\t\t1. USER\n");
    printf("\t\t\t2. ADMIN\n");
    int ch;
    printf("\n\t\t\tEnter Your Choice: ");
    scanf("%d", &ch);
    system("cls");
    welcome();
    switch(ch)
    {
    case 1:
        User();
        break;
    case 2:
        admin_login();
        break;

    default:
        system("cls");
        welcome();
        printf("\t\t\tWrong Input\n");
    }

    return 0;
}
