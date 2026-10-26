int tempoParado = 0;

const int LED_VERD = 14;
const int LED_AM = 13;
const int LED_VER = 12;
const int BOTAO = 15;

void apagarTudo(){
  digitalWrite(LED_VERD, LOW);
  digitalWrite(LED_AM, LOW);
  digitalWrite(LED_VER, LOW);
}


void setup() {
  Serial.begin(115200);

  pinMode(LED_VERD, OUTPUT);
  pinMode(LED_AM, OUTPUT);
  pinMode(LED_VER, OUTPUT);

  pinMode(BOTAO, INPUT_PULLUP);


}

void loop() {

  apagarTudo();

  digitalWrite(LED_VERD, HIGH);
  Serial.println("Led Verde Ligado");


  int i = 0;

  for (i = 0;i<60; i ++){
   delay(1000);
   Serial.println(i);
   if (digitalRead(BOTAO)==LOW){
     Serial.println("Pedestre acionou o Botão");
     tempoParado = i;
     break;
   }
    
 
  }
 apagarTudo();

 digitalWrite(LED_AM, HIGH);
 delay(10000);
 Serial.println("Led Amarelo Ligado");
 apagarTudo();

 digitalWrite(LED_VER, HIGH);
 Serial.println("Led Vermelho Ligado");
 delay(20000);

 apagarTudo();




  
}
