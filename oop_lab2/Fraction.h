#include <string> 
#include <sstream> 
using namespace std;

class Fraction {

private :
		int first;
		int second;
	public: 
		int Getf() const { return first; }
		int Gets() const { return second; }
		void init(int f, int s);
		void Read();
		void Display();
		string toString() const;
		static Fraction Vid( Fraction r, Fraction l);
		static Fraction Mno(Fraction r, Fraction l);
		static Fraction Com(Fraction r, Fraction l); 
		
};
