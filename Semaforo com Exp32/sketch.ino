// Projeto do Semáforo com Botão de Pedestre
int tempoParado = 0; // Vai guardar o segundo exato em que o pedestre apertou o botão

const int LED_VERDE = 14;
const int LED_AMARELO = 13;
const int LED_VERMELHO = 12;
const int BOTAO = 4;

// Funçãozinha para apagar tudo de uma vez e não precisar repetir 3 linhas sempre
void apagarLuz() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}

void setup() {
  Serial.begin(115200); // Abre o canal para conversarmos com o monitor serial

  // Avisando o ESP32 que esses pinos vão mandar energia (saídas)
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
  
  // O segredo do botão: liga o resistor interno para evitar falsos cliques.
  // Quando o botão for apertado, o pino vai ler LOW.
  pinMode(BOTAO, INPUT_PULLUP);
}

void loop() {
  // ========================================================
  // PASSO 1: SINAL VERDE (Fica aceso por até 60 segundos)
  // ========================================================
  digitalWrite(LED_VERDE, HIGH); // Liga o Verde
  Serial.println("Sinal Verde aceso.");

  int i = 0; // Criamos o 'i' aqui fora do 'for' para ele não morrer lá dentro
  
  // Em vez de um delay de 60s que trava tudo, contamos de 1 em 1 segundo até 60
  for (i = 0; i < 60; i++) {
    delay(1000); // Espera 1 segundo antes de continuar

    // A cada 1 segundo, o ESP32 dá uma espiada para ver se o botão foi apertado
    if (digitalRead(BOTAO) == LOW) {
      Serial.println("O pedestre apertou o botão! Interrompendo o Verde...");
      tempoParado = i; // Salva em qual segundo o botão foi apertado
      break;           // Chuta o balde e sai do laço 'for' imediatamente
    }
  }

  // Só para você ver no monitor quanto tempo o verde realmente durou:
  Serial.print("O verde ficou aceso por: ");
  Serial.print(i);
  Serial.println(" segundos.");
  
  apagarLuz(); // Apaga o verde para começar a fechar o sinal

  // ========================================================
  // PASSO 2: SINAL AMARELO (Atenção por 10 segundos)
  // ========================================================
  digitalWrite(LED_AMARELO, HIGH);
  Serial.println("Sinal Amarelo aceso! Atenção.");
  delay(10000); // Aqui pode ser delay normal, ninguém mexe no amarelo
  apagarLuz();

  // ========================================================
  // PASSO 3: SINAL VERMELHO (Carros param por 30 segundos)
  // ========================================================
  digitalWrite(LED_VERMELHO, HIGH);
  Serial.println("Sinal Vermelho aceso. Pedestres atravessam!");
  delay(30000); // Carros esperando os pedestres passarem
  apagarLuz();

  // Uma folga de 1 segundo com tudo apagado antes do loop recomeçar do zero
  delay(1000);
}