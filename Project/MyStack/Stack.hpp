#pragma once

namespace mawile {
	template<class Type>
	class Stack {
	public:
		void push(Type value) {
			if ((this->size) + 1 >= (this->capacity)) {
				(this->capacity) *= 2;
				Type* tempType = new Type[(this->capacity)];
				for (unsigned int i = 0; i < (this->size); ++i) tempType[i] = (this->data)[i];
				tempType[(this->size)] = value;

				delete[](this->data);
				(this->data) = tempType;
				++(this->size);
			}
			else {
				(this->data)[(this->size)] = value;
				++(this->size);
			}
		}

		void pop() {
			if ((this->size) == 0) return;
			--(this->size);
		}

		Type top() {
			return (this->data[this->size - 1]);
		}

		bool empty() {
			return (this->size == 0);
		}

		explicit(true) Stack() {
			(this->data) = nullptr;
			(this->size) = 0;
			(this->capacity) = 1;
		}

		~Stack() {
			if ((this->data) != nullptr) {
				delete[] (this->data);
				(this->data) = nullptr;
				(this->size) = 0;
				(this->capacity) = 1;
			}
		}

	private:
		Type*			data;
		Type			dtop;
		unsigned int	size;
		unsigned int	capacity;

	};
}