#include <stdio.h>
#include <string>

using namespace std;

class Man{

	public:
		virtual void say() = 0;
};

class Boy: public Man
{
	protected:
		string name;

	public:


		virtual void say(){
			printf("say name: %s\n", this->name.c_str());
		}

		Boy(string name){
			this->name = name;
			printf("init boy\n");
		}

};


class SomeOne: public Boy
{
	public:
		SomeOne(string name):Boy(name) {
			this->name = name;
		}
		 void say(){
			printf("SomeOne Say, %s\n", this->name.c_str());
		}

};



int main()
{
	string name = "A";
	SomeOne* one = new SomeOne(name);
	one->say();
	
	string name2 = "B";
	SomeOne* two  = new SomeOne(name2);
	two->say();

	return 0;
}
