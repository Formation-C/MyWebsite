#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <vector>
#include <functional>


namespace Templates
{
    template<typename T>
    std::vector<T*> Filterobjects(std::function<bool(T*)> validator) { // validator est une function qui passe dans la filterobjects.  (replace)
        std::vector<T*> result;

        //std::vector<T*>::iterator iter, iter_end;
        auto iter = T::objects.begin();
        auto iter_end = T::objects.end();
        for (; iter != iter_end; ++iter) {
            T* object = *iter;
            if (validator(object)) {
                result.push_back(object);
            }
        }
        return result;
    }
};

#endif // TEMPLATES_H
