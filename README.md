# nupaga


## Contexto
Uma financeira deseja obter dados de pessoas e pretende oferecer empréstimos para aqueles que possuem maior potencial como clientes. Para tanto, ela realiza o registro dessas pessoas em um arquivo, catalogando a idade, o nome, a segurança de pagar, o emprego (Público ou Privado) e a renda. Esses clientes são organizados por meio de um Heap, utilizando variáveis dinâmicas, de forma que a “segurança de pagar” será a chave. Dessa forma, os clientes com maior potencial serão contatados e o serviço será oferecido. 
A segurança de pagar será definida como sendo o produto entre o peso da renda, o peso do emprego e o da idade. Se a pessoa trabalha no setor público, esse peso irá valer 2 e caso a pessoa trabalhe no privado, o peso é de 1. Tanto a idade quanto a renda são divididos em faixas e cada uma terá seu respectivo peso nesse cálculo, conforme as tabelas a seguir:
