#include "CategoryForum.h"

using namespace Forum;

Category::Category(std::string _name) : name(_name)
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

std::vector<Thread*> Category::getThreads() {
    // Retourne le r�sultat de la fonction g�n�rique permettant de filtrer des objets
    return Templates::Filterobjects<Thread>(
        // ...en sp�cifiant que l'objet doit r�f�rencer ce fil de discussion pour �tre valide
        // fonction lambda
        [this](Thread* object) { return object->Getcategory() == this; }
        // [this] : on capture le contexte de this pour le passer � la function par la suite
        //
    );
}

std::vector<Category*> Category::objects;
