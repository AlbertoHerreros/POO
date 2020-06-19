.h solamente

Class A{
public:
  inline int getVariable() const();
  void addnum(){
    ++this->variable;
     };
};

 inline int A::getVariable() const(){
    return this->variable;
 }
