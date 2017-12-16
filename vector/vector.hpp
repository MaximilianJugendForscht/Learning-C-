#pragma 4once

namespace vec {
	template <typename T>
	class vector {
	public:
		vector ();
		~vector ();
		bool push_back (T input);

	private:
		int size = 0;
		int typeSize = 0;
		int preallocSize = 0;
	};

	template <typename T>
	vector<T>::vector () {
		typeSize = sizeof(T);
	}

	template <typename T>
	bool vector<T>::push_back (T input) {

	}

	template <typename T>
	vector<T>::~vector () {

	}

}