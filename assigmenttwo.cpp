/********************************
 * Program: assigmenttwo.cpp
 * Author: Tanish Hupare
 * Date: 04/20/2022
 * Input: characters such as M or N for morning and night, strings such as the names of the area and name and your last words, integers such as weapon numbers and strenght inputs.
 * Output text showing the path that you took and decisions that you made, and whether you win the game or not. It also outputs random variable for the decision of morning or night 
 ***********************************/

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main()

{



srand(time(NULL)); // this line of this code is for the random varible regarding Morning and night.

// this block of code is for the user to input their name into the game and will be used later in the final string of code.
    cout << endl;
    string name;
    cout << "enter your name warrior: "; // the 5th input the user outputs there last word.
    cin >> name;
    cout << endl;
// this block of code is the first choice the user has to pick from and it also has a random concept that changes there decision regarding going in the morning or night.

    int time;
    cout << "hello " << name << ", you have been tasked to hunt monsters and you have 100 health in total. Do you want to go in the night or the morning? Type 1 (morning) or 2 (night) to choose path: " << endl;
    cin >> time;
    cout << endl;

    int randtime;
    randtime = rand() % 2 + 1;

// this block of code introduces the the path for morning time which lets the user pick from mutiple areas such as river and garden. 

if(randtime == 1){
       
    cout << "A random event occurred so you leave in the morning, do you want to go through the river banks or the garden of mysterious plants? Type 'river' or 'garden'" << endl;
    
    string path;
    cin >> path;
    cout << endl;
 // this is the if statment when the user inputs "river" into the input of the morning time string.

    if(path == "river") {

        // the code below will put the user into a fight with the water monster. 
        // the if statment will decide if the user will win and go towards the final boss fight or lose the fight and flee.
        // the user can pick from 1 and 2, in this situition if the user inputs 1 he will win and go the final battle. If he picks 2 he will use lose the battle and flee.

        cout << "You have encountered a low level water monster. Slash with sword or throw fire ball. type 1 for sword or type 2 for fire ball" << endl; 
       
            int weapons; 
            cin >> weapons; // user will input 1 or 2. 
            cout << endl;
            
            if (weapons == 1 ){ 

                cout << "You won the fight with the slash of your sword !!" << endl;
                cout << endl;
                cout << "You have been put into a fight with a final level boss the 'Kraken'." 
                        " He has put you in a math spell!! fight this spell by increasing your health over 100. The monsters health is 125." << endl;

                    // this block of code is for the final boss fight, the user will input a number greater than the strength of the monster to win. If the don't they lose.

                    int x;
                    cin >> x; // user inputs a number greater than the strenght.
                    cout << endl;
                    if(x > 125){

                    // This math equation below calculutes the health the user used to win the fight with the boss.
                    cout << endl;
                    cout << name << " You won the fight by having " << (x + 100) - 125 << " total health left !!" << endl; 
                    cout << endl;

                    } 
                    else { 

                    cout << "You lost the battle and fled (You lost)" << endl; // if the user inputs the wrong number it proceeds to this output.

                    }

            } 
            else if (weapons == 2) {
                string lastw;
                cout << "You used a fire ball which is ineffictive to the water monster, you fled the scene (You lost)!!" << endl; // user inputs the wrong weapon.
                cout << endl;
                cout << "type your last words "; // the 5th input the user outputs there last word.
                cin  >> lastw;

                cout << endl;
                cout << name << "'s" << " last words: " << lastw << endl;
                cout << endl;
            }  
            else if(weapons > 2){

            cout << "You inputed the wrong weapons, please input the command told by the script " << endl; // user inputs something different than the chooses provided.

            }
    

 // this is the if statment when the user inputs "garden" into the input of the morning time string

    } 
    else if(path == "garden") {

        // the code below will put the user into a fight with the rose monster. 
        // the if statment will decide if the user will win and go towards the final boss fight or lose the fight and flee.
        // the user can pick from 1 and 2, in this situition if the user inputs 1 he will win and go the final battle. If he picks 2 he will use lose the battle and flee.

        cout << "You have encoutered a low level rose moster. Slash with sword or throw anti-rose spell. type 1 for sword or type 2 for anti-rose spell." << endl;
        
            int weapons;
            cin >> weapons; // user will input 1 or 2.
            cout << endl;

            if(weapons == 2){
                cout << "You won the fight with the anti-rose spell !!" << endl;
                cout << endl;
                cout << "You have been put into a fight with a final level boss called the 'Rosey'." 
                        " She has put you in a math spell!! fight this spell by increasing your strength over 100. The monsters strength is 110." << endl;

                // this block of code is for the final boss fight, the user will input a number greater than the strength of the monster to win. If the don't they lose.

                int x;
                cin >> x; // user inputs a number greater than the strenght. 
                cout << endl;
                if(x > 110){
                    
                    // This math equation below calculutes the health the user used to win the fight with the boss.
                    cout << endl;
                    cout << name <<" You won the fight by having " << (x + 100) - 110 << " total health left !!" << endl;
                    cout << endl;
                }
                else { 

                    cout << "You lost the battle and fled" << endl; // if the user inputs the wrong number it proceeds to this output.

                }        

            }
            else if (weapons == 1){
                string lastw;
                cout << "You used the sword slash which isn't strong enough to cut through the rose pellets, so you fled (You lost)" << endl; // user inputs the wrong weapon.
                cout << endl;
                cout << "type your last words "; // the 5th input the user outputs there last word.
                cin >> lastw;

                cout << endl;
                cout << name << "'s" << " last words: " << lastw << endl;
                cout << endl;
            }
            else if(weapons > 2) {

                cout << "you inputed the wrong weapon, please input the command told by the script" << endl; // user inputs something different than the chooses provided.

            }

    } 
    else {

        cout << "You inputed the wrong place, please choose between the two options" << endl; // the user didn't type the string provided by the chooses so it outputs this
    }

// this block of code introduces the the path for night time which lets the user pick from mutiple areas such as foogy and village.

} else if(randtime == 2) {
   
    cout << "A random event occurred so you leave in the night, do you want to go the through the foogy forests or the abandond village? Type 'foggy' or 'village'." << endl;
     string path;
     cin >> path;
     cout << endl;
// this is the if statment when the user inputs "foogy" into the input of the night time string

    if(path == "foggy") {

        // the code below will put the user into a fight with the forest monster. 
        // the if statment will decide if the user will win and go towards the final boss fight or lose the fight and flee.
        // the user can pick from 1 and 2, in this situition if the user inputs 1 he will win and go the final battle. If he picks 2 he will use lose the battle and flee.
    
        cout << "You have encoutered a low level forest monster. Slash with sword or throw sound bomb. type 1 for sword or type 2 for sound bomb" << endl;
        
            
            int weapons;
            cin >> weapons; // user will input 1 or 2.
            cout << endl;
            if(weapons == 1){

                cout << "You won the fight with the slash of your sword" << endl; 
                cout << endl;
                cout << "You have been put into a fight a final level boss fight with 'Mr.tree'." 
                        "He has put you in a math spell!! fight this spell by increasing your health between 100. The monsters health is 175." << endl;

                // this block of code is for the final boss fight, the user will input a number greater than the strength of the monster to win. If the don't they lose.

                int x;
                cin >> x; // user inputs a number greater than the strenght. 
                cout << endl;                

                if(x > 175){

                    // This math equation below calculutes the health the user used to win the fight with the boss.
                    cout << endl;
                    cout << name << " You won the fight by having " << (x + 100)- 175 << " total health left !!" << endl;
                    cout << endl;

                }
                else {

                cout << "You lost the battle and fled (You lost)" << endl; // if the user inputs the wrong number it proceeds to this output.         

                }
             }
             else if (weapons == 2){
                string lastw;
                cout << "You lost the fight with the sound bomb, it woke up all of the forest monster and they started chasing you !!" << endl; // user inputs the wrong   weapon.
                cout << endl;
                cout << "type your last words "; // the 5th input the user outputs there last word.
                cin >> lastw;

                cout << endl;
                cout << name << "'s" << " last words: " << lastw << endl;
                cout << endl;
            } 
            else if (weapons > 2){

                cout << "You inputed the wrong weapons, please choose the command told by the script" << endl; // user inputs something different than the chooses provided.
            }   

  // this is the if statment when the user inputs "village" into the input path introduces in the night time string

    } else if(path == "village") {

        // the code below will put the user into a fight with the zombie monster. 
        // the if statment will decide if the user will win and go towards the final boss fight or lose the fight and flee.
        // the user can pick from 1 and 2, in this situition if the user inputs 1 he will win and go the final battle. If he picks 2 he will use lose the battle and flee.

        cout << "You have encouterd a low level zombie. Slash with sword or throw anti-zombie spell. Type 1 for sword or type 2 for anti-zombie spell" << endl;
        
            int weapons;
            cin >> weapons; // user will input 1 or 2.
            cout << endl;
            if(weapons == 2) {

            cout << "You won the fight and turned back the zombies back to humans and brought peace to the village !!" << endl; 
            cout << endl;
            cout << "You have been put into a fight with a final level boss the 'Zombie king'.'"
                    " you're put into a math spell!! fight this spell by increasing your health between 200-250. The monsters health is 225." << endl;

                 // this block of code is for the final boss fight, the user will input a number greater than the strength of the monster to win. If the don't they lose.

                int x;
                cin >> x; // user inputs a number greater than the strenght.
                cout << endl;
                if(x > 225){

                   // This math equation below calculutes the health the user used to win the fight with the boss. 
                    cout << endl;
                    cout << name << " You won the fight by having " << (x + 100) - 225 << " total health left !!" << endl;
                    cout << endl;

                }
                else {
                    
                    cout << "You lost the battle and fled (You lost)" << endl; // if the user inputs the wrong number it proceeds to this output.

                }            

            }
            else if (weapons ==  1){
                string lastw;
                cout << "You used the sword so you lost the fight with the zombie and the herd came for you (You lost)." << endl; // user inputs the wrong weapons. 
                cout << endl;
                cout << "type your last words "; // the 5th input the user outputs there last word.
                cin >> lastw;

                cout << endl; 
                cout << name << "'s" << " last words: " << lastw << endl;
                cout << endl;
                   
            }
            else if( weapons > 2) {

                cout << "You inputed the wrong weapon, please choose the command told by the script" << endl; // user inputs something different than the chooses provided.
        
            }

    } 
    else {

        cout << "You inputed the wrong place, please choose the command told by the script" << endl; // the user inputs invalid text which leads to this output.
    }

}

return 0;

}

// thank you for part taking in this this game and hope you win !!
