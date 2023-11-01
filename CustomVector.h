#pragma once

template<typename T>
class CustomVector
{
private:
	T *arr;
	int size = 0;
	int capacity = 1;
public:
	int getSize();
	int getCapacity();
	void push_back(T element);
	void pop_back();
	T at(int index);
	T operator [] (int index);

	CustomVector();
    ~CustomVector();
};

template<typename T>
CustomVector<T>::CustomVector() : size(0), capacity(10)
{
    arr = new T[this->capacity];
}

template<typename T>
CustomVector<T>::~CustomVector()
{
    delete this->arr;
}


template<typename T>
int CustomVector<T>::getSize()
{
    return this->size;
}

template<typename T>
int CustomVector<T>::getCapacity()
{
    return this->capacity;
}

template<typename T>
void CustomVector<T>::push_back(const T element)
{
    if (size >= capacity) {
        capacity++;
        T* temporaryArr = new T[this->capacity];
        for (int x = 0; x < size; x++) {
            temporaryArr[x] = this->arr[x];
        }
        delete[] arr;
        this->arr = temporaryArr;
        delete[] temporaryArr;
    }
    arr[size] = element;
    size++;
}

template<typename T>
void CustomVector<T>::pop_back()
{
    T* temporaryArr = new T[capacity];
    for (int x = 0; x < size - 1; x++) {
        temporaryArr[x] = arr[x];
    }
    delete[] arr;
    this->arr = temporaryArr;
    delete[] temporaryArr;

    size--;
}

template<typename T>
T CustomVector<T>::at(int index)
{
    return this->arr[index];
}

template<typename T>
T CustomVector<T>::operator[](int index)
{
    return at(index);
}