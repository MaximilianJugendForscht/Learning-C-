#pragma 4once

namespace vec {
	template <typename T>
	class vector {
	public:
		vector ();
		~vector ();
		bool push_back (T input);
		void preallocate (int size);
		T operator[](int index);
		
	private:
		void preAllocate ();
		int itemNumb = 0;
		int size = 0;
		int typeSize = 0;
		int preallocSize = 1;
		T * data;
	};

	template <typename T>
	vector<T>::vector () {
		typeSize = sizeof(T);
	}

	template <typename T>
	bool vector<T>::push_back (T input) {
		if (size == itemNumb) {
			preAllocate();
		}
		itemNumb ++;

	}

	template <typename T>
	vector<T>::~vector () {

	}

	template <typename T> 
	void vector<T>::preallocate(int size) {
		preallocSize = size;
		if (preallocSize < 1) preallocSize = 1;
	}

	template <typename T>
	void vector<T>::preAllocate () {
		data = (T*) malloc (typeSize * preallocSize);
		size += preallocSize;
	}

	template <typename T>
	T vector<T>::operator[] (int index) {
		return data [index * typeSize];
	}
}