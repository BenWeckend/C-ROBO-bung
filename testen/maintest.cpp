#include <iostream>

typedef int cm;

class rectange {
private:
	cm lenght;
	cm width;

public:
	cm printrec() {
		std::cout << "Area: " << (lenght * width) << "\n";
		return 0;
	}

	rectange(cm l=1, cm w=1) {
		lenght = l;
		width = w;
	}
};

int main(int argv, char **argc) {
	rectange rec(atoi(argc[1]), atoi(argc[2]));
	rec.printrec();


	return 0;
}

