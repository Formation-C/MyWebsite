#include <iostream>
#include <vector>
#include <algorithm>

#include "Thread.h"
#include "Post.h"


using namespace std;

void displayThread(Thread* thread) {
    cout << "Thread titled '" << thread->Gettitle() << "' in category titled '" << thread->Getcategory()->getName() << "'" << endl;
}

void displayPost(Post* post) {
    cout << "Post content '" << post->Getcontent() << "' in thread titled '" << post->Getthread()->Gettitle() << "'" << endl;
}

int main()
{
    new Category("category test");

    new Thread(Category::objects[0], "Le C++ est-il bon pour la santé?");
    new Thread(Category::objects[0], "Regardes ces images de développeurs (la 5ème va vous étonner)!");
    new Thread(Category::objects[0], "Je suis venu, j'ai vu, j'ai codu");

    new Post(Thread::objects[0], "Mais oui c'est clair!");
    new Post(Thread::objects[0], "Ca ne fait aucun doute!");
    new Post(Thread::objects[0], "Poussez-vous bande de noobs!");
    new Post(Thread::objects[1], "Oh la 5ème!");
    new Post(Thread::objects[1], "TMTC frère!");
    new Post(Thread::objects[2], "Moi aussu!");
    new Post(Thread::objects[2], "Représente J.C. -52!");
    new Post(Thread::objects[2], "Plagiat!");

    for_each(Thread::objects.begin(), Thread::objects.end(), displayThread);

    vector<Post*> filteredPosts = Thread::objects[0]->Getposts();

    for_each(filteredPosts.begin(), filteredPosts.end(), displayPost);

    cout << "begin filteredThreads " << endl;
    vector<Thread*> filteredThreads = Category::objects[0]->getThreads();
    cout << "print filteredThreads " << endl;
    for_each(filteredThreads.begin(), filteredThreads.end(), displayThread);

    //cout << "Hello world!" << endl;
    return 0;
}
