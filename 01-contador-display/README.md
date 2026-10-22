https://wokwi.com/projects/478603312888262657

# 🔢 Experimento 01: Contador com Display de 7 Segmentos

Este experimento implementa um contador sequencial automático que exibe os números de 0 a 9 em um display de 7 segmentos utilizando o microcontrolador **ESP32**. 

### ⚙️ Detalhes Técnicos:
* **Lógica:** Desenvolvido em C++ através de uma **Máquina de Estados** (`switch-case`).
* **Otimização:** Uso de uma função dedicada com delay fixo para gerenciar a troca de estados, reduzindo a repetição de código.
* **Segurança:** O fluxo evita laços travados (`while` infinitos), garantindo que o Watchdog (WDT) do ESP32 não reinicie a placa por falha de processamento.

### 📌 Mapeamento dos Pinos (GPIOs) do ESP32
O display foi conectado aos pinos seguindo a pinagem padrão dos segmentos:
* **Pino 12:** Segmento E
* **Pino 13:** Segmento D
* **Pino 14:** Segmento C
* **Pino 15:** Segmento DP (Ponto Decimal)
* **Pino 16:** Segmento A
* **Pino 17:** Segmento B
* **Pino 18:** Segmento F
* **Pino 19:** Segmento G
