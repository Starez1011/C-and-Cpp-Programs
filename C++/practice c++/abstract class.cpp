#include <iostream>
#include <string.h>

using namespace std;

class Media{

	protected:
		
		char title[50], publication[50];

		void displayBase(){
			cout << "Title : " << title << '\n';
			cout << "Publication : " << publication << '\n';
		}

	public:

		Media(char *t, char *p){
			strcpy(title, t);
			strcpy(publication, p);
		}

		virtual void display() = 0;
	
};

class Book : public Media {

		int num_of_pages;

	public: 

		Book(char *title, char *publication, int no)
		: Media(title, publication){
			num_of_pages = no;
		}

		void display(){
			Media::displayBase();
			cout << "Number of pages : " << num_of_pages << '\n';
		}

};

class Tape : public Media {

	private:
		int tape_length;

	public:

		Tape(char *title, char *publication, int tl)
		: Media(title, publication){
			tape_length = tl;
		}

		void display(){
			Media::displayBase();
			cout << "Length of tape : " << tape_length << '\n';
		}
};

int main() {
	Media* medias[4];

	medias[0] = new Book("Book 1", "My Publication 1", 288);
	medias[1] = new Book("Book 2", "My Publication 2", 510);

	medias[2] = new Tape("Video 1", "Studio 1", 240);
	medias[3] = new Tape("Video 2", "Studio 2", 172);

	for (int i = 0; i < 4; i++)
	{
		medias[i]->display();
		cout << '\n';
	}
	
	return 0;
}
