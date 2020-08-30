
#include<iostream>

int sum= 0;
using namespace std;
char name[10],surname[10];
int main() {
	cout << "Name of deulist:\n" << endl;
	cout << "  Muto yugi\n" << endl;
	cout << "  Kaiba seto\n" << endl;
	cout << "Enter your Name of DEULIST:\n" << endl;
	
	do {
		cin >> surname;
		cin >> name;
		int i = 0, j = 0;
		while (name[i] != 0) {
			if (name[i] > 92) {
				name[i] = name[i] - 32;
				i = i + 1;
			}

		}
		while (surname[j] != 0) {
			if (surname[j] > 92) {
				surname[j] = surname[j] - 32;

			}
			j = j + 1;
		}
		
		if ((((((name[0] == 89) && (name[1] == 85)) && ((name[2] == 71) && (name[3] == 73))))  && ((((surname[0] == 77) && (surname[1] == 85)) && ((surname[2] == 84) && (surname[3] == 79))))))  {
			cout << "     **********************************" << endl;
			cout<< "              Oreno turn draw\n" << endl;
			cout<<"             Here my trump card"<<endl;
			cout<< "           Osiris the sky Dragon\n" << endl;
			cout<< "              Osiris ATTACK\n" << endl;
			
			cout << "\n" << endl;
			cout<< "           !!!THUNDER FROCE!!!\n" << endl;
			cout << "     **********************************" << endl;
			sum = 1;
			return sum;
		}
		if ((surname[4] == 65)&&((((((name[0] == 83) && (name[1] == 69)) && ((name[2] == 84) && (name[3] == 79)))) && ((((surname[0] == 75) && (surname[1] == 65)) && ((surname[2] == 73) && (surname[3] == 66))))))) {
			cout << "     ************************************" << endl;
			cout << "             Oreno turn draw\n" << endl;
			cout << "           I control the future" << endl;
			cout << "        I will bow before the gods!\n" << endl;
			cout << "       Descend upon my enemy , Obelisk!\n" << endl;
			cout << "     Taste,the crushing bow of the a god!\n" << endl;

			cout << "\n" << endl;
			
			
			cout << "         !!!!GOD HAND CRUSHER!!!!!\n" << endl;
			cout << "     ************************************" << endl;
			sum = 1;
			return sum ;
		}
	
	

	} while  (sum==1);
	{ cout << "\nPLEASE ENTER AGAIN\nEnter your Name of DEULIST: "<<endl;
		cin >> surname;
	   cin >> name;
	int i = 0, j = 0;
	while (name[i] != 0) {
		if (name[i] > 92) {
			name[i] = name[i] - 32;
			i = i + 1;
		}

	}
	while (surname[j] != 0) {
		if (surname[j] > 92) {
			surname[j] = surname[j] - 32;

		}
		j = j + 1;
	}
	if ((((((name[0] == 89) && (name[1] == 85)) && ((name[2] == 71) && (name[3] == 73)))) && ((((surname[0] == 77) && (surname[1] == 85)) && ((surname[2] == 84) && (surname[3] == 79)))))) {
		cout << "     **********************************" << endl;
		cout << "              Oreno turn draw\n" << endl;
		cout << "             Here my trump card" << endl;
		cout << "           Osiris the sky Dragon\n" << endl;
		cout << "              Osiris ATTACK\n" << endl;

		cout << "\n" << endl;
		cout << "           !!!THUNDER FROCE!!!\n" << endl;
		cout << "     **********************************" << endl;
		sum = 1;
		return sum;
	}
	if ((surname[4] == 65) && ((((((name[0] == 83) && (name[1] == 69)) && ((name[2] == 84) && (name[3] == 79)))) && ((((surname[0] == 75) && (surname[1] == 65)) && ((surname[2] == 73) && (surname[3] == 66))))))) {
		cout << "     ************************************" << endl;
		cout << "             Oreno turn draw\n" << endl;
		cout << "           I control the future" << endl;
		cout << "        I will bow before the gods!\n" << endl;
		cout << "       Descend upon my enemy , Obelisk!\n" << endl;
		cout << "     Taste,the crushing bow of the a god!\n" << endl;

		cout << "\n" << endl;


		cout << "         !!!!GOD HAND CRUSHER!!!!!\n" << endl;
		cout << "     ************************************" << endl;
		sum = 1;
		return sum;
	}
		}

	if (sum == 0) { cout << "\n!!!Fail to acess!!!\nPlease enter in another time."; }
}
