#include <iostream>

using namespace std;

class Git
{
public:
    string directory;
    void push();
    void commit();    
};

void Git::commit()
{
    cout << "Commit file before push" << endl;
}

void Git::push()
{
    cout << "Push repo " << endl;
}


int main(int argc, char const *argv[])
{
    cout << "Hello World" << endl;
    return 0;
}
