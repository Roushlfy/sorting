#pragma once
template<typename T,typename P>
void quick_sort(T*,P, P);

template <typename T>
inline void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T, typename P>
T partition(T*, P, P);