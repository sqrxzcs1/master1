#include <iostream>
#include <string>
using namespace std;
int main()
{
    string player;
    setlocale (LC_ALL, "rus");
    cout << "Welcome to the wonderful world of Novella" << endl;
    cout << "You will have to go through three difficult tests in order to gain freedom\n" << endl;
    
    cout << "Are you ready to start?" << endl;
    cin >> player;
    if (player == "Yes" || player == "yes") {
        cout << "You did a great job for taking this step. Let's start!\n" << endl;
        cout << "Before we start, let me tell you what kind of trials are waiting for you..." << endl;
        cout << "The first task will include a hiking trip to Mount Elbrus, an old witch will be sitting there, you will need to take the flower of Freedom from her, but keep in mind the witch will interfere with you very much. On the way to the mountain, TRUST NO ONE! Go ahead.\n";
        cout << "Are you still sure you want to go?" << endl;
        cin >> player;
        if (player == "Go" || player == "go") {
            cout << "All right, go ahead...." << endl;
        }
        else {
            cout << "Do you really want to back off?" << endl;
            cin >> player;
            if (player == "Yes" || player == "yes") {
                cout << "Remember that if you leave, you will suffer all your life...Are you ready for this?" << endl;
                cin >> player;
            }
            else if (player == "No" || player == "no") {
                cout << "That's good, get to the first task, good luck..." << endl;
                cout << "Start your journey at dawn tomorrow..." << endl;
                cout << "The next day." << endl;

                cout << "Have a good trip.. Remember that YOU CAN'T TRUST ANYONE" << endl;
                cout << "After reaching the witch's hut.. You come across an old lady who is picking flowers, going up to her, she asked do you need a flower of Freedom?" << endl;
                cin >> player;
                if (player == "Yes" || player == "yes") {
                    cout << "Ahahhah, to take this flower, you need to defeat the demon that came from above... Not from our world.... Are you ready?" << endl;
                    if (player == "Ready" || player == "ready") {
                        cout << "The witch summoned a terrible demon and the battle began... The result of which was your victory..." << endl;
                        cout << "The witch gave you the flower and you returned to the village... The first task is completed, you are doing a great job.. You've got enough gold to upgrade your armor.. Shall we get started?" << endl;
                        cin >> player;
                        if (player == "Yes" || player == "yes") {
                            cout << "Choose which armor do you want to buy?\n Bronze \n Gold\n Diamond" << endl;
                            if (player == "Bronze" || player == "Gold" || player == "Diamond") {
                                cout << "Congratulations on the new product" << endl;
                                cout << "There's another test waiting for you tomorrow." << endl;
                                cout << "The second test will be to kill a powerful dragon, our magicians will help you.. Are you ready..?" << endl;
                                if (player == "Ready" || player == "ready") {
                                    cout << "Good.. Let's start" << endl;
                                    cout << "Once in the world of dragons.. You're going to search for the Main Dragon. Half a day later, you stumble upon his cave, going in there you saw him... The great battle for freedom has begun.." << endl;
                                    cout << "The battle lasted 3 days.. The magicians of the village helped you in every way they could.. In the end, you won.." << endl;
                                    cout << "After collecting the skin from the dragon, you went home. After selling this skin, you got a lot of money, going to the shop with a special weapon, you began to look for a blade for yourself.." << endl;
                                    cout << "Having looked at the blade you need, you buy it..";
                                    cout << "The next day. You are going to the underworld where you will need to kill the demon king.. Are you ready?" << endl;
                                    if (player == "Ready" || player == "ready") {
                                        cout << "Okay, we'll leave in 15 minutes." << endl;
                                        cout << "You got into the dungeon, having found the demon king, the last battle has begun.." << endl;
                                        cout << "You're winning.. You gain victory..." << endl;

                                        cout << "The end" << endl;
                                    }


                                }

                            
                            
                          


                            }
                          
                        }
                        }
                    }
                }

            }

        }
    }

}

