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
        // fonction lambda
        [this](Post* object) { return object->Getthread() == this; }
        // [this] : on capture le contexte de this pour le passer à la function par la suite
        //
    );
}

std::vector<Thread*> Thread::objects;
