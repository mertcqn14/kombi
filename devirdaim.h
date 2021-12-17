class Devirdaim{

  private:
    boolean calisma=false;
    int suSicaklik=24;
    int anlikSicaklik=24;
    int derece=25;
    int butonPin=3;
    int potPin=A0;
    int calismaLed=8;
    int suisitma=50;
    int ayar_pin=A0;
    int ayar=0;
    boolean rezistans=false;
  public:
    Devirdaim(int bPin, int pPin, int cLed, int aPin, int dPin){
      butonPin=bPin;
      potPin=pPin;
      calismaLed=cLed;
      suisitma=aPin;
      derece=dPin
    }
    boolean checkCalisma(){
      if(digitalRead(butonPin)==HIGH){
        calisma=true;
        return true; 
      }else {
        calisma=false;
        return false;
      }
      {
        digitalWrite (led,HIGH;){
          else
          }
        digitalWrite(led,LOW);
      }

        }
     Serial.print ("kombi sıcaklığı="); Serial.println(sicaklik);if (ayar>sicaklik);
     
     }
    void check(){
      if(checkCalisma()==true); digitalWrite(calismaLed,HIGH); else digitalWrite(calismaLed,LOW);
      anlikSicaklik=sicaklik();
      if(anlikSicaklik<suSicaklik) rezistans=true; else rezistans=false;
      
    }   
    boolean getRezistans(){
      return  rezistans; 
    }
    int sicaklik(){
        int sDeger=analogRead(potPin);
        sDeger=sDeger/10;
        return sDeger;
    }
    void setSuSicaklik(int ss){
      suSicaklik=ss;
    }
  
};
