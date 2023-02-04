#ifndef FIXED_SIZE_QUEUE_H
#define FIXED_SIZE_QUEUE_H

#include <queue>
#include <deque>

template <typename T, int maxSize, typename Container = std::deque<T>>
class FixedSizeQueue : public std::queue<T, Container>{
public:
	void push(T& elem);
};

#endif