#include <stdio.h>
#include <string.h>
int mustafizur = 1, bank;
typedef struct Index
{
    //structer only use main funcation.
    int i;
    float f;
    double d;
    long int li;
} reg;

int dpass(int n)
{
    // Its make password lenth
    int d;
    if (n < 10)
    {
        d = 1;
    }
    else if (n < 100)
    {
        d = 2;
    }
    else if (n < 1000)
    {
        d = 3;
    }
    else if (n < 10000)
    {
        d = 4;
    }
    else if (n < 100000)
    {
        d = 5;
    }
    else if (n < 1000000)
    {
        d = 6;
    }

    else if (n < 10000000)
    {
        d = 7;
    }
    else
    {
        d = 8;
    }

    return d;
}

int maneyrecord(int tk)
{
    // Its carry main acount maney transaction record
    if (mustafizur == 1)
    {
        bank = tk;
    }
    if (bank > tk)
    {
        bank = tk;
    }
    mustafizur++;
    return bank;
}

char email(char email1[100])
{
    // this is the security of email. email1 means email caryying variable
    int n, c = 0, i;
    n = strlen(email1);
    for (i = 0; i < n; i++)
    {
        if (email1[i] == '@' && email1[n - 3] == 'c' && email1[n - 2] == 'o' && email1[n - 1] == 'm')
        {
            c = 1;
        }
    }
    return c;
}
int manu(int n)
{
    // it is my maun engine its work option 1,2,3,4
    int t = 0;
    if (n == 1 || n == 2 || n == 3 || n == 4)
    {
        t = 1;
    }
    return t;
}
int manu1(int n)
{
    // it is my maun engine its work option 1,2,3,4,5,6
    int t2 = 0;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6)
    {
        t2 = 1;
    }
    return t2;
}
int manu8(int n)
{
    // it is my maun engine its work option 1,2,3,4,5,6,7,8
    int t2 = 0;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5 || n == 6 || n == 7 || n == 8)
    {
        t2 = 1;
    }
    return t2;
}
int manu2(int n)
{
    // it is my maun engine its work option 1,2,3
    int t = 0;
    if (n == 1 || n == 2 || n == 3)
    {
        t = 1;
    }
    return t;
}
int manu5(int n)
{
    // it is my maun engine its work option 1,2,3,4,5
    int t2 = 0;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
    {
        t2 = 1;
    }
    return t2;
}
int greadsc()
{
    // This is sub branch of result section. Here is the work of the School & college result
    char str[100];
    printf("Enter Your Short name\n:");
    scanf("%s", &str);
    printf("Name:%s\n\n", str);

    FILE *fileresult;
    fileresult = fopen("Marksheet.txt", "a");
    fprintf(fileresult, "\nName:%s\n", str);
    int a, i, sum = 0, c = 0;
    double avg = 0, avg1 = 0;

    printf("How many subject are running in this time\n:");
    scanf("%d", &a);
    int arr[a];
    for (i = 1; i <= a; i++)
    {
        printf("Enter your %d number result using integer number Example:100,80,70 etc.Limit (0 to 100)\n:", i);
        scanf("%d", &arr[i]);
        if (arr[i] < 33)
        {
            printf("\t\tYour Gread is:FAIL\n\n");
            fprintf(fileresult, "\t\tYour Gread is:FAIL\n\n");
            c = 1;
            break;
        }

        while (arr[i] > 100 || arr[i] < 0)
        {
            printf("\t\tThis invlide Greade\n");
            printf("\t\t=====================\n");
            printf("Enter Again your %d number result\n:", i);
            scanf("%d", &arr[i]);
        }
    }

    if (c == 1)
    {
        printf("\nAll Results soft copy stored in Marksheet.txt File \n\n\t\tPower by Mustafizur Rahman President of (Dreamzone) Virtual World\n\n");
        fprintf(fileresult, "\t\tPower by Dreamzone Virtual World\n\n");
    }

    else
    {
        for (i = 1; i <= a; i++)
        {
            sum = sum + arr[i];
        }

        printf("\t\tYour Total Number is:%d\n\n", sum);
        fprintf(fileresult, "\t\tYour Total Number is:%d\n", sum);
        avg = sum;
        avg = avg / a;
        avg1 = avg / 20;
        printf("\t\tYour GPA is:%0.2lf\n", avg1);
        fprintf(fileresult, "\t\tYour GPA is:%0.2lf\n", avg1);
        if (avg >= 80)
        {
            printf("\t\tYour Gread is:A+\n");
            fprintf(fileresult, "\t\tYour Gread is:A+\n");
        }
        else if (avg >= 70)
        {
            printf("\t\tYour Gread is:A\n");
            fprintf(fileresult, "\t\tYour Gread is:A\n");
        }
        else if (avg >= 60)
        {
            printf("\t\tYour Gread is:A-\n");
            fprintf(fileresult, "\t\tYour Gread is:A-\n");
        }
        else if (avg >= 50)
        {
            printf("\t\tYour Gread is:B\n");
            fprintf(fileresult, "\t\tYour Gread is:B\n");
        }
        else if (avg >= 40)
        {
            printf("\t\tYour Gread is:C\n");
            fprintf(fileresult, "\t\tYour Gread is:C\n");
        }
        else if (avg >= 33)
        {
            printf("\t\tYour Gread is:D\n");
            fprintf(fileresult, "\t\tYour Gread is:D\n");
        }
        else
        {
            printf("\t\tYour Gread is: FAIL\n");
            fprintf(fileresult, "\t\tYour Gread is:FAIL\n");
        }

        printf("\nAll Results soft copy stored in Marksheet.txt File \n\n\t\tPower by Mustafizur Rahman President of (Dreamzone) Virtual World\n\n");
        fprintf(fileresult, "\t\tPower by Dreamzone Virtual World\n\n");
    }
    fclose(fileresult);
}
int greadun()
{
    char str[100];
    // This is sub branch of result section. Here is the work of the university result
    printf("Enter Your name Short\n:");
    scanf("%s", &str);
    printf("Name:%s\n\n", str);

    FILE *fileresult;

    fileresult = fopen("Marksheet.txt", "a");
    fprintf(fileresult, "\nName:%s\n", str);
    int a, i, c = 0;
    double avg = 0, avg1 = 0, sum = 0;
    printf("How many subject are running in this time\n:");
    scanf("%d", &a);
    double arr[a];
    for (i = 1; i <= a; i++)
    {
        printf("Enter your %d number result using double Example:4.00,3.90,3.65 etc. Limit (0.00 to 4.00)\n:", i);
        scanf("%lf", &arr[i]);
        while (arr[i] > 4.00 || arr[i] < 0.00)
        {
            printf("\t\tYour Result is Invalid\n");
            printf("\t\t========================\n");
            printf(" Again Enter your %d number result\n:", i);
            scanf("%lf", &arr[i]);
        }
    }
    for (i = 0; i < a; i++)
    {
        sum = sum + arr[i];
    }
    avg = sum / a;
    printf("\t\tYour Gread is:%0.2lf\n", avg);
    fprintf(fileresult, "\t\tYour Gread is:%0.2lf\n", avg);
    if (avg >= 3.75)
    {
        printf("\t\tYour Grade is:A+\n");
        fprintf(fileresult, "\t\tYour Grade is:A+\n");
    }
    else if (avg >= 3.50)
    {
        printf("\t\tYour Grade is:A\n");
        fprintf(fileresult, "\t\tYour Grade is:A\n");
    }
    else if (avg >= 3.25)
    {
        printf("\t\tYour Grade is:A-\n");
        fprintf(fileresult, "\t\tYour Grade is:A-\n");
    }
    else if (avg >= 3.00)
    {
        printf("\t\tYour Grade is:B+\n");
        fprintf(fileresult, "\t\tYour Grade is:B+\n");
    }
    else if (avg >= 2.75)
    {
        printf("\t\tYour Grade is:B\n");
        fprintf(fileresult, "\t\tYour Grade is:B\n");
    }
    else if (avg >= 2.50)
    {
        printf("\t\tYour Grade is:B-\n");
        fprintf(fileresult, "\t\tYour Grade is:B-\n");
    }
    else if (avg >= 2.25)
    {
        printf("\t\tYour Grade is:C+\n");
        fprintf(fileresult, "\t\tYour Grade is:C+\n");
    }
    else if (avg >= 2.00)
    {
        printf("\t\tYour Grade is:C\n");
        fprintf(fileresult, "\t\tYour Grade is:C\n");
    }
    else
    {
        printf("\t\tYour Grade is:FAIL\n");
        fprintf(fileresult, "\t\tYour Grade is:FAIL\n");
        printf("\nAll Results soft copy stored in Marksheet.txt File \n\n\t\tPower by Mustafizur Rahman President of (Dreamzone) Virtual World\n\n");
    }
    fclose(fileresult);
}
int result()
{
    // This is the main branch of result section
    FILE *fileresult;
    fileresult = fopen("Marksheet.txt", "a");

    int n, y;
    printf("1.School Result\n2.College Result \n3.University Result\n4.Back to the home manu\nPress:");
    scanf("%d", &n);
    y = manu(n);
    while (y != 1)
    {
        printf("Your Manu choose number is wrong\n");
        printf("==================================\n");
        printf("Enter Right number\n:");
        scanf("%d", &n);
        y = manu(n);
    }
    switch (n)
    {
    case 1:
        printf("\t\t\tSchool Result\n");
        printf("\t\t\t=================\n\n");
        fprintf(fileresult, "\t\t\tSchool Result\n");
        fprintf(fileresult, "\t\t\t=================\n\n");
        greadsc();
        fclose(fileresult);

        break;
    case 2:
        printf("\t\t\tcollege Result\n");
        printf("\t\t\t==========\n\n");
        fprintf(fileresult, "\t\t\tcollege Result\n");
        fprintf(fileresult, "\t\t\t==========\n\n");
        greadsc();
        fclose(fileresult);
        break;
    case 3:
        printf("\t\t\tUniversity Result\n");
        printf("\t\t===========================\n\n");
        fprintf(fileresult, "\t\t\tUniversity Result\n");
        fprintf(fileresult, "\t\t\t==========================\n\n");
        greadun();
        fclose(fileresult);
    case 4:

        break;

    default:

        break;
    }
}
int payment12(int tk, int pass, int re)
{
    // (tk) means main maney & (pass) means password & (re) buying maney
    int cpass, count = 0;
    // cpass mean conform password
    //fprintf(dcash,"%d time press wrong password\n",c);
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    // calling d cash password
    printf("For payment Enter your Dcash account password\n:");
    scanf("%d", &cpass);
    while (cpass != pass)
    {
        printf("\t\tWorng password\n\t\t==============\n");
        printf("Again inter your password\n:");
        scanf("%d", &cpass);
        count++;
    }
    fprintf(dcash, "%d time press wrong password\n");
    if (re > tk)
    {
        printf("\t\tYou do not have sufficient balance in your acount\n\t\t=============================================\n");
        fprintf(dcash, "\n\n\n\n\n\n\n\n\t\tYou do not have sufficient balance in your acount\n\t\t=============================================\n");
        printf("Payment error\n");
        fprintf(dcash, "Payment error\n");
        fprintf(dcash, "Payment error\n\n\n");
        printf("\n\nThank for choice our service Money related all record save in Moeny_Receive.txt\n");
        fclose(dcash);
    }
    else
    {
        tk = tk - re;
        maneyrecord(tk);
        printf("Your transaction amount is: %d tk\n", re);
        fprintf(dcash, "\n\n\n\n\n\n\n\n\nYour transaction amount is: %d tk\n", re);
        printf("The amount of maney remaining\n: %d tk\n", tk);
        fprintf(dcash, "The amount of maney remaining\n: %d tk\n\n\n", tk);
        printf("\n\n\t\tMoney Receive save in Marksheet.txt\n\t\t========================================\n\nThank for choice our service\n");
        fclose(dcash);
    }
}
int food(int t1, int p1)
{
    int t2, t3;
    // t1 carry taka p1 carry password
    // Sub funcation of market . It works here food-related.
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n, e1, d1, beef;
    printf("1.Eating Food\n2.Drinking Food\n3.Go to Home Manu\nPress:");
    scanf("%d", &n);
    t2 = manu2(n);
    while (t2 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &n);
        t2 = manu2(n);
    }

    switch (n)
    {
    case 1:

        printf("\tEating Food\n\t============\n");
        fprintf(dcash, "\tEating Food\n\t============\n");

        printf("1.Beef\n2.Vegetable\n3.Rice\n4.Go back to home Manu\nPress:");
        scanf("%d", &e1);
        t3 = manu(e1);
        while (t3 != 1)
        {
            printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
            printf("Again enter our number\nPress:");
            scanf("%d", &e1);
            t3 = manu(e1);
        }
        switch (e1)
        {
        case 1:
            printf("\nBeef\n======\n");
            fprintf(dcash, "\nBeef\n======\n");
            printf("Beef 500tk per kg\n");
            fprintf(dcash, "Beef 500tk per kg\n");
            printf("How many kg beef you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d kg beef\n", beef);
            printf("You par choose %d kg Beef\n", beef);
            beef = 500 * beef;
            // t1 carry taka p1 carry password

            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 2:
            printf("\nVegetable\n======\n");
            fprintf(dcash, "\nVegetable\n======\n");
            printf("Vegetable 100tk per kg\n");
            fprintf(dcash, "Vegetable 100tk per kg\n");
            printf("How many kg Vegetable you need\n:");
            scanf("%d", &beef);
            printf("You par choose %d kg Vegetable\n", beef);
            fprintf(dcash, "You par choose %d kg Vegetable\n\n\n", beef);
            beef = 100 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 3:
            printf("Rice 60tk per kg\n");
            fprintf(dcash, "Rice 60tk per kg\n");
            printf("How many kg Rice you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d kg Rice\n\n\n", beef);
            printf("You par choose %d kg Rice\n", beef);

            beef = 60 * beef;
            // t1 means main maney & p1 means password beef buying maney
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
            fclose(dcash);
        default:
            break;
        }
        break;
    case 2:
        printf("\tDrinking Food\n\t============\n");
        fprintf(dcash, "\tDrinking Food\n\t============\n");
        printf("1.7up\n2.Beer\n3.Minarel Water\n4.Go back to home Manu\nPress:");
        scanf("%d", &e1);

        t3 = manu(e1);
        while (t3 != 1)
        {
            printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
            printf("Again enter our number\nPress:");
            scanf("%d", &e1);
            t3 = manu(e1);
        }
        switch (e1)
        {
        case 1:
            printf("\n7up\n======\n");
            fprintf(dcash, "\n7up\n======\n");
            printf("7up 60tk per Liter\n");
            fprintf(dcash, "7up 60tk per Liter\n");
            printf("How many Liter 7up you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d liter 7up\n\n\n", beef);
            printf("You par choose %d liter 7up\n", beef);

            beef = 60 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 2:
            printf("\nBeer\n======\n");
            fprintf(dcash, "\nBeer\n======\n");
            printf("Beer 1200tk per liter\n");
            fprintf(dcash, "Beer 1200tk per liter\n");
            printf("How many liter beer you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d liter beer\n\n\n", beef);
            printf("You par choose %d liter beer\n", beef);

            beef = 100 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 3:
            printf("\nMineral Water\n======\n");
            fprintf(dcash, "\nMineral Water\n======\n");
            printf("Mineral Water 15tk per liter\n");
            fprintf(dcash, "Mineral Water 15tk per liter\n");
            printf("How many liter Mineral Water you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d liter Mineral Water\n\n\n", beef);
            printf("You par choose %d liter Mineral Water\n", beef);

            beef = 15 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
            fclose(dcash);
        default:
            break;
        }
        break;
        fclose(dcash);
    default:
        break;
    }
}
int dress(int t1, int p1)
{
    int t2, t3;
    // t1 carry taka p1 carry password
    // Sub funcation of market . It works here Dress-related.
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n, e1, d1, beef;
    printf("1.Male\n2.Female\n3.Go to Home Manu\nPress:");
    scanf("%d", &n);
    t2 = manu2(n);
    while (t2 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &n);
        t2 = manu2(n);
    }

    switch (n)
    {
    case 1:

        printf("\tMale\n\t============\n");
        fprintf(dcash, "\tMale\n\t============\n");

        printf("1.Shart\n2.Pants\n3.Shoes\n4.Go back to home Manu\nPress:");
        scanf("%d", &e1);
        t3 = manu(e1);
        while (t3 != 1)
        {
            printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
            printf("Again enter our number\nPress:");
            scanf("%d", &e1);
            t3 = manu(e1);
        }
        switch (e1)
        {
        case 1:
            printf("\nShirt\n======\n");
            fprintf(dcash, "\nShirt\n======\n");
            printf("Shirt 800tk per Pieces\n");
            fprintf(dcash, "Shirt 800tk per Pieces\n");
            printf("How many Pieces Shirt you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d Pieces Shirt\n", beef);
            printf("You par choose %d Pieces Shirt\n", beef);
            beef = 800 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 2:
            printf("\nPants\n======\n");
            fprintf(dcash, "\nPants\n======\n");
            printf("Pants 1800tk per Pieces\n");
            fprintf(dcash, "Pants 1800tk per Pieces\n");
            printf("How many Pieces Pants you need\n:");
            scanf("%d", &beef);
            printf("You par choose %d Pieces Pants\n", beef);
            fprintf(dcash, "You par choose %d Pieces Pants\n\n\n", beef);
            beef = 1800 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 3:
            printf("Shoes 2800tk per Pieces\n");
            fprintf(dcash, "Shoes 2800tk per Pieces\n");
            printf("How many shoes do you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d Pieces Shoes\n\n\n", beef);
            printf("You par choose %d Pieces Shoes\n", beef);

            beef = 2800 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
            fclose(dcash);
        default:
            break;
        }
        break;
    case 2:
        printf("\tFemale\n\t============\n");
        fprintf(dcash, "\tFemale\n\t============\n");
        printf("1.Top\n2.Jeans\n3.Shoes\n4.Go back to home Manu\nPress:");
        scanf("%d", &e1);
        t3 = manu(e1);
        while (t3 != 1)
        {
            printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
            printf("Again enter our number\nPress:");
            scanf("%d", &e1);
            t3 = manu(e1);
        }
        switch (e1)
        {
        case 1:
            printf("\nTop\n======\n");
            fprintf(dcash, "\nTop\n======\n");
            printf("Top 880tk per Pieces\n");
            fprintf(dcash, "top 880tk per Pieces\n");
            printf("How many Pieces Top you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d Pieces Top\n\n\n", beef);
            printf("You par choose %d Pieces Top\n", beef);

            beef = 880 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 2:
            printf("\nJeans\n======\n");
            fprintf(dcash, "\nJeans\n======\n");
            printf("Jeans 980tk per Pieces\n");
            fprintf(dcash, "Jeans 980tk per Pieces\n");
            printf("How many Pieces Jeans you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d Pieces Jeans\n\n\n", beef);
            printf("You par choose %d Pieces Jeans\n", beef);

            beef = 980 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
        case 3:
            printf("\nShoes\n======\n");
            fprintf(dcash, "\nShoes\n======\n");
            printf("Shoes 1500tk per Pieces\n");
            fprintf(dcash, "Shoes 1500tk per Pieces\n");
            printf("How many Pieces Shoes you need\n:");
            scanf("%d", &beef);
            fprintf(dcash, "You par choose %d Pieces Shoes\n\n\n", beef);
            printf("You par choose %d Shoes Pieces\n", beef);

            beef = 1500 * beef;
            payment12(t1, p1, beef);
            fclose(dcash);
            break;
            fclose(dcash);
        default:
            break;
        }
        break;
        fclose(dcash);
    default:
        break;
    }
}
int med(int t1, int p1)
{
    int t3;
    // t1 carry taka p1 carry password
    // Sub funcation of market . It works here medicine-related.
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n, e1, d1, beef;
    printf("1.Antibiotic\n2.Paracetamol\n3.Acidity capsule\n4.Go back to home Manu\nPress:");
    scanf("%d", &e1);
    t3 = manu(e1);
    while (t3 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &e1);
        t3 = manu(e1);
    }
    switch (e1)
    {
    case 1:
        // beef means only variable name
        printf("\nAntibiotic\n======\n");
        fprintf(dcash, "\nAntibiotic\n======\n");
        printf("Antibiotic 35tk per Pieces\n");
        fprintf(dcash, "Antibiotic 800tk per Pieces\n");
        printf("How many Pieces Antibiotic you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Antibiotic\n", beef);
        printf("You par choose %d Pieces Antibiotic\n", beef);
        beef = 35 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 2:
        printf("\nParacetamol\n======\n");
        fprintf(dcash, "\nParacetamol\n======\n");
        printf("Paracetamol 5 tk per Pieces\n");
        fprintf(dcash, "Paracetamol 5 tk per Pieces\n");
        printf("How many Pieces Paracetamol you need\n:");
        scanf("%d", &beef);
        printf("You par choose %d Pieces Paracetamol\n", beef);
        fprintf(dcash, "You par choose %d Pieces Paracetamol\n\n\n", beef);
        beef = 5 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 3:
        printf("Acidity capsule 9 tk per Pieces\n");
        fprintf(dcash, "Acidity capsule 9 tk per Pieces\n");
        printf("How many Acidity capsule do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Acidity capsule\n\n\n", beef);
        printf("You par choose %d Pieces Acidity capsule\n", beef);
        beef = 9 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
        fclose(dcash);
    default:
        break;
    }
}
int hometool(int t1, int p1)
{
    int t3;
    // t1 carry taka p1 carry password
    // Sub funcation of market . It works here home appliances related
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n, e1, d1, beef;
    printf("1.Televation\n2.Refrigerator\n3.AC\n4.Rice cooker\n5.Microwave Oven\n6.ceiling fan\n7.Washing machine\n8.Go back to home Manu\nPress:");
    scanf("%d", &e1);
    t3 = manu8(e1);
    while (t3 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &e1);
        t3 = manu8(e1);
    }
    switch (e1)
    {
    case 1:
        // beef means only variable name
        printf("\nTelevation\n===========\n");
        fprintf(dcash, "\nTelevation\n==========\n");
        printf("Televation 35000 tk per Pieces\n");
        fprintf(dcash, "Televation 350000tk per Pieces\n");
        printf("How many Pieces Televation you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Televation\n", beef);
        printf("You par choose %d Pieces Televation\n", beef);
        beef = 350000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 2:
        printf("\nRefrigerator\n===========\n");
        fprintf(dcash, "\nRefrigerator\n============\n");
        printf("Refrigerator 60000 tk per Pieces\n");
        fprintf(dcash, "Refrigerator 60000 tk per Pieces\n");
        printf("How many Pieces Refrigerator you need\n:");
        scanf("%d", &beef);
        printf("You par choose %d Pieces Refrigerator\n", beef);
        fprintf(dcash, "You par choose %d Pieces Refrigerator\n\n\n", beef);
        beef = 60000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 3:
        printf("\nAC\n======\n");
        fprintf(dcash, "\nAC\n======\n");
        printf("AC 76000 tk per Pieces\n");
        fprintf(dcash, "AC 76000 tk per Pieces\n");
        printf("How many Pieces AC you need\n:");
        scanf("%d", &beef);
        printf("You par choose %d Pieces AC\n", beef);
        fprintf(dcash, "You par choose %d Pieces AC\n\n\n", beef);
        beef = 76000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 4:
        printf("\nRice cooker\n===========\n");
        fprintf(dcash, "\nRice cooker\n============\n");
        printf("Rice cooker 9 tk per Pieces\n");
        fprintf(dcash, "Rice cooker 4000 tk per Pieces\n");
        printf("How many Rice cooker do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Rice cooker\n\n\n", beef);
        printf("You par choose %d Pieces Rice cooker\n", beef);
        beef = 4000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 5:
        printf("\nMicrowave Oven\n==============\n");
        fprintf(dcash, "\nMicrowave Oven\n===============\n");
        printf("Microwave Oven 10000 tk per Pieces\n");
        fprintf(dcash, "Microwave Oven 10000 tk per Pieces\n");
        printf("How many Microwave Oven do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Microwave Oven\n\n\n", beef);
        printf("You par choose %d Pieces Microwave Oven\n", beef);
        beef = 10000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 6:
        printf("\nceiling fan\n==============\n");
        fprintf(dcash, "\nceiling fan\n===============\n");
        printf("ceiling fan 3200 tk per Pieces\n");
        fprintf(dcash, "ceiling fan 3200 tk per Pieces\n");
        printf("How many ceiling fan do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces ceiling fan\n\n\n", beef);
        printf("You par choose %d Pieces ceiling fan\n", beef);
        beef = 3200 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 7:
        printf("\nWashing machine\n==============\n");
        fprintf(dcash, "\nWashing machine\n===============\n");
        printf("Washing machine 45000 tk per Pieces\n");
        fprintf(dcash, "Washing machine 45000 tk per Pieces\n");
        printf("How many Washing machine do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Washing machine\n\n\n", beef);
        printf("You par choose %d Pieces Washing machine\n", beef);
        beef = 45000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    default:
        break;
    }
}
int gari(int t1, int p1)
{
    int t3;
    // t1 carry taka p1 carry password
    // Sub funcation of market .It works here vehicles related
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n, e1, d1, beef;
    printf("1.Car\n2.Bike\n3.Bus\n4.Truck\n5.Go back to home Manu\nPress:");
    scanf("%d", &e1);
    t3 = manu5(e1);
    while (t3 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &e1);
        t3 = manu(e1);
    }
    switch (e1)
    {
    case 1:
        // beef means only variable name
        printf("\nCar\n======\n");
        fprintf(dcash, "\nCar\n======\n");
        printf("Car 2500000 tk per Pieces\n");
        fprintf(dcash, "Car 2500000 tk per Pieces\n");
        printf("How many Pieces Car you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Car\n", beef);
        printf("You par choose %d Pieces Car\n", beef);
        beef = 2500000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 2:
        printf("\nBike\n======\n");
        fprintf(dcash, "\nBike\n======\n");
        printf("Bike 220000 tk per Pieces\n");
        fprintf(dcash, "Bike 220000 tk per Pieces\n");
        printf("How many Pieces Bike you need\n:");
        scanf("%d", &beef);
        printf("You par choose %d Pieces Bike\n", beef);
        fprintf(dcash, "You par choose %d Pieces Bike\n\n\n", beef);
        beef = 220000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
    case 3:
        printf(" Bus 8000000 tk per Pieces\n");
        fprintf(dcash, " Bus 8000000 tk per Pieces\n");
        printf("How many  Bus do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces  Bus\n\n\n", beef);
        printf("You par choose %d Pieces  Bus\n", beef);
        beef = 98000000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
        fclose(dcash);
    case 4:
        printf("Truck 6500000 tk per Pieces\n");
        fprintf(dcash, "Truck 6500000 tk per Pieces\n");
        printf("How many Acidity Bus do you need\n:");
        scanf("%d", &beef);
        fprintf(dcash, "You par choose %d Pieces Truck\n\n\n", beef);
        printf("You par choose %d Pieces Truck\n", beef);
        beef = 6500000 * beef;
        payment12(t1, p1, beef);
        fclose(dcash);
        break;
        fclose(dcash);
    default:
        break;
    }
}
int market(int a1, int a2)
{
    // a1 carry tak a2 carry password
    // Main funcation of market
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    int n1, t2;
    printf("\t\t\tWelcome to Dream zone super shop\n");
    printf("\t\t\t===================================\n\n");
    fprintf(dcash, "\t\t\tWelcome to Dream zone super shop\n");
    fprintf(dcash, "\t\t\t===================================\n\n");
    printf("1.Food Section\n2.Dress Sections\n3.Medicine Corner\n4.Home Appliance Center\n5.Vehicle Shop\n6.Go Back to Home Manu\nPress:");
    scanf("%d", &n1);
    t2 = manu1(n1);
    while (t2 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &n1);
    }

    switch (n1)
    {
    case 1:
        printf("\t\t Welcome To Food Section\n");
        printf("\t\t==========================\n");
        fprintf(dcash, "\t\t Welcome To Food Section\n");
        fprintf(dcash, "\t\t==========================\n");
        food(a1, a2);
        fclose(dcash);
        break;
    case 2:
        printf("\t\tWelcome to Dress Sections\n");
        printf("\t\t============================\n");
        fprintf(dcash, "\t\tWelcome to Dress Sections\n");
        fprintf(dcash, "\t\t============================\n");
        dress(a1, a2);
        fclose(dcash);
        break;
    case 3:
        printf("\t\t Welcome to Medicine Corner\n");
        printf("\t\t===============================\n");
        fprintf(dcash, "\t\t Welcome to Medicine Corner\n");
        fprintf(dcash, "\t\t===============================\n");
        med(a1, a2);
        fclose(dcash);
        break;
    case 4:
        printf("\t\t Welcome to Home Appliance Center\n");
        printf("\t\t======================================\n");
        fprintf(dcash, "\t\t======================================\n");
        fprintf(dcash, "\t\t Welcome to Home Appliance Center\n");
        hometool(a1, a2);
        fclose(dcash);
        break;
    case 5:
        printf("\t\tWelcome to Vehicle Shop\n");
        printf("\t\t=========================\n");
        fprintf(dcash, "\t\tWelcome to Vehicle Shop\n");
        fprintf(dcash, "\t\t=========================\n");
        gari(a1, a2);
        fclose(dcash);
        break;
    default:
        break;
    }
}
int dcash(int m, int k, int number)
{
    // m mean amount of maney and k mean password
    // Main funcation of dcash
    int n1, n2, p1, c = 0, a, t2, op;
    FILE *dcash;
    dcash = fopen("Money_Receive.txt", "a");
    printf("\t\tWelcome Dcash\n");
    fprintf(dcash, "\n\t\tWelcome Dcash\n");
    printf("\t\t===============\n\n\n");
    fprintf(dcash, "\t\t===============\n\n\n");
    printf("Your acount number is:+880 %d\n", number);
    fprintf(dcash, "Your Acount number is:+880 %d", number);
    m = maneyrecord(m);
    printf("Your current Dcash Acount balance: %d\n====================================\n", m);
    fprintf(dcash, "Your current Dcash Acount balance:%d\n====================================\n", m);
    printf("\n\nSend Instructions\n\nDcash\n");
    printf("1.Send Money\n2.Mobile Recharge\n3.Payment\n4.Cash out\n5.Help Line\n6.Go to Manu\nPress:");
    scanf("%d", &n1);
    t2 = manu1(n1);
    while (t2 != 1)
    {
        printf("\t\t Your Manu number is wrong\n\t\t=======================================\n");
        printf("Again enter our number\nPress:");
        scanf("%d", &n1);
        t2 = manu1(n1);
    }

    switch (n1)
    {
    case 1:
        printf("\t\tSend Money\n\t\t============\n");
        fprintf(dcash, "\t\tSend Money\n\t\t============\n");
        printf("Enter Receviver dcash Acount No\n:+880 ");
        scanf("%d", &n2);
        while (n2 <= 1300000000 || n2 >= 1999999999)
        {
            printf("\t\tThis Phone Number is invalid:\n");
            printf("\t\t===============================\n");
            printf("Enter your phone number Aganin\n:+880 ");
            scanf("%d", &n2);
        }

        while (n2 == number)
        {
            printf("\t\tSending number and Recevier Number are same:\n");
            printf("\t\t===============================\n");
            printf("Enter the phone number Aganin\n:+880 ");
            scanf("%d", &n2);
        }
        fprintf(dcash, "Recevier dcash Acount No:+880 %d\n", n2);
        printf("Enter Your Amount\n:");
        scanf("%d", &a);
        fprintf(dcash, "Enter Your Amount%d:\n", a);
        printf("Enter Your Password\n:");
        scanf("%d", &p1);
        fprintf(dcash, "password:***************\n");
        while (p1 != k)
        {
            printf("\t\tWrong Password\n\t\t==========\n");
            printf("Enter Password Again\n:");
            scanf("%d", &p1);
            c++;

            //c Means How many time insart worng password
        }
        fprintf(dcash, "%d time press wrong password\n", c);

        if (a > m)
        {
            printf("\t\tYou do not have sufficient balance in your acount\n\t\t=============================================\n");
            printf("Transaction error\n");
            fprintf(dcash, "Transaction error\n");
            printf("\n\nThank for choice our service\n");
        }
        else
        {
            m = m - a;
            printf("Your transaction amount is: %d\n", a);
            fprintf(dcash, "Your transaction amount is: %d\n", a);
            printf("The amount of maney remaining\n: %d\n", m);
            m = maneyrecord(m);
            fprintf(dcash, "The amount of maney remaining\n: %d\n", m);
            printf("\n\n\t\tMoney Receive save in Marksheet.txt\n\t\t========================================\n\nThank for choice our service\n");
        }
        fclose(dcash);
        break;
    case 2:
        printf("\t\tMobile Recharge\n==============\n");
        fprintf(dcash, "\t\tMobile Recharge\n==============\n");
        printf("Enter the Recharging Mobile Number\n:+880 ");
        scanf("%d", &op);
        while (op <= 1300000000 || op >= 1999999999)
        {
            printf("\t\t This is invalid number\n\t\t================================\n");
            printf("Again Enter the Recharging Mobile Number\n:+880 ");
            scanf("%d", &op);
        }
        fprintf(dcash, " The Recharging Mobile Number is:+880 \n", op);
        if (op < 1400000000 && op > 1299999999 || op < 18000000000 && op > 169999999999)
        {
            printf("Grameenphone\n");
            fprintf(dcash, "Grameenphone");
        }
        else if (op < 1500000000 && 1399999999 || op < 2000000000 && op > 1899999999)
        {
            printf("Banglalink\n");
            fprintf(dcash, "Banglalink\n");
        }
        else if (op < 1900000000 && op > 1799999999)
        {
            printf("Robi\n");
            fprintf(dcash, "Robi\n");
        }
        else if (op < 1700000000 && op > 1599999999)
        {
            printf("Airtal\n");
            fprintf(dcash, "Airtal\n");
        }
        else
        {
            printf("Teletalk\n");
            fprintf(dcash, "Teletalk\n");
        }
        printf("Enter Your Amount\n:");
        scanf("%d", &a);
        fprintf(dcash, "Enter Your Amount%d:\n", a);
        printf("Enter Your Password\n:");
        scanf("%d", &p1);
        fprintf(dcash, "password:********\n");
        while (p1 != k)
        {
            printf("\t\tWrong Password\n\t\t==========\n");
            printf("Enter Password Again\n:");
            scanf("%d", &p1);
            c++;

            //c Means How many time insart worng password
        }
        fprintf(dcash, "%d time press wrong password\n", c);

        if (a > m)
        {
            printf("\t\tYou do not have sufficient balance in your acount\n\t\t=============================================\n");
            printf("Transaction error\n");
            fprintf(dcash, "Transaction error\n");
            printf("\n\nThank for choice our service\n");
        }
        else
        {
            m = m - a;
            printf("\t\tRecharging successful\n\n");
            fprintf(dcash, "\t\tRecharging successful\n\n");
            printf("Your Recharging amount is: %d\n", a);
            fprintf(dcash, "Your Recharging amount is: %d\n", a);
            m = maneyrecord(m);
            printf("The amount of maney remaining\n: %d\n", m);
            fprintf(dcash, "The amount of maney remaining\n: %d\n", m);
            printf("\n\n\t\tMoney Receive save in Marksheet.txt\n\t\t========================================\n\nThank for choice our service\n");
        }
        fclose(dcash);
        break;
    case 3:
        printf("\t\tPayment\t\t\n=========\n");
        printf("\n\t\t\tPayment mathod only using Dream zone super shop\n\t\t\t===================================================\n");
        break;
    case 4:
        printf("\t\tCash Out\n========\n");
        printf("\t\tCash Out\n\t\t============\n");
        fprintf(dcash, "\t\tCash Out\n\t\t============\n");
        printf("Enter dcash Agent Acount No\n:+880 ");
        scanf("%d", &n2);
        while (n2 <= 1300000000 || n2 >= 1999999999)
        {
            printf("\t\tThis Phone Number is invalid:\n");
            printf("\t\t===============================\n");
            printf("Enter your phone number Aganin\n:+880 ");
            scanf("%d", &n2);
        }

        while (n2 == number)
        {
            printf("\t\tYour number and Agent Number are same:\n");
            printf("\t\t===============================\n");
            printf("Enter The phone number Aganin\n:+880 ");
            scanf("%d", &n2);
        }
        fprintf(dcash, "Dcash  Agant Acount No:+880 %d\n", n2);
        printf("Enter Your Amount\n:");
        scanf("%d", &a);
        fprintf(dcash, "Enter Your Amount%d:\n", a);
        printf("Enter Your Password\n:");
        scanf("%d", &p1);
        fprintf(dcash, "password:***************\n");
        while (p1 != k)
        {
            printf("\t\tWrong Password\n\t\t==========\n");
            printf("Enter Password Again\n:");
            scanf("%d", &p1);
            c++;

            //c Means How many time insart worng password
        }
        fprintf(dcash, "%d time press wrong password\n", c);
        printf("\t\tYou do not have sufficient balance in your acount\n\t\t=============================================\n");
        if (a > m)
        {
            printf("Transaction error\n");
            fprintf(dcash, "Transaction error\n");
            printf("\n\nThank for choice our service\n");
        }
        else
        {
            m = m - a;
            printf("Your transaction amount is: %d\n", a);
            fprintf(dcash, "Your transaction amount is: %d\n", a);
            m = maneyrecord(m);
            printf("The amount of maney remaining\n: %d\n", m);
            fprintf(dcash, "The amount of maney remaining\n: %d\n", m);
            printf("\n\n\t\tMoney Receive save in Marksheet.txt\n\t\t========================================\n\nThank for choice our service\n");
        }
        fclose(dcash);
        break;
    case 5:
        printf("\t\tHelp Line\n=========\n");
        printf("\t\tThe Owner of DreamZone\n\t\t====================\n");
        printf("Name:MD.Mustafizur Rahman.\nID:193-35-2918\n");
        printf("Contract No:+8801766563617\n");
        break;
    case 6:
        printf("\t\t Go to Manu \n=============\n");
        break;
    default:
        break;
    }
}

void home(char h1[100], char h2[100], int h3, int h4, int h5)
{
    // h3 carry taka h4 carry password
    int n, y;
    printf("ID NAME:%s   =======================================================================   Email ID:%s", h1, h2);
    printf("\n\n\n");
    printf("1.Dream Zone Super market\n2.Dcash Mobile banking\n3.Check Educatioal Result\n4.About\nPress:");
    scanf("%d", &n);
    y = manu(n);
    while (y != 1)
    {
        printf("Your Manu choose number is wrong\n");
        printf("==================================\n");
        printf("Enter Right number\n:");
        scanf("%d", &n);
        y = manu(n);
    }

    switch (n)
    {
    case 1:
        printf("\t\t\tWelcome to Dream zone super shop\n");
        printf("\t\t\t===================================\n\n");
        market(h3, h4);
        break;
    case 2:
        printf("\t\t\tWelcome to Dcash your mobile Banking\n");
        printf("\t\t\t=================================\n\n");
        dcash(h3, h4, h5);
        break;

    case 3:
        printf("\t\t\tCheck Educatioal Result\n");
        printf("\t\t\t===============================\n\n");

        result();
        break;
    case 4:
        printf("\t\t\t\tAbout\n");
        printf("\t\t\t==========================\n\n");
        printf("Welcome to Dreamzone Vartul world !\n\n");
        printf("Hello Sir,\n");
        printf("It is a complete virtual life tool. Here you will find \nmany types of facilities like Virtual Marketing, Virtual Banking,\nVirtual Student Result Checking tool.\n");
        printf("\n\n Helpline: \n================\n");
        printf("Mobile NO:+880 1766563617");
        printf("Email address: mustafizur35-2918@diu.edu.bd\n");

        printf("\n\nThank you all on behalf of Mustafizur Rahman President of (DreamZone Virtual World)\n\n");

        break;

    default:

        break;
    }
}

int main(int argc, char const *argv[])
{
    FILE *data;
    // this is the data base file root;
    data = fopen("Database.txt", "a");
    reg m1, m2, m3, m4, d1, m5, d;
    printf("\n\t\t\t\t\tWelcome to Dream Zone\n");
    printf("\t\t\t\t======================================\n\n\n");
    // name1 carry name  and email1 carry email address
    char name1[100], email1[100];
    printf("Enter your full name\n:");
    gets(name1);
    fprintf(data, "\n\n==========================\n");
    //fprint line print Full name in database.txt file.
    fprintf(data, "Acount Name:%s\n", name1);
    printf("Enter your Email ID\n:");
    gets(email1);
    m1.i = email(email1);
    // This is the security of valid emali address.it will be running until it find @com in last 4 character
    while (m1.i != 1)
    {
        printf("\t\tThis email address is invalid\n\t\t=============================\n");
        printf("Please Enter your Email address again\n:");
        gets(email1);
        m1.i = email(email1);
    }
    //fprint line print email address in database.txt file.
    fprintf(data, "Email address:%s\n", email1);
    printf("Enter your using BD Moblie number for creating Dcash\n:+880 ");
    scanf("%d", &m2.i);
    // This is the security of valid Phone number.it will be running until int will be find m2.i carry <=1300000000 or =>1999999999
    while (m2.i <= 1300000000 || m2.i >= 1999999999)
    {
        printf("\t\tThis Phone Number is invalid:\n");
        printf("\t\t===============================\n");
        printf("Enter your phone number Aganin\n+880 ");
        scanf("%d", &m2.i);
    }
    //fprint line print Your inserting phone number in database.txt file.
    fprintf(data, "Dcash Acount number:+880 %d\n", m2.i);
    printf("Enter New password for Dcash using (1 to 10 integer Number)\n:");
    scanf("%d", &m3.i);
    printf("Enter Confirm password for Dcash using (1 to 10 intrger Number)\n:");
    scanf("%d", &m5.i);

    while (m5.i > 99999999)
    {
        printf("\t\tPassword length greater than (8 integer number)\n");
        printf("\t\t===============================================\n");
        printf("Insart Password Again\n");
        printf("Enter New password for Dcash\n:");
        scanf("%d", &m3.i);
        printf("Enter Confirm password for Dcash\n:");
        scanf("%d", &m5.i);
    }
    // This is the security of valid Phone number.it will be running until it will be find new password != confrim password
    while (m3.i != m5.i)
    {
        printf("\t\tPassword not match\n");
        printf("\t\t===================\n");
        printf("Insart Password Again\n");
        printf("Enter New password for Dcash\n:");
        scanf("%d", &m3.i);
        printf("Enter Confirm password for Dcash\n:");
        scanf("%d", &m5.i);
        // This is the security of valid Phone number.it will be running until it will be find password lenth greater then 8 integer number
        if (m5.i > 99999999)
        {
            printf("\t\tPassword length greater than (8 integer number)\n");
            printf("\t\t=============================================\n");
            printf("Insart Password Again\n");
            printf("Enter New password for Dcash\n:");
            scanf("%d", &m3.i);
            printf("Enter Confirm password for Dcash\n:");
            scanf("%d", &m5.i);
        }

        // it Will be print password lenth== * icon in the database.txt file.
    }
    d.i = dpass(m5.i);
    char pss[d.i];
    for (int i = 0; i < d.i; i++)
    {
        pss[i] = '*';
    }

    fprintf(data, "password: ");
    for (int i = 0; i < d.i; i++)
    {
        fprintf(data, "%c", pss[i]);
    }

    //d1.i carry insarting many
    printf("Insart the Amount of tk in your Dcash Account\n:");
    scanf("%d", &d1.i);
    // This is the security of valid Phone number.it will be running until it will be find minimumn insarting amount is 10000
    while (d1.i < 10000)
    {
        printf("\t\tPlease Insart Minimum 10000tk\n");
        printf("\t\t===============================\n");
        printf("Insart your amount of tk Again:\n");
        scanf("%d", &d1.i);
    }
    fprintf(data, "\nYour insert amount is:%d\n", d1.i);
    fprintf(data, "============================\n\n");
    fclose(data);
    // name1 carry name email1 carry email address (d1.i carry taka) (m5.i carry password) m2.i carray phone number
    //This is the main manu funcation of in this code
    home(name1, email1, d1.i, m5.i, m2.i);

    // if you are continue this proess again then press 1
    printf("\n\nIf you Go back to the Home Manu Press 1/0 to stop\n");
    printf("Go Back Home:1\nExit:0\nPress:");
    scanf("%d", &m4.i);
    // This is the security of valid Phone number.it will be running until it will be find 0 ro negative value;
    while (m4.i == 1)
    {
        d1.i = maneyrecord(d1.i);
        home(name1, email1, d1.i, m5.i, m2.i);
        printf("\n\nIf you Go back to the Home Manu Press 1/0 to stop\n");
        printf("Go Back Home =1\nExit=0\npress:");
        scanf("%d", &m4.i);
    }

    return 0;
}
