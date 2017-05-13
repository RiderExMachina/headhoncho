/* Head Honcho v 0.0.1
Head Honcho is the early stages of a 2D style resource management game. Inspired 
by the property management parts of Grand Theft Auto V, Head Honcho aims to be 
a fun, intuitive game in a mix of styles from A Dark Room and Roller Coaster Tycoon.

This is the high-concept version of the game, which is to get the more technical
problems such as economy, time incrementing, and save data out of the way. This version is
CLI based, but the final product will have a Sim City 2K-esque look. More roadmaps
of this project will be in the wiki.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int game_switch();
int main();
int cash;

int start_game(){
	while (true){
		cout << "Whoops, nothing here yet!" << endl;
    return 0;
		}
	}

}

int quit(){
	string quit;
	cout << "Really Quit? [y/n]";
	cin >> quit;
	if (quit == "y"){
		return 0;
	}
	else{
		main();
	}
}

int game_switch(){
	int choice;
	cout << "\n\nMake Your Choice: ";
	cin >> choice;
	

	switch(choice){
		case 1:
			cout << "Play the game? You got it!\n\n";
			start_game();
			break;
		case 2:
			cout << "Head Honcho is the early stages of a 2D style resource management game. Inspired by the property management parts of Grand Theft Auto V, Head Honcho aims to be a fun, intuitive game in a mix of styles from A Dark Room and Roller Coaster Tycoon. This is the high-concept version of the game, which is to get the more technical problems such as economy, time incrementing, and save data out of the way. This version is CLI based, but the final product will have a Sim City 2K-esque look. More roadmaps of this project will be in the wiki.\n";
			main();
		case 3:
			cout << "So far the only volunteer is me (David \"RiderExMachina\" Seward). If you would like to help, I will certainly not turn you down!\n";
			main();
		case 4:
			quit();
		case 5:
			cout << "You found an easter egg!\n";
			main();
		default:
			cout << "Make a choice!\n";
			main();

	}
}

int main(){

	cout << "\t\tHead Honcho - The Management Sim\n\n";

	cout << "1 - Play Game\n";
	cout << "2 - About\n";
	cout << "3 - Volunteers\n";
	cout << "4 - Quit";

	game_switch();
}
