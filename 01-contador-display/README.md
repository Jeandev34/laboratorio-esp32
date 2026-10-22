https://wokwi.com/projects/478603312888262657

# 🔢 Experimento 01: Contador com Display de 7 Segmentos

Este experimento implementa um contador sequencial automático que exibe os números de 0 a 9 em um display de 7 segmentos utilizando o microcontrolador **ESP32**. 

### ⚙️ Detalhes Técnicos:
* **Lógica:** Desenvolvido em C++ através de uma **Máquina de Estados** (`switch-case`).
* **Otimização:** Uso de uma função dedicada com delay fixo para gerenciar a troca de estados, reduzindo a repetição de código.
* **Segurança:** O fluxo evita laços travados (`while` infinitos), garantindo que o Watchdog (WDT) do ESP32 não reinicie a placa por falha de processamento.
