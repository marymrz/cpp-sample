#include <iostream>
#include <conio.h>
using namespace std;
class pieceOFfabric{
public:
	void readSqmeters();
	float toSQyard();
	void displayFabric();
	private:
		float sQmeters;
};
void pieceOFfabric::readSqmeters(){
	cout<<"enter size in square meters:";
	cin>>sQmeters;
}
float pieceOFfabric::toSQyard(){
	return 1.196*sQmeters;
}
void pieceOFfabric::displayFabric(){
	cout<<sQmeters<<"square meters is"<<toSQyard()
	<<"square yards.";
}
int main(){
	pieceOFfabric fabric;
	fabric.readSqmeters();
	fabric.displayFabric();
	cin.get();
}
