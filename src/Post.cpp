#include "Post.h"

Post::Post(Thread* _thread, std::string _content) : thread(_thread), content(_content)
{
    objects.push_back(this);
}

Post::~Post()
{
    //dtor
}

std::vector<Post*> Post::objects;
