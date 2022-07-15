#include <iostream>
class Dummy {
	   int m_value;
	      public:
	      Dummy(int val) :
		         m_value(val)
			    {}
	         void destroy();
		    void displayValue();
		       void displayText();
};
void Dummy::destroy() {
	   delete this;
	   delete this;
}
void Dummy::displayValue() {
	   std::cout << "before displayValue function" << std::endl;
	   std::cout << this->m_value << std::endl;
	   std::cout << "after displayValue function" << std::endl;
}
void Dummy::displayText() {
	   std::cout << "Not accessing any member function" << std::endl;
}
int main() 
{
    Dummy * dummyPtr = new Dummy(5);
    dummyPtr->destroy();
    dummyPtr->displayValue();
    dummyPtr->displayText();
    return 0;
}
