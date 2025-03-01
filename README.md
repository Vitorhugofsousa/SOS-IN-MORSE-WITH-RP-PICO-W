# Código SOS em Morse para Raspberry Pi Pico

Este repositório contém um código em C para Raspberry Pi Pico que pisca um LED em código Morse para a mensagem SOS.

## Objetivo

O objetivo deste projeto é demonstrar como usar o Raspberry Pi Pico para gerar sinais de código Morse usando um LED. Ele pode ser usado para fins educacionais ou como um sinal de socorro básico.

## O Que o Código Faz

O código configura um pino GPIO como saída e o usa para controlar um LED. Ele então pisca o LED em um padrão que representa a mensagem SOS em código Morse.

### Funcionalidades Principais

-   **Inicialização do GPIO:** O código inicializa o pino GPIO 13 como saída.
-   **Funções de Código Morse:** As funções `s()` e `o()` piscam o LED em padrões que representam as letras "S" e "O" em código Morse, respectivamente.
-   **Loop Principal:** O loop principal chama as funções `s()` e `o()` na sequência correta para gerar a mensagem SOS repetidamente.

## Como Utilizar

1.  **Pré-requisitos:**
    
    -   Raspberry Pi Pico
    -   LED e resistor (opcional)
    -   Ambiente de desenvolvimento configurado para Raspberry Pi Pico (SDK, compilador, etc.)
2.  **Compilação:**
    
    -   Use o SDK do Raspberry Pi Pico para compilar o código.
3.  **Upload:**
    
    -   Conecte o Raspberry Pi Pico ao seu computador e arraste o arquivo UF2 gerado para o Pico.
4.  **Conexão do LED:**
    
    -   Conecte o LED ao pino GPIO 13 (e GND) do Raspberry Pi Pico. Use um resistor para limitar a corrente, se necessário.
5.  **Execução:**
    
    -   O LED começará a piscar a mensagem SOS em código Morse.

## Ferramentas Utilizadas

-   **Hardware:** Raspberry Pi Pico
-   **Linguagem de Programação:** C
-   **SDK:** Raspberry Pi Pico SDK
-   **Compilador:** GCC (GNU Compiler Collection)
-   **Ambiente de Desenvolvimento:** Qualquer editor de texto ou IDE que suporte C.

## Estrutura do Código

-   `led_pin_red`: Define o pino GPIO conectado ao LED.
-   `s()`: Função para piscar o LED para a letra "S" em Morse.
-   `o()`: Função para piscar o LED para a letra "O" em Morse.
-   `main()`: Função principal que inicializa o GPIO e executa o loop principal.
