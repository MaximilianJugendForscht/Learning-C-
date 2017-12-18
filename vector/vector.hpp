#pragma once

#include <stdexcept>

namespace vec {

	class outOfRange : public std::runtime_error {
	public:
		char* what () {
			return (char*) "Index out of range in vec::vector<type>";
		}
	};

	template <typename T>
	class vector {
	private:
		int itemNumb = 0;
		int size = 0;
		int typeSize = 0;
		int preallocSize = 1;
		T * data;
	public:
		vector () {
			typeSize = sizeof(T);
			data = (T*)malloc (preallocSize);
			size += preallocSize;
		}

		void push_back (T input) {
			if (size == itemNumb) {
				preAllocate();
			}
			data[itemNumb] = input;
			itemNumb ++;
		}

		~vector () {
			free (data);
		}

		void preallocate(int size) {
			preallocSize = size;
			if (preallocSize < 1) preallocSize = 1;
		}

		void preAllocate () {
			data = (T*)realloc (data, preallocSize);
			size += preallocSize;
		}

		T& operator[] (int index) {
			return data [index];
		}

		T& operator= (const T& assignee) {
			this = assignee;
			return this;
		}
		T& assign (int index, const T& assignee) {
			data[index] = assignee;
			return data[index];
		}

		T& at (unsigned int index) {
			if (index > itemNumb) {
				abort();
			}
			return data[index];
		}
		T& front () {
			return data[0];
		}
		T& back () {
			return data[itemNumb];
		}
		T* fulldata () {
			return data;
		}
		bool empty () {
			if (itemNumb == 0) return true;

			return false;
		}
		int vecsize () {
			return itemNumb;
		}
	};
}