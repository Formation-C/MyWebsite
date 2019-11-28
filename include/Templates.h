#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>
#include <functional>


namespace Templates
{
    // D�finit un mod�le de fonction qui va pouvoir prendre n'importe quel type T
    template<typename T>
    // M�thode permettant de filtrer les objets en fonction d'un crit�re pr�cis
    std::vector<T*> Filterobjects(std::function<bool(T*)> validator) {
        // std::function<bool(T*)> validator => Filterobjects prend en argument une fonction qui prend en argument un obget T* et retourne un bool
        
        // Initialise le vecteur � renvoyer
        std::vector<T*> result;

        // Initialise les it�rateurs pour parcourir le vecteur
        auto iter = T::objects.begin();
        auto iter_end = T::objects.end();
        for (; iter != iter_end; ++iter) {
            // R�cup�re la r�f�rence de l'�l�m�net actuellement parcouru
            T* object = *iter;
            // Ex�cute la fonction de validation sp�cifi�e par l'appelant
            if (validator(object)) {
                // Si la fonction valide l'objet, l'ajoute dans le vecteur � renvoyer
                result.push_back(object);
            }
        }
        // Renvoie le r�sultat
        return result;
    }
};

#endif // TEMPLATES_H
