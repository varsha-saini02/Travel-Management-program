#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>

using namespace std;
class app
{
private:
   string user, email, password, gender, dob, privacy, phone, u, e, ph, d, g, p, fr, fg;
   int follower, following, i, count;
   string user_account;
   struct uder_str
   {
      string name;
   } z[200];

public:
   void intro();          // Introduction
   void instagram();      // Instagram app
   void login();          // Login account
   void menu();           // Contro panel
   void create();         // Create new account
   void search();         // Search any account
   void update();         // Update account
   void del();            // Delete account
   void follow();         // Follow any user
   void message();        // Message any user
   void follower_user();  // Check all followers
   void following_user(); // Check all following
   void recent_msg();     // Check all recent messages
   void reply_msg();      // Reply to user
   void old_msg();        // Check all old messages
   void block();          // Block any user
   void blocked_user();   // Check all blocked user
   void rate();           // Rate app
   void app_rating();     // Check app rating
};

void app::intro()
{
   system("cls");
   cout << "\n\n\n\n\n\n\n";
   cout << "\t\t\t====================";
   cout << "\n\t\t\t==================";
   cout
       << "\n\n\t\t\t Instagram App Project";
   cout << "\n\n\n\t\t\t\tComplete Version";
   cout << "\n\n\t\t\t=================";
   cout << "\n\t\t\t================";
   getch();
   system("cls");
   cout << "\n\n\n";
   cout << "\t\t\t====================";
   cout << "\n\t\t\t=======================";
   cout << "\n\n\t\t\t\t   Introduction";
   cout << "\n\n\t\t\t====================";
   cout << "\n\t\t\t=============================";
   cout << "\n\n\t\t\t Name : Varsha Saini";
   cout << "\n\t\t\t Couse : Bachelor of Technology (ECE)";
   cout << "\n\t\t\t Section: Afternoon A";
   70 - 75;
   instagram();
}
void app::instagram()
{
p:
   system("cls");
   int choice;
   cout << "\n\n\t\t\t==========================";
   cout << "\n\n\t\t\t\t     Instagram Functions";
   cout << "\n\n\t\t\t\t Follow Friends & chat with your friends";
   cout << "\n\n\t\t\t==========================";
   cout << "\n\n\n 1. Create Account";
   cout << "\n 2. Login Account";
   cout << "\n 3. Exit";
   cout << "\n\n Your Choice : ";
   cin >> choice;
   switch (choice)
   {
   case 1:
      create();
      break;

   case 2:
      login();
      break;

   case 3:
      exit(0);

   default:
      cout << "\n\n\n\t\t Invalid Value ... Please enter another value ";
      break;

      getch();
      goto p;
   }

   void app::create()
   {
      p;
      system("cls");
      fstream file;
      char ch;
      string u, e, g, d, p, pass, ph;
      int fr, fg, count = 0;
      cout << "\n\n\n\t\t\t\t Create Account ";
      cout << "\n\n\n User Name (Without Space): ";
      cin >> user;
      cout << "\n\n\t\t E-mail : ";
      cin >> email;
      cout << "\n\n Password : ";
      do
      {
         ch = getch();
         if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
         {
            pass += ch;
            cout << "*";
         }
      } while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');

      cout << "\n\n\t\t Phone no. : ";
      cin >> phone;
      cout << "\n\n Date of Birth (dd-mm-yyyy) : ";
      cin >> dob;
      cout << "\n\n\t\t Gender : ";
      cin >> gender;
      cout << "\n\n Privacy (Private/public) : ";
      cin >> privacy;
      follower = 0;
      following = 0;
      file.open("account.txt", ios::in);
      if (!file)
      {
         file.open("account.txt", ios::app | ios::out);
         file << user << " " << email << " " << password << " " << phone << file.close();
         cout << "\n\n\n\t\t\t Thank you so much for creating the account";
      }
      else
      {
         file >> u >> e >> password >> ph >> d >> g >> p >> fr >> fg;
         while (!file.eof())
         {
            if (u == user)
               count++;
            file >> u >> e >> password >> ph >> d >> g >> p >> fr >> fg;
         }
         file.close();
         if (count == 0)
         {
            file.open("account.txt", ios::app | ios::out);
            file << user << " " << email << " " << pass << " " << phone << ;
            file.close();
            cout << "\n\n\n\t\t\t Thank you so much for creating the account";
         }
         else
         {
            cout << "\n\n\n\t\t\t This username already existed";
            getch();
            goto p;
         }
      }
   }
   void app::login()
   {
      system("cls");
      fstream file;
      int c = 0;
      char ch;
      string user_e, user_p;
      cout << "\n\n\n\t\t\t\tLogin Account";
      cout << "\n\n\n User Name: ";
      cin >> user_account;
      cout << "\n\n\t\tE-mail: ";
      cin >> user_e;
      cout << "\n\n Password: ";
      do
      {
         ch = getch();
         if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
         {
            user_p += ch;
            cout << "*";
         }
      } while (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
      {
         file.open("account.txt", ios::in);
         if (!file)
            cout << "\n\n\n\t\t\tData Base is empty.." else
            {
               file >> user >> email >> password >> phone >> dob >> gender;
               while (!file.eof())
               {
                  if (user_account == user && user_e == email)
                     ;
                  c++;
                  file >> user >> email >> password >> phone >> dob >> gender;
               }
               file.close();
               file >> user >> email >> password >> phone >> dob >> gender;
            }
         file.close();
         if (c == 1)
            menu();
         else
            cout << "\n\n\n\t\t\tThis User is invalid..";
      };
   }
   void app::menu()
   {
   p:
      system("cls");
      int choice;
      cout << "\n\n\n\t\t\t\tControl Panel";
      cout << "\n\n\n 1. Search Account";
      cout << "\n 2. Update Account";
      cout << "\n 3. Delete Account";
      cout << "\n 4. Follow";
      cout << "\n 5. Messages";
      cout << "\n 6. Followers";
      cout << "\n 7. Following";
      cout << "\n 8. Recent Messages";
      cout << "\n 9. Old Messages";
      cout << "\n 10. Block User";
      cout << "\n 11. Blocked User";
      cout << "\n 12. Rate App";
      cout << "\n 13. App Rating";
      cout << "\n 14. Back";
      cout << "\n\n Enter Your Choice: ";
      cin >> choice;
      switch (choice)
      {
      case 1:
         search();
         break;
      case 2:
         update();
         break;
      case 3:
         del();
         break;
      case 4:
         follow();
         break;
      case 5:
         message();
         break;
      case 6:
         follower_user();
         break;
      case 7:
         following_user();
         break;
      case 8:
         recent_msg();
         break;
      case 9:
         old_msg();
         break;
      case 10:
         block();
         break;
      case 11:
         blocked_user();
         break;
      case 12:
         rate();
         break;
      case 13:
         app_rating();
         break;
      case 14:
         instagram();
      default:
         cout << "\n\n Invalid Value...Please Try Again";
      }
      getch();
      goto p;
   }
   void app::search()
   {
      system("cls");
      fstream file, file1;
      int ce, check = 0, k = 0;
      string user_search, user_me, user_follow;
      cout << "\n\n\n\t\t\t\tSearch Account";
      cout << "\n\n\n User Name : ";
      cin >> user_search;
      file1.open("block.txt", ios::in);
      if (!file1)
         goto h;
      file1 >> user_me >> user_follow;
      while (!file1.eof())
      {
         if (user_search == user_me && user_account == user_follow)
         {
            cout << "\n\n\n\t\t\t" << user_search << " Block";
            k++;
         }
         else if (user_account == user_me && user_search ==)
         {
            cout << "\n\n\n\t\t\t" << user_account << " You";
            k++;
         }
         file1 >> user_me >> user_follow;
      }
      file1.close();
      if (k > 0)
      {
         getch();
         menu();
      }
   h:
      file1.open("follower.txt", ios::in);
      if (!file1)
         goto p;
      file1 >> user_me >> user_follow;
      while (!file1.eof())
      {
         if (user_account == user_me && user_search ==)
            check++;
         else if (user_search == user_me && user_account ==)
            check++;
         file1 >> user_me >> user_follow;
      }
      file1.close();
   p:
      file.open("account.txt", ios::in);
      file >> user >> email >> password >> phone >> dob >> gender >> p;
      while (!file.eof())
      {
         if (user_search = user && user_search ==)
         {
            system("cls");
            cout << "\n\n\n\t\t\t\tSearch Account";
            cout << "\n\n\n User Name: " << user;
            cout << "\n\n\t\tPhone No. :" << phone;
            cout << "\n\n Date of Birth: " << dob;
            cout << "\n\n\t\tGender: " << gender;
            cout << "\n\n Followers: " << follower;
            cout << "\n\n\t\tFollowing: " << following;
            c++;
            break;
         }
         else if (user_search == user)
         {
            system("cls");
            cout << "\n\n\n\t\t\t\tSearch Account";
            cout << "\n\n\n User Name: " << user;
            cout << "\n\n\n\t\t\tThis Account is Private";
            c++;
            break;
         }
         file >> user >> email >> password >> phone >> dob >> gender;
      }
      file.close();
      if (c == 0)
         cout << "\n\n\n\t\t\tUser Name Can't Found...";
   }

   void app::del()
   {
      system("cls");
      fstream file, filel;
      int c = 0;
      char ch;
      string email_del, pass_del;
      cout << "\n\n\n\t\t\t\tDelete Account";
      cout << "\n\n\n E-mail: ";
      cin >> email_del;
      cout << "\n\n\t\t Password: ";
      do
      {
         ch = getch();
         if (ch > 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
         {
            pass_del += ch;
            cout << "*";
         }
      } while (ch > 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z');
      file.open("account.txt", ios::in);
      filel.open("account1.txt", ios::app | ios::out);
      file >> user >> email >> password >> phone >> dob >> gender >> p;
      while (!file.eof())
      {
         if (user_account == user && email_del == email)
         {
            cout << "\n\n\n\t\t\tDelete Account Successflly";
            c++;
         }
         else
         {
            filel << user << " " << email << " " << password << " " << p;
            file >> user >> email >> password >> phone >> dob >> gender >> p;
         }
         file.close();
         filel.close();
         remove("account.txt");
         rename("account1.txt", "account.txt");
         if (c == 1)
         {
            getch();
            instagram();
         }
         else
            cout << "\n\n\n\t\t\tE-mail & Password is wrong...";
      }
   }

   void app::follow()
   {
      system("cls");
      fstream file, filel;
      int ae, b = 0;
      string user_follow, u, f;
      cout << "\n\n\n\t\t\t\tFollowing People";
      cout << "\n\n\n Follow User Name : ";
      cin >> user_follow;
      if (user_follow == user_account)
      {
         cout << "\n\n\n\t\t\t" << user_account << " Can't Follow ";
      }
      else
      {
         file.open("account.txt", ios::in);
         file >> user >> email >> password >> phone >> dob >> gender >> p;
         while (file.eof())
         {
            if (user_follow == user)
            {
               a++;
            }
            file >> user >> email >> password >> phone >> dob >> gender >> p;
         }
         file.close();
         file.open("follower.txt", ios::in);
         if (!file)
            goto p;
         file >> u >> f;
         while (!file.eof())
            if (user_account == u && user_follow == f)
               b++;
         file >> u >> f;
      }
      file.close();
   p:
      if (a == 1 && b == 8){
         file.open("account.txt", ios::in);
      filel.open("account1.txt", ios::app | ios::out);
      file >> user >> email >> password >> phone >> dob >> gender >> p;
      while (!file.eof())
      {
         if (user_account == user)
         {
            following++;
            filel << user << " " << email << " " << password;
         }
         else if (user_follow == user)
         {
            follower++;
            filel << user << " " << email << " " << password;
         }
         else
            filel << user << " " << email << " " << password;
         file >> user >> email >> password >> phone >> dob >> gender >> p;
      }
      file.close();
      filel.close();
      remove("account.txt");
      rename("account1.txt", "account.txt");
      file.open("follower.txt", ios::app | ios::out);
   }
}
}
}