#include <iostream>
#include <string>

using namespace std;
string signs = "+-";
string tabcharmaj = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrtuvwxyz";
bool validletters(char a, string b, string d, bool z) {//fonction équivalente à isLetter() isUpper() et vérifiant 
	int i;
	int c = 0;
	int e = 0;
	
	int jma = b.length();
	int sign = d.length();
	// regarde si la première lettre est une majiscule
	for (i = 0; i <= jma - 1; i++) {
		if (a != i)
		{
			c++;
			z = false;
			
		}
		else {
			if (c > 0) {
				for (i = 0; i <= sign - 1; i++) {
					if (sign != i)
					{
						e++;
						z = false;

					}
				}
			}
		}
	}
	//con
	

	if (c > 0 || e > 0) {
		return false;
	}
	else { return true; }
}
bool validbracket() {
	string  smiles = "CCC[]CC";
	int length = smiles.length();
	
	string bracket_content;
	bool value;
	bool turn = false;
	char charbracket = bracket_content[0];

	char A = 'A';
	//cherche le crochet ouvert
	for (int i = 0; i <= length - 1; i++)// parcours le string
	{
		if (smiles[i] == '[')//s'il y a un crochet ouvert
		{
			turn = false;
				for (int j = i + 1; j <= length - 1; j++)// continue à partir du char [+1 
				{
					if (smiles[j] == ']')//s'il y a un crochet fermé
					{
						turn = true;
						bracket_content = smiles.substr(i + 1, j - i - 1);//copie la valeur entre i+1 et j-i-1 dans bracket_content 
					}
					else { turn = false; }
				}
		}
		
	}
	validletters(charbracket, tabcharmaj, signs, turn);
	
	return turn;
}

int main()
{
	string maj = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::cout << "Hello World!\n";
	bool dev = validbracket();
	std::cout << dev;
	
	
	

}