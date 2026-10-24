https://wokwi.com/projects/478791167920291841


Este projeto consiste em um sistema de semáforo automatizado com prioridade para pedestres, desenvolvido na plataforma Arduino para o microcontrolador ESP32. O circuito gerencia o fluxo de veículos utilizando três LEDs (Verde, Amarelo e Vermelho) e conta com um botão físico configurado com resistor pull-up interno para a solicitação de travessia.
O grande diferencial técnico do código está na otimização do tempo de espera: em vez de travar o fluxo por 60 segundos ininterruptos, o sistema monitora o botão a cada segundo. Assim que o pedestre faz a requisição, o ciclo interrompe o sinal verde imediatamente e avança para as fases de atenção (Amarelo) e parada (Vermelho), garantindo segurança e dinamismo ao trânsito urbano.
