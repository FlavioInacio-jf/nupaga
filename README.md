# nupaga


## 💻 Sobre o projeto
Uma financeira deseja obter dados de pessoas e pretende oferecer empréstimos para aqueles que possuem maior potencial como clientes. Para tanto, ela realiza o registro dessas pessoas em um arquivo, catalogando a **idade**, o **nome**, a **segurança de pagar**, o **emprego (Público ou Privado)** e a **renda**. Esses clientes são organizados por meio de um Heap, utilizando variáveis dinâmicas, de forma que a **“segurança de pagar”** será a chave. Dessa forma, os clientes com maior potencial serão contatados e o serviço será oferecido. 
A segurança de pagar será definida como sendo o produto entre o peso da **renda**, o peso do **emprego** e o da **idade**. Se a pessoa trabalha no setor público, esse peso irá valer 2 e caso a pessoa trabalhe no privado, o peso é de 1. Tanto a idade quanto a renda são divididos em faixas e cada uma terá seu respectivo peso nesse cálculo, conforme as tabelas a seguir:


Faixas de idades e seus respectivos pesos
Faixa de idade   | Peso da faixa
--------- | ------
18-30 anos | 4
31-50 anos | 3
51-70 anos | 2
Acima de 70 | 1


Faixas de renda e seus respectivos pesos
Faixa de renda (R$)   | Peso da faixa
--------- | ------
Até 1200,00 | 5
Até 3600,00 | 6
Até 6000,00 | 7
Acima 6000,00 | 8

---
## Organização da Estrutura:
- Ordenada por Link;

## Tipo de Estrutura
- Dinâmica;
- Arquivos;

## ⚙️ Funcionalidades

- **1. Seleção:** Seleciona o cliente com o maior potencial de pagamento;
- **2.Inserção:** Adiciona potenciais clientes com um valor mínimo de segurança de pagar;
- **Exclusão:** É fornecido ao sistema o nome completo da pessoa a qual se deseja excluir e então essa pessoa é excluída do sistema;
- **Atualização:** É fornecido ao sistema o nome completo da pessoa a qual se deseja alterar. Os novos dados da pessoa são fornecidos e ocorrerá a substituição;
- **Exibir todos:** Exibe todos os dados de todos os usuários ;
---

### **Utilitários**

-   Editor:  **[Visual Studio Code](https://code.visualstudio.com/)** 

## 📝 Licença

Este projeto esta sobe a licença [MIT](./LICENSE).
