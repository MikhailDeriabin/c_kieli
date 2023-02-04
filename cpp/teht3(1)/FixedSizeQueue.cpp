#include "FixedSizeQueue.h"

template<typename T, int maxSize, typename Container>
inline void FixedSizeQueue<T, maxSize, Container>::push(T& elem){
    if (this->size() == maxSize) 
        this->c.pop_front();
    
    std::queue<T, Container>::push(elem);
}