; Esercitazione Learning by Doing:
Trova i passaggi da effettuare in Assembler 8086 per visualizzare un singolo carattere a video. Successivamente prova a realizzare un algoritmo che visualizza a video 10 asterischi in colonna.

Tip: per andare a capo che in C sarebbe un '\n' in assembler sono due caratteri da stampare in successione e nello specifico Line Feed e Carriage Return.
; Come esempio si può visualizzare (stampare) l'alfabeto minuscolo sullo schermo.
.model small
.stack 200h
.data
.code

MAIN:
    .startup
	mov AX, @data
	mov DS, AX

    mov DL, '*'
    mov AH, 2
    mov BX, 0h
    stampa: INT 21
    
    CICLO:
        inc DL
        CMP DL,'Z'
        JNG stampa
        JGE fine
    fine
    mov ah, 4ch
    int 21h

    .exit
END.