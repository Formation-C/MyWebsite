#include "Thread.h"

Thread::Thread(std::string _title) : title(_title)
{
    objects.push_back(this);
}

Thread::~Thread()
{
    //dtor
}


std::vector<Post*> Thread::Getposts() {
    return Templates::Filterobjects<Post>(
        [this](Post* object) { return object->Getthread() == this; }
    );
}

std::vector<Thread*> Thread::objects;
