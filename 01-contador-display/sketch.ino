// Variável que controla qual número será exibido (começa no 0)
int estado = 0;

void setup() {
  pinMode(12, OUTPUT); // E
  pinMode(13, OUTPUT); // D
  pinMode(14, OUTPUT); // C
  pinMode(15, OUTPUT); // DP
  pinMode(16, OUTPUT); // A
  pinMode(17, OUTPUT); // B
  pinMode(18, OUTPUT); // F
  pinMode(19, OUTPUT); // G
}

void loop() {
  // O switch precisa receber a variável que ele vai testar
  switch(estado) {

     

    case 0:
     apagarTudo();
     digitalWrite(17, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(14, HIGH);
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);
     digitalWrite(16, HIGH);

     proximoEstado(1);
     break;
    
    case 1:
      apagarTudo();          // Garante que o display comece limpo
      digitalWrite(12, HIGH); // Liga segmento E
      digitalWrite(18, HIGH); // Liga segmento F
      
     proximoEstado(2);         // Altera o estado para ir para o Caso 2 na próxima volta
      break;

    case 2:
      apagarTudo();          // Apaga os pinos do Caso 1
      digitalWrite(16, HIGH); // Liga segmento A
      digitalWrite(17, HIGH); // Liga segmento B
      digitalWrite(19, HIGH); // Liga segmento G
      digitalWrite(12, HIGH); // Liga segmento E
      digitalWrite(13, HIGH); // Liga segmento D
      
     proximoEstado(3);

    case 3:
      apagarTudo();
      digitalWrite(16, HIGH);
      digitalWrite(17, HIGH);
      digitalWrite(14, HIGH);
      digitalWrite(13, HIGH);
      digitalWrite(19, HIGH);
      

    proximoEstado(4);

    case 4:
     apagarTudo();
     digitalWrite(14, HIGH);
     digitalWrite(18,HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(17, HIGH);

    proximoEstado(5);
     break;

    case 5:
     apagarTudo();
     digitalWrite(16, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(14, HIGH);
     digitalWrite(13, HIGH);

    proximoEstado(6);
     break;

    case 6:
     apagarTudo();
     digitalWrite(16, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(14, HIGH);
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);

     proximoEstado(7);
     break;

    case 7:
     apagarTudo();
     digitalWrite(16, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(12, HIGH);

     proximoEstado(8);
     break;

    case 8:
     apagarTudo();
     digitalWrite(16, HIGH);
     digitalWrite(17, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(14, HIGH);
     digitalWrite(13, HIGH);
     digitalWrite(12, HIGH);

     proximoEstado(9);
     break;

    case 9:
     apagarTudo();
     digitalWrite(16, HIGH);
     digitalWrite(17, HIGH);
     digitalWrite(18, HIGH);
     digitalWrite(19, HIGH);
     digitalWrite(14, HIGH);

    break;

  }
}

void proximoEstado(int valorDoProximoEstado){
  delay(1000);
  estado =  valorDoProximoEstado;
}

// Função auxiliar para apagar todos os segmentos antes de desenhar o próximo número
void apagarTudo() {
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(14, LOW);
  digitalWrite(15, LOW);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, LOW);
}
