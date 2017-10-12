#include <stdio.h>

class Man{
	private:
		int sex;

	public:
		Man(int sex){
			this->sex = sex;
			printf("man init\n");
		}

		~Man(){
			printf("man release\n");
		}

		void say(){
			printf("my sex is %d\n", this->sex);
		}

};



int main()
{
	Man * boy = new Man(1);
	boy->say();

	Man * girl = new Man(0);
	girl->say();

	return 0;
}
