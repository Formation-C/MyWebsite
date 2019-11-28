#include <iostream>
#include <vector>
#include <algorithm>

#include "Thread.h"
#include "Post.h"


using namespace std;

void displayThread(Thread* thread) {
    cout << "Thread titled '" << thread->Gettitle() << "'" << endl;
}

void displayPost(Post* post) {
    cout << "Post content '" << post->Getcontent() << "' in thread titled '" << post->Getthread()->Gettitle() << "'" << endl;
}

int main()
{
    new Thread("Le C++ est-il bon pour la sant�?");
    new Thread("Regardes ces images de d�veloppeurs (la 5�me va vous �tonner)!");
    new Thread("Je suis venu, j'ai vu, j'ai codu");

    new Post(Thread::objects[0], "Mais oui c'est clair!");
    new Post(Thread::objects[0], "Ca ne fait aucun doute!");
    new Post(Thread::objects[0], "Poussez-vous bande de noobs!");
    new Post(Thread::objects[1], "Oh la 5�me!");
    new Post(Thread::objects[1], "TMTC fr�re!");
    new Post(Thread::objects[2], "Moi aussu!");
    new Post(Thread::objects[2], "Repr�sente J.C. -52!");
    new Post(Thread::objects[2], "Plagiat!");

    for_each(Thread::objects.begin(), Thread::objects.end(), displayThread);

    vector<Post*> filteredPosts = Thread::objects[2]->Getposts();

    for_each(filteredPosts.begin(), filteredPosts.end(), displayPost);


    if (Thread::objects[0]->Haspost(Post::objects[5]))
        cout << "Post '" << Post::objects[5]->Getcontent() << "' is present in thread titled '" << Thread::objects[0]->Gettitle() << "'" << endl;
    else
        cout << "Post '" << Post::objects[5]->Getcontent() << "' is NOT present in thread titled '" << Thread::objects[0]->Gettitle() << "'" << endl;


    //cout << "Hello world!" << endl;
    return 0;
}
