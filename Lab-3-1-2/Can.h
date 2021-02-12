#ifndef Can_h
#define Can_h

class Can{
private: 

  std::string type;
  
  int volume;

public:
  Can();
  
  Can(std::string type,int volume);
  
  
  void setCan(std::string type,int volume);

  int getVolume();

  std::string getType();

  void display();

  

};



#endif
