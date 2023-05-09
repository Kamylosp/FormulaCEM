# Comunicação CAN com BMS
    As informações serão transmitidas do BMS para a ESP via comunicação CAN BUS. Isso porque o BMS a todas as informações da bateria requisitadas pelo produto e o BMS consegue fazer apenas comunicação por CAN BUS.

## Como enviar essas informações pelo BMS?
    O software do BMS (Orion BMS Utility) nos permite alterarmos os endereços e as informações que são transmitidas nas saídas CAN. Ela nos permite utilizar 10 endereços e em cada endereço podemos configurar até 8 bytes de informações. Ou seja, em cada endereço podemos enviar até 8 informações por exemplo, tensão da bateria, temperatura da bateria e outros.
    Podemos configurar o endereço de transmição que quisermos dentre que este esteja entre 0x000 e 0x7FF. Assim como as inforações também podem ser configuradas, desde que o BMS as contenha.

## Informações a serem transmitidas pelo BMS
    As informações que devem ser transmitidas que são encontradas no BMS são:
    - Estado da bateria (State of Charge):
    - Tensão:
    - Tensão Máxima:
    - Tensão Mínima: 
    - Temperatura máxima:
    - Temperatura mínima:
