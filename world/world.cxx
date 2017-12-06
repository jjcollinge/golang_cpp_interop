#include "world.hxx"

using namespace std;

World::World() {
    // empty default constructor
}

World::~World() {
    // empty default destructor
}

void World::Hello(const char* cname) const {
    string name = "";
    for (int i = 0; cname[i] != '\0'; ++i) {
        name += cname[i];
    }
    cout << "Hello " << name << " from C++" << endl;
}