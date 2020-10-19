package com.company;

import java.util.Random;
import java.util.Scanner;

public class BatmintonToss {


    static int change(int chatch)
    {
        Random rand= new Random();
        int s;
        s=rand.nextInt(3);
        if (chatch==s)
        {
            change(chatch);
        }
        return s;


    }


    static int change1(int chatch)
    {
        Random rand= new Random();
        int s;
        s=rand.nextInt(4);
        if (chatch==s)
        {
            change1(chatch);
        }
        return s;


    }
    static int change2(int chatch)
    {
        Random rand= new Random();
        int s;
        s=rand.nextInt(5);
        if (chatch==s)
        {
            change2(chatch);
        }
        return s;


    }

    public static void main(String[] args) {
        Random rand=new Random();
        System.out.println("1.For three Team\n2.For Four Team\n3.For Five Team");
        Scanner input=new Scanner(System.in);
        System.out.print("Press: ");
        int num=input.nextInt();

        switch (num) {
            case 1:
            {
                int number=3;
                int Player1=rand.nextInt(number);
                int Player2=rand.nextInt(number);
                int Player3=rand.nextInt(number);
                while (true)
                {
                    if (Player1==Player2||Player1==Player3)
                    {

                        Player1=change(Player1);
                    }
                    if (Player2==Player1||Player2==Player3)
                    {

                        Player2=change(Player2);
                    }
                    if (Player3==Player1||Player3==Player2)
                    {

                        Player3=change(Player3);
                    }
                    if (Player1!=Player2&&Player1!=Player3&&Player2!=Player3)
                    {
                        break;
                    }
                }

                System.out.println("The player1 Number is : "+Player1);
                System.out.println("The player2 Number is : "+Player2);
                System.out.println("The player3 Number is : "+Player3);
        break;
            }
            case 2:
            {
                int number=4;
                int Player1=rand.nextInt(number);
                int Player2=rand.nextInt(number);
                int Player3=rand.nextInt(number);
                int Player4=rand.nextInt(number);
                while (true)
                {
                    if (Player1==Player2||Player1==Player3||Player1==Player4)
                    {

                        Player1=change1(Player1);
                    }
                    if (Player2==Player1||Player2==Player3||Player2==Player4)
                    {

                        Player2=change1(Player2);
                    }
                    if (Player3==Player1||Player3==Player2||Player3==Player4)
                    {

                        Player3=change1(Player3);
                    }
                    if (Player4==Player1||Player4==Player2||Player3==Player4)
                    {

                        Player4=change1(Player4);
                    }
                    if (Player1!=Player2&&Player1!=Player3&&Player2!=Player4&&Player2!=Player3&&Player1!=Player4&&Player3!=Player4)
                    {
                        break;
                    }
                    break;
                }

                System.out.println("The player1 Number is : "+Player1);
                System.out.println("The player2 Number is : "+Player2);
                System.out.println("The player3 Number is : "+Player3);
                System.out.println("The player4 Number is : "+Player4);
                break;
            }

            case 3:
            {
                int number=5;
                int Player1=rand.nextInt(number);
                int Player2=rand.nextInt(number);
                int Player3=rand.nextInt(number);
                int Player4=rand.nextInt(number);
                int Player5=rand.nextInt(number);
                while (true)
                {
                    if (Player1==Player2||Player1==Player3||Player1==Player4||Player1==Player5)
                    {

                        Player1=change2(Player1);
                    }
                    if (Player2==Player1||Player2==Player3||Player2==Player4||Player2==Player5)
                    {

                        Player2=change2(Player2);
                    }
                    if (Player3==Player1||Player3==Player2||Player3==Player4||Player3==Player5)
                    {

                        Player3=change2(Player3);
                    }
                    if (Player4==Player1||Player4==Player2||Player4==Player3||Player4==Player5)
                    {

                        Player4=change2(Player4);
                    }
                    if (Player5==Player1||Player5==Player2||Player5==Player3||Player5==Player4)
                    {

                        Player5=change2(Player5);
                    }
                    if (Player1!=Player2&&Player1!=Player3&&Player2!=Player3&&Player1!=Player4&&Player2!=Player4&&Player3!=Player4&&Player5!=Player4&&Player1!=Player5&&Player5!=Player2&&Player5!=Player3)
                    {
                        break;
                    }
                }

                System.out.println("The player1 Number is : "+Player1);
                System.out.println("The player2 Number is : "+Player2);
                System.out.println("The player3 Number is : "+Player3);
                System.out.println("The player4 Number is : "+Player4);
                System.out.println("The player5 Number is : "+Player5);
             break;
            }
        }

    }
}
