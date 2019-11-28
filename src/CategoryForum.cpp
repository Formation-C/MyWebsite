#include "CategoryForum.h"

using namespace Forum;

Category::Category()
{
    objects.push_back(this);
}

Category::~Category()
{
    //dtor
}

void Category::turnOnOff()
{

}

//std::vector<Thread*> getThreads() {
//
//}

std::vector<Category*> Category::objects;
