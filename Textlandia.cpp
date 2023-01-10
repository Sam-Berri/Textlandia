#include <iostream>
#include <cstdlib>
#include "Header1.h"
#include <stdlib.h>
#include <time.h>


//things to do -
//code battle for fighting goblins 

//write story for after finishing battles 






std::string Game_start(std::string u_name) {

    std::cout << "\n\n\n";
    std::cout << "====================\n";
    std::cout << "Tales of Textlandia!\n";
    std::cout << "====================\n\n\n\n";



    std::cout << "You awake from a deep slumber to find yourself in a lush woodland. All around you are dense noble oak and the air is\n rich, moist with the smell of forest turshiry .\n\n ";

    std::cout << "As you come around you notice the skull of a behemoth sized beast within the woodland, looks like its been there for\n a very long time. forest vegation looks to have slowley enveloped it throughout the years.\n\n";

    std::cout << "You make your way to your feet and notice a hooded figure plodding towards you, each step he takes seems methodical and laxed. the hermit looking figure approches you, he speaks in low warming voice.\n\n ";

    std::cout << "'Greetings travaler... hmmm you seem lost, pherhaps out of place in this time'. .. he strokes his beard and looks\n complexed in thought \n\n";
    std::cout << "'Tell me.. what is your name?\n\n";
    std::cin >> u_name;

    return u_name;


}

void town_enterence(std::string awnser, int guesses);







int main() {

   //the while loop for getting into the town as a function
    
   
    std::string u_name;
    
    
    greet();
    
    std::string awnser = "0";
    int guesses = 0;
    
    Game_start(u_name);

   /* std::cout << "\n\n\n";
    std::cout << "====================\n";
    std::cout << "Tales of Textlandia!\n";
    std::cout << "====================\n\n\n\n";

   

    std::cout << "You awake from a deep slumber to find yourself in a lush woodland. All around you are dense noble oak and the air is\n rich, moist with the smell of forest turshiry .\n\n ";

    std::cout << "As you come around you notice the skull of a behemoth sized beast within the woodland, looks like its been there for\n a very long time. forest vegation looks to have slowley enveloped it throughout the years.\n\n";

    std::cout << "You make your way to your feet and notice a hooded figure plodding towards you, each step he takes seems methodical and laxed. the hermit looking figure approches you, he speaks in low warming voice.\n\n ";

    std::cout << "'Greetings travaler... hmmm you seem lost, pherhaps out of place in this time'. .. he strokes his beard and looks\n complexed in thought \n\n";
    std::cout << "'Tell me.. what is your name?\n\n";
    std::cin >> u_name;*/
    std::cout << "'...if you would be kind enouth to enterain an old man, I have a few questions for you'.\n\n\n";

    int q1; //deciding to talk to old man or not
    int q2; //deccding witch path to take from starting area



    std::cout << "Will you awnser his questions?\n\n";
    std::cout << "(1 Yes \n(2 No \n\n";

    std::cin >> q1;
    std::cout << "\n\n";




    //choose to talk to old man, optained a class and a wepon
    if (q1 == 1) {
        std::cout << "'Well met, awnser sencierly now.'\n\n";



        int knight, druid, mage, rouge;
        int awnser1, awnser2, awnser3, awnser4, awnser5, awnser6;

        knight = 0;
        druid = 0;
        mage = 0;
        rouge = 0;



        std::cout << " 'how would you want people to remember you as'\n\n ";

        std::cout << "1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold\n\n";

        std::cin >> awnser1;

        if (awnser1 == 1) {
            druid++;
        }
        else if (awnser1 == 2) {
            rouge++;
        }
        else if (awnser1 == 3) {
            mage++;
        }
        else if (awnser1 == 4) {
            knight++;
        }
        else {
            std::cout << "Invalid input.\n";
        }


        std::cout << "'Dawn or Dusk?'\n\n";
        std::cout << "1) Dawn\n2) Dusk\n\n";

        std::cin >> awnser2;

        if (awnser2 == 1) {
            druid++&& knight++;
        }
        else if (awnser2 == 2) {
            mage++&& rouge++;
        }
        else {
            std::cout << "invalid input\n";
        }

        std::cout << "'Which kind of instrument most pleases your ear?'\n\n";

        std::cout << "1) The violin\n2) The trumpet\n3) The flute\n4) The drum\n\n";


        std::cin >> awnser3;
        if (awnser3 == 1) {
            mage++;
        }
        else if (awnser3 == 2) {
            knight++;
        }
        else if (awnser3 == 3) {
            rouge++;
        }
        else if (awnser3 == 4) {
            druid++;
        }
        else {
            std::cout << "Invalid input\n";
        }

        std::cout << "'which road tempts you most?'\n\n";
        std::cout << "1) The wide, sunny grassy lane\n2) The narrow, dark, lantern-lit alley\n3) The twisting, leaf-strewn path through woods\n4) The cobbled street lined (ancient buildings)\n\n";

        std::cin >> awnser4;
        if (awnser4 == 1) {
            knight++;
        }
        else if (awnser4 == 2) {
            rouge++;
        }
        else if (awnser4 == 3) {
            druid++;
        }
        else if (awnser4 == 4) {
            mage++;
        }
        else {
            std::cout << "Invalid input\n\n";
        }

        std::cout << "Somone close to you has invited you to a event, although its not really your kind of thing and have other plans.What is your response.\n\n";

        std::cout << "1) drop everything and come, make the most of it.\n2) decline and compromise for another time.\n3) explain that you can't make it because you have other plans.\n4) say that you cant come and that its not your thing\n\n";

        std::cin >> awnser6;
        if (awnser6 == 1) {
            druid++;
        }
        else if (awnser6 == 2) {
            knight++;
        }
        else if (awnser6 == 3) {
            mage++;
        }
        else if (awnser6 == 4) {
            rouge++;
        }
        else {
            std::cout << "invalid input";
        }


        std::cout << "Do you favor a  physical challange or a mental challenge.\n\n";
        std::cout << "1) Physical challenge\n2) Mixed but lean towards physical\n3) Mixed but lean towards mental\n4) Mental challenge \n\n";

        std::cin >> awnser5;

        if (awnser5 == 1) {
            knight++;
        }
        else if (awnser5 == 2) {
            rouge++;
        }
        else if (awnser5 == 3) {
            druid++;
        }
        else if (awnser5 == 4) {
            mage++;
        }
        else {
            std::cout << "invalid input";
        }





        int max;
        max = 0;
        //the starting role and wepon you are given
        std::string role;
        std::string wepon;

        //holds the wepons uniquw stats 
        int wepon_id;

        if (knight > max) {

            max = knight;
            role = "Knight";
            wepon = "Sword";
            wepon_id = 1;
        }
        if (druid > max) {

            max = druid;
            role = "Druid";
            wepon = "Staff";
            wepon_id = 2;
        }
        if (mage > max) {

            max = mage;
            role = "Mage";
            wepon = "Tome";
            wepon_id = 3;
        }
        if (rouge > max) {

            max = rouge;
            role = "Rouge";
            wepon = "Dagger";
            wepon_id = 4;
        }


        std::cout << "'Hmmm I see, it seems to me that you would fall into the path of the " << role << "'.\n\n";


        std::cout << "The hermit lugs the sizable pack he held on his back onto the forest ground and pulls from it a large linnin cloth.\n\n";

        std::cout << "He procceeds to lay the cloth out on the forest floor taking great care for creases and folds.\n\n";

        std::cout << "once again he starts to rumedge in the bag, he pulls out a " << wepon << " and lays it on the cloth.\n\n";

        std::cout << "until we next meet child.\n\n";

        std::cout << "the hermit man wrestles his pack back on and wonders off into the dense wood.\n\n";

        std::cout << "With the idea of finding some kind of shelter before night fall you decide to push on\n\n";

        std::cout << "Looking around in your imedieate area you can see a roughly beaten trail from where the hermit had came from\n\n";

        std::cout << "In a different direction more into the thick dense wood you can see a flickering source of light.\n from where you stand you can aslo faintley hear what could be people talking, altough you cant make out what\n they are saying\n\n";

        std::cout << "Which path will you choose?\n\n";

        std::cout << "1) Roughly beaten track\n2) The sounds and light in the woods.\n\n";
        std::cin >> q2;
        std::cout << "\n\n";


        if (q2 == 1)
        {
            std::cout << "you make your way onto the roughly beaten track\n as you progress through the lush woods the track slowely opens out into more of a dirt open road\n the road is still haveavly shrouded by trees and you are still very much within the wods but this is definetly a road now.\n\n";
            std::cout << "as you make your way up this dirt track you can see up front a carridge that has fallen on its side. to further inspection it looks very beaten up and whatever was pulling it has long gone.\n\n";
            std::cout << "as you aprocach for further incpection you can hear ominous chrunching and slurping sounds from the other side of the totaled carridge.\n\n";
            std::cout << "with caution you slowely make your way around the carridge just in the tree line of the other side of the road, constantly looking for the source of the sicking sounds.\n\n";
            std::cout << "The unmistakable smell of blood was in the air, once on the other side of the carridge you can make out a gnarled hairy creature crouched over the body of a man by the totlated carridge.\n";
            std::cout << "it has strong built up back with two arms on each side of its body. you take great caution trying to sneak away from the beast. \n  ";
            std::cout << "while delving deeper into the forest for your escape you fumble upon a dry hollow branch amongust the messy forest ground.\n";
            std::cout << "as it snaps it send out a load crack to the surronding area. you look back at the carridge for the beast.\n to your horror the blood covered humonid monster is looking back at you.\n";
            std::cout << " you start to run but you can already here the beast on persuit.\n";
            std::cout << "with no hope of escape you decide to fight.\n\n";
            std::cout << " you pull from your belt the " << wepon << " that the hermit gave you and prepear for combat\n\n\n\n";
            //sword id
            if (wepon_id == 1) {
                //user and enemy health points 
                int u_hp = 15;
                int rav_hp = 10;
                //users attacks
                int u_atk, u_atk2, u_atk3, u_atk4, u_atk5, u_atk6;
                int atk_choice;
                u_atk = std::rand() % 6 + 1, u_atk2 = std::rand() % 6 + 1, u_atk3 = std::rand() % 6 + 1, u_atk4 = std::rand() % 6 + 1; u_atk5 = std::rand() % 6 + 1, u_atk6 = std::rand() % 6 + 1;
                //Ravergers attacks
                int rav_atk, rav_atk2, rav_atk3, rav_atk4, rav_atk5, rav_atk6;
                rav_atk = std::rand() % 5, rav_atk2 = std::rand() % 5, rav_atk3 = std::rand() % 5, rav_atk4 = std::rand() % 5, rav_atk5 = std::rand() % 5, rav_atk6 = std::rand() % 5;
                //makes random number a different random number evreytime you run the code 
                srand(time(NULL));

                

                

                if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";

                    rav_hp = rav_hp - u_atk;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk << " damge to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";

                    std::cout << "==============================================\n\n\n";
                }
                 if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk2;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk2 << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";

                    rav_hp = rav_hp - u_atk2;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk2 << " damage to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                    std::cout << "==============================================\n\n\n";
                }
                 if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk3;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk3 << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";

                    rav_hp = rav_hp - u_atk3;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk3 << " damage to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                    std::cout << "==============================================\n\n\n";
                }
                 if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk4;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk4 << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";

                    rav_hp = rav_hp - u_atk4;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk4 << " damage to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                    std::cout << "==============================================\n\n\n";
                }
                 if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk5;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk5 << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";
              
                    rav_hp = rav_hp - u_atk5;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk5 << " damage to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                    std::cout << "==============================================\n\n\n";
                }
                 if (u_hp > 0 && rav_hp > 0) {
                    u_hp = u_hp - rav_atk6;
                    std::cout << " the Ravenger charges with its sything talons\n\n";
                    std::cout << "Raveger deals " << rav_atk6 << " Damage!\n\n";
                    std::cout << u_name << " HP " << u_hp << "\n\n";

                    rav_hp = rav_hp - u_atk6;
                    std::cout << "*Attack Skills*\n";
                    std::cout << "1) Sword Strike.\n";
                    std::cin >> atk_choice;
                    std::cout << "\n\n";
                    std::cout << u_name << " deals " << u_atk6 << " damage to the Ravager\n";
                    std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                    std::cout << "==============================================\n\n\n";
                }

                
               
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 
                 }

                  else if (wepon_id == 2) {

                  //user and enemy health points 
                  int u_hp = 15;
                  int rav_hp = 10;
                  //users attacks
                  int u_atk, u_atk2, u_atk3, u_atk4, u_atk5, u_atk6;
                  int atk_choice;
                  int druid_heal, druid_heal2, druid_heal3;
                  u_atk = std::rand() % 4, u_atk2 = std::rand() % 4, u_atk3 = std::rand() % 4, u_atk4 = std::rand() % 4; u_atk5 = std::rand() % 4, u_atk6 = std::rand() % 4;
                  druid_heal = std::rand() % 2 + 1, druid_heal2 = std::rand() % 2 + 1, druid_heal3 = std::rand() % 2 + 1;

                  //Ravergers attacks
                  int rav_atk, rav_atk2, rav_atk3, rav_atk4, rav_atk5, rav_atk6;
                  rav_atk = std::rand() % 5, rav_atk2 = std::rand() % 5, rav_atk3 = std::rand() % 5, rav_atk4 = std::rand() % 5, rav_atk5 = std::rand() % 5, rav_atk6 = std::rand() % 5;
                  //makes random number a different random number evreytime you run the code 
                  srand(time(NULL));






                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk << " damge to the Ravager\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";

                      std::cout << "==============================================\n\n\n";
                  }
                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk2;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk2 << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk2;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk2 << " damage to the Ravager\n";
                      u_hp = u_hp + druid_heal;
                      std::cout << "Your staff reacts and you feel replenished\n\n";
                      std::cout << "you heal " << druid_heal << " HP\n\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";


                      std::cout << "==============================================\n\n\n";
                  }
                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk3;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk3 << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk3;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk3 << " damage to the Ravager\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                      std::cout << "==============================================\n\n\n";
                  }
                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk4;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk4 << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk4;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk4 << " damage to the Ravager\n";
                      u_hp = u_hp + druid_heal;
                      std::cout << "Your staff reacts and you feel replenished\n\n";
                      std::cout << "you heal " << druid_heal << " HP\n\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                      std::cout << "==============================================\n\n\n";
                  }
                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk5;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk5 << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk5;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk5 << " damage to the Ravager\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                      std::cout << "==============================================\n\n\n";
                  }
                  if (u_hp > 0 && rav_hp > 0) {
                      u_hp = u_hp - rav_atk6;
                      std::cout << " the Ravenger charges with its sything talons\n\n";
                      std::cout << "Raveger deals " << rav_atk6 << " Damage!\n\n";
                      std::cout << u_name << " HP " << u_hp << "\n\n";

                      rav_hp = rav_hp - u_atk6;
                      std::cout << "*Attack Skills*\n";
                      std::cout << "1) Staff Pummel.\n";
                      std::cin >> atk_choice;
                      std::cout << "\n\n";
                      std::cout << u_name << " deals " << u_atk6 << " damage to the Ravager\n";
                      u_hp = u_hp + druid_heal;
                      std::cout << "Your staff reacts and you feel replenished\n\n";
                      std::cout << "you heal " << druid_heal << " HP\n\n";
                      std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                      std::cout << "==============================================\n\n\n";
                  }


             

            }



              else if (wepon_id == 3) {

              //user and enemy health points 
              int u_hp = 15;
              int rav_hp = 10;
              //users attacks
              int u_atk, u_atk2, u_atk3, u_atk4, u_atk5, u_atk6;
              int atk_choice;
             
              u_atk = std::rand() % 10, u_atk2 = std::rand() % 10, u_atk3 = std::rand() % 10, u_atk4 = std::rand() % 10; u_atk5 = std::rand() % 10, u_atk6 = std::rand() % 10;
             

              //Ravergers attacks
              int rav_atk, rav_atk2, rav_atk3, rav_atk4, rav_atk5, rav_atk6;
              rav_atk = std::rand() % 5, rav_atk2 = std::rand() % 5, rav_atk3 = std::rand() % 5, rav_atk4 = std::rand() % 5, rav_atk5 = std::rand() % 5, rav_atk6 = std::rand() % 5;
              //makes random number a different random number evreytime you run the code 
              srand(time(NULL));






              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk << " damge to the Ravager\n";
                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";

                  std::cout << "==============================================\n\n\n";
              }
              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk2;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk2 << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk2;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk2 << " damage to the Ravager\n";
                
                
                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";


                  std::cout << "==============================================\n\n\n";
              }
              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk3;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk3 << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk3;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk3 << " damage to the Ravager\n";
                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                  std::cout << "==============================================\n\n\n";
              }
              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk4;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk4 << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk4;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk4 << " damage to the Ravager\n";

                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                  std::cout << "==============================================\n\n\n";
              }
              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk5;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk5 << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk5;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk5 << " damage to the Ravager\n";
                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                  std::cout << "==============================================\n\n\n";
              }
              if (u_hp > 0 && rav_hp > 0) {
                  u_hp = u_hp - rav_atk6;
                  std::cout << " the Ravenger charges with its sything talons\n\n";
                  std::cout << "Raveger deals " << rav_atk6 << " Damage!\n\n";
                  std::cout << u_name << " HP " << u_hp << "\n\n";

                  rav_hp = rav_hp - u_atk6;
                  std::cout << "*Attack Skills*\n";
                  std::cout << "1) Fire Ball.\n";
                  std::cin >> atk_choice;
                  std::cout << "\n\n";
                  std::cout << u_name << " deals " << u_atk6 << " damage to the Ravager\n";
                 
                  std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
                  std::cout << "==============================================\n\n\n";
              }




         }


         else if (wepon_id = 4) {





         //user and enemy health points 
         int u_hp = 15;
         int rav_hp = 10;
         //users attacks
         int u_atk, u_atk2, u_atk3, u_atk4, u_atk5, u_atk6, u_atk7, u_atk8, u_atk9;
         int atk_choice;

         u_atk = std::rand() % 3 + 1, u_atk2 = std::rand() % 3 + 1, u_atk3 = std::rand() % 3 + 1, u_atk4 = std::rand() % 3 + 1; u_atk5 = std::rand() % 3 + 1, u_atk6 = std::rand() % 3 + 1, u_atk7 = std::rand() % 3 + 1; u_atk8 = std::rand() % 3 + 1, u_atk9 = std::rand() % 3 + 1;


         //Ravergers attacks
         int rav_atk, rav_atk2, rav_atk3, rav_atk4, rav_atk5, rav_atk6;
         rav_atk = std::rand() % 5, rav_atk2 = std::rand() % 5, rav_atk3 = std::rand() % 5, rav_atk4 = std::rand() % 5, rav_atk5 = std::rand() % 5, rav_atk6 = std::rand() % 5;
         //makes random number a different random number evreytime you run the code 
         srand(time(NULL));






         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk;
             std::cout << "*Attack Skills*\n";
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk << " and "<< u_atk7 << " damage to the Ravager\n";
             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";

             std::cout << "==============================================\n\n\n";
         }
         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk2;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk2 << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk2;
             std::cout << "*Attack Skills*\n";
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk2 << " and " << u_atk8 << " damage to the Ravager\n";


             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";


             std::cout << "==============================================\n\n\n";
         }
         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk3;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk3 << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk3;
             std::cout << "*Attack Skills*\n";
             
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk3 << " and " << u_atk9 << " damage to the Ravager\n";
             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
             std::cout << "==============================================\n\n\n";
         }
         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk4;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk4 << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk4;
             std::cout << "*Attack Skills*\n";
             
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk4 << " and " << u_atk5 << " damage to the Ravager\n";

             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
             std::cout << "==============================================\n\n\n";
         }
         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk5;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk5 << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk5;
             std::cout << "*Attack Skills*\n";
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk6 << " and " << u_atk7 << " damage to the Ravager\n";
             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
             std::cout << "==============================================\n\n\n";
         }
         if (u_hp > 0 && rav_hp > 0) {
             u_hp = u_hp - rav_atk6;
             std::cout << " the Ravenger charges with its sything talons\n\n";
             std::cout << "Raveger deals " << rav_atk6 << " Damage!\n\n";
             std::cout << u_name << " HP " << u_hp << "\n\n";

             rav_hp = rav_hp - u_atk6;
             std::cout << "*Attack Skills*\n";
             std::cout << "1) Rending Stab.\n";
             std::cin >> atk_choice;
             std::cout << "\n\n";
             std::cout << u_name << " deals " << u_atk8 << " and " << u_atk9 << " damage to the Ravager\n";

             std::cout << u_name << " HP " << u_hp << " ====== Raveger HP " << rav_hp << "\n";
             std::cout << "==============================================\n\n\n";
         }












}





        }
        //choose to talk to the old man and follwed the signs if life 
        else if (q2 == 2) {
            std::cout << "You follow the signs of life into dark canopy of thick lush trees.\n\n";
            std::cout << "as you get closer it becomes more and more apprent that you are going to meet someone or somthing.\n\n";
            std::cout << "what was a dim light in the distance is now a roaring fire pit that you can see.\n\n";
            std::cout << "also the chattering that you could hear before is much more audiable now, although it is not a language that you can understand.\n\n";
            std::cout << "their voices sounded frantic with a high tone, gradually getting closer you can see the source of the chattering.\n\n";
            std::cout << "they are small green creatures, similar proportions to a small human, they have long pointed ears and were all aremed with primitive tools and clothes.\n\n";
            std::cout << "there is three of them there all hopping and juttering around the fire pit witch had game roasting on a smpit above it.\n\n";
            std::cout << "while studdying the creatures deciding weter its a good idea to try and communitcte with them or not, one of them notices you.\n\n";
            std::cout << "the small creature lets out a scream and points in your dicrecton, they all look towards you and pick up arms.\n\n";
            std::cout << "without hesitation all three of them charge at you.\n";


        }


    }







    // choose not to talk to the old man
    else if (q1 == 2) {
        std::cout << "'I see, until we next meet child.'\n\n";

        std::cout << "The hermit man wonders off into the dense woods\n\n";

        std::cout << "With the idea of finding some kind of shelter before night fall you decide to push on\n\n";

        std::cout << "Looking around in your imedieate area you can see a roughly beaten trail from where the hermit had came from\n\n";

        std::cout << "In a different direction more into the thick dense wood you can see a flickering source of light.\n from where you stand you can aslo faintley hear what could be people talking, altough you cant make out what\n they are saying\n\n";

        std::cout << "Which path will you choose?\n\n";

        std::cout << "1) Roughly beaten track\n2) The sounds and light in the woods.\n\n";
        std::cin >> q2;
        std::cout << "\n\n";

        // takes the beaten track route without talking to old amn
        if (q2 == 1) {
            std::cout << "you make your way onto the roughly beaten track\n as you progress through the lush woods the track slowely opens out into more of a dirt open road\n the road is still haveavly shrouded by trees and you are still very much within the wods but this is definetly a road now.\n\n";
            std::cout << "as you make your way up this dirt track you can see up front a carridge that has fallen on its side. to further inspection it looks very beaten up and whatever was pulling it has long gone.\n\n";
            std::cout << "as you aprocach for further incpection you can hear ominous chrunching and slurping sounds from the other side of the totaled carridge.\n\n";
            std::cout << "with caution you slowely make your way around the carridge just in the tree line of the other side of the road, constantly looking for the source of the sicking sounds.\n\n";
            std::cout << "The unmistakable smell of blood was in the air, once on the other side of the carridge you can make out a gnarled hairy creature crouched over the body of a man by the totlated carridge.\n";
            std::cout << "it has strong built up back with two arms on each side of its body. you take great caution trying to sneak away from the beast. \n  ";
            std::cout << "while delving deeper into the forest for your escape you fumble upon a dry hollow branch amongust the messy forest ground.\n";
            std::cout << "as it snaps it send out a load crack to the surronding area. you look back at the carridge for the beast.\n to your horror the blood covered humonid monster is looking back at you.\n";
            std::cout << " you start to run but you can already here the beast on persuit.\n";
            std::cout << "with no hope of escape you decide to fight. you turn to face the monster. but alas you were quicly overwhlemed by the beast with nothing to defend yourslef.\n\n";

            std::cout << "you were slain..";




        }
        // you follow signs of life into the forest without talking to the old man
        else if (q2 == 2) {
            std::cout << "You follow the signs of life into dark canopy of thick lush trees.\n\n";
            std::cout << "as you get closer it becomes more and more apprent that you are going to meet someone or somthing.\n\n";
            std::cout << "what was a dim light in the distance is now a roaring fire pit that you can see.\n\n";
            std::cout << "also the chattering that you could hear before is much more audiable now, although it is not a language that you can understand.\n\n";
            std::cout << "their voices sounded frantic with a high tone, gradually getting closer you can see the source of the chattering.\n\n";
            std::cout << "they are small green creatures, similar proportions to a small human, they have long pointed ears and were all aremed with primitive tools and clothes.\n\n";
            std::cout << "there is three of them there all hopping and juttering around the fire pit witch had game roasting on a smpit above it.\n\n";
            std::cout << "while studdying the creatures deciding weter its a good idea to try and communitcte with them or not, one of them notices you.\n\n";
            std::cout << "the small creature lets out a scream and points in your dicrecton, they all look towards you and pick up arms.\n\n";
            std::cout << "without hesitation all three of them charge at you.\n";
            std::cout << "you are quickly overwhelmed..\n\n";
          
            std::cout << "you were slain...\n";

        }
        else {
            std::cout << "invalid input";
        }


        town_enterence(awnser, guesses);

    }

}



void town_enterence (std::string awnser, int guesses) {

   std::cout << "the guard says you must know the acient name of the town for you to be gruanted acsess\n\n";
  std::cout <<  "'Tell me the name and ill let you in, can never be too careful these days'\n\n";
       
  while ( awnser != "Okkenburrow" && guesses < 3) {
      std::cin >> awnser;
      std::cout << "\n\n";
      std::cout << "that dosnt sound right to me punk\n";
      guesses++;
  }


}
 
 
  