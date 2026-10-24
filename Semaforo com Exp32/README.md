https://wokwi.com/projects/478791167920291841


🚦 Experimento 02: Semáforo Inteligente com Botão de Pedestre
Este experimento implementa um sistema de controle de tráfego responsivo que gerencia o fluxo de veículos e garante a prioridade de travessia para pedestres através do microcontrolador ESP32.
⚙️ Detalhes Técnicos:
• Lógica: Desenvolvido em C++ com um laço de repetição fragmentado que monitora a entrada digital continuamente.
• Otimização: Uso de amostragem temporal (leitura a cada 1 segundo) em vez de um travamento longo por delay(), permitindo que o sistema interrompa o sinal verde imediatamente após o clique.
• Segurança: Configuração do pino do botão como INPUT_PULLUP usando o resistor interno do ESP32, o que elimina ruídos elétricos (falsos cliques) sem a necessidade de componentes externos na placa.
📌 Mapeamento dos Pinos (GPIOs) do ESP32
Os LEDs e o botão atuadores do trânsito foram conectados aos seguintes pinos:
• Pino 14: LED Verde (Fluxo de Veículos)
• Pino 13: LED Amarelo (Atenção / Transição)
• Pino 12: LED Vermelho (Parada de Veículos / Travessia Livre)
• Pino 4: Botão de Pedestre (Acionamento por nível lógico baixo - LOW)
