#include <iostream>
#include <conio.h>
using namespace std;

#define SIZE 100

class MongoMenu {

		
	
	public:
		
		string SYMBOL;
				
		MongoMenu() {
			
			this->SYMBOL = "*";
			
			setlocale(LC_ALL, "Portuguese");

			while(1) {
				
				cout << "\n\n\tMenu de Comandos - ";
				cout << "MongoDB - ";
				cout << "Windows 10" <<endl;
				
				bar(SYMBOL, SIZE);
				
				menu();
				
			}
			
			
			
		}
		
		void menu() {
			
			int opcao;
			
			cout << "\t[1]  : Criar uma base de dados." << endl;
			cout << "\t[2]  : Visualizar todas as bases de dados." << endl;
			cout << "\t[3]  : STATUS da base de dados." << endl;
			cout << "\t[4]  : CREATE (insert)." << endl;
			cout << "\t[5]  : STATUS da coleção." << endl;
			cout << "\t[6]  : READ (select)." << endl;
			cout << "\t[7]  : Visualização legível de dados(PRETTY)." << endl;
			cout << "\t[8]  : UPDATE." << endl;
			cout << "\t[9]  : DELETE." << endl;
			cout << "\t[10] : TRUNCATE. " << endl; 
			cout << "\t[11] : Operadores Lógicos." << endl;
			cout << "\t[12] : Operadores de Comparação." << endl;
			cout << "\t[13] : Projections" << endl;
			cout << "\t[14] : SORT." << endl;
			cout << "\t[15] : LIMIT." << endl;
			cout << "\t[16] : SKIP." << endl;
			cout << "\t[17] : REGEX (like)." << endl;
			cout << "\t[18] : COUNT." << endl;
			cout << "\t[19] : Associações." << endl;
			cout << "\t[20] : DROP." << endl;
			
			cout << "\n\tEscolha: ";
			cin >> opcao;
			
			system("cls");
			cout << "\n";
			escolha(opcao);
			system("pause");
			system("cls");
		}
		
		void escolha(int opcao) {
			switch(opcao) {
				
				case 1 : {

					useDatabase();
					
					break;
				}
				case 2 : {
					
					showDBS();
					
					break;
				}
				case 3 : {
					
					dbStats();
					
					break;
				}
				case 4 : {
					
					CREATE();
					
					break;
				}
				case 5 : {
					
					dbCollectionStats();
					
					break;
				}
				case 6 :{
					
					READ();
					
					break;
				}
				case 7 : {
					
					pretty();
					
					break;
				}
				case 8 : {
					
					UPDATE();
					
					break;
				}
				case 9 : {
					
					DELETE();
					
					break;
				}
				case 10 : {
					
					truncate();
					
					break;
				}
				case 11 : {
					
					operadoresLogicos();
					
					break;
				}
				case 12 : {
					
					operadoresDeComparacao();
					
					break;
				}
				case 13 : {
					
					projections();
						
					break;
				}
				case 14 : {
					
					sort();
					
					break;
				}
				case 15 : {
					
					limit();
					
					break;
				}
				case 16 : {
					
					skip();
					
					break;
				}
				case 17 : {
					
					regex();
					
					break;
				}
				case 18 : {
					
					count();
					
					break;
				}
				case 19 : {
					
					associacoes();
					
					break;
				}
				case 20 : {
					
					drop();
					
					break;
				}
				
				default :{				
					sair();
				}
				
				
			} // fim switch

			cout << endl << endl;
		}
		
		void useDatabase() {
			
			cout << "> use mydatabase;" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando seleciona a base de dados informada." << endl;
			cout << "\n";
			cout << "Se o banco não existir, ele será criado." << endl;
			
		}
		
		
		
		void showDBS() {
			
			cout << "> show dbs;" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando mostra todas as bases de dados existentes." << endl;
		}
		
		void dbStats() {
			
			cout << "> db.stats();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando vizualiza o STATUS do banco, como: " << endl;
			cout << "\n";
			cout << "Nome do Banco,\n\nQtde. de coleções,\n\nQtde. de Objetos,\n\netc." << endl;
			
		}
		
		
		void CREATE() {
			
			cout << "> db.collection.insert({});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando cria uma coleção" << endl;
			cout << "\n";
			cout << "Insere 1 ou mais documentos." << endl;
			cout << "\n";
			cout << "Exemplo com 1 documento: " << endl;
			cout << "\n";		
			cout << "db.usuarios.insert({" << endl;
			cout << "\n\tcodigo: 1," << endl;
			cout << "\n\tnome: \"Jane Doe\"" << endl;
			cout << "\n});" << endl;
			
			cout << "\nExemplo com vários documentos: " << endl;
			cout << "\n";		
			cout << "> db.usuarios.insert([" << endl;
			cout << "\n\t{";
			cout << "\n\t\tcodigo: 1," << endl;
			cout << "\n\t\tnome: \"Jane Doe\"" << endl;
			cout << "\n\t}," << endl;
			cout << "\n\t{";
			cout << "\n\t\tcodigo: 2," << endl;
			cout << "\n\t\tnome: \"Jon Doe\"," << endl;
			cout << "\n\t\tnascimento: new Date()" << endl;
			cout << "\n\t}" << endl;
			cout << "\n]);" << endl;
			
			cout << "\nVariações: " << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.insertOne({});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Insere apenas 1 documento por vez." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.insertMany([{},{}]);" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Insere apenas mais de 1 documento por vez." << endl;
			
		}
		
		void dbCollectionStats() {
			
			cout << "> db.collection.stats();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando mostra os STATUS da coleção, como: " << endl;
			
			cout << "\nNome da coleção,\n\nQtde. de documentos,\n\netc." << endl;
		}
		
		void READ() {
			
			cout << "> db.collection.find({});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna todos os documentos de uma coleção." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna todos os documentos encontrados." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.findOne({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna o primeiro documento encontrado." << endl;
			
			cout << "\nRetorna o primeiro documento inserido se nenhum" << endl;
			
			cout << "\nparametro for informado." << endl;
		}
		
		void pretty() {
			
			cout << "> db.collection.find().pretty();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Retorna os documentos em formato legível (JSON)." << endl;
			
		}
		
		void UPDATE() {
			
			cout << "> db.collection.update({chave: valor}, {$set: {chave: valor} });" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando encontra um documento, e altera seus dados." << endl;
			
			cout << "\nExemplo, alterando o documento com código 1: " << endl;
			
			cout << "\n> db.usuarios.update(" << endl;
			
			cout << "\n\t{codigo: 1}," << endl;
			
			cout << "\n\t{$set: {nome: \"Bella\"}}" << endl;
			
			cout << "\n);" << endl;
			
			cout << "\nExemplo, alterando varios valores do documento: " << endl;
			
			cout << "\n> db.usuarios.update(" << endl;
			
			cout << "\n\t{codigo: 3}," << endl;
			
			cout << "\n\t{$set: {nome: \"Daniel\", twitter: \"@Dan2018\"}}" << endl;
			
			cout << "\n);" << endl;
			
			cout << "\nVariações: " << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.updateOne({chave: valor}, {$set: {chave: valor}});" << endl;  
			
			bar(SYMBOL, SIZE);
			
			cout << "Altera apenas o primeiro documento encontrado." << endl;
			
			cout << "\nSe dentro do $set forem informados novas chaves e valores que não exitem." << endl;
			
			cout << "\nEles serão adicionadas ao documento." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.updateManny({chave: valor}, {$set: {chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Altera todos os documentos encontrados." << endl;
		}
		
		void DELETE() {
			
			cout << "> db.collection.remove({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando remove todos os documentos encontrados." << endl;
			
			cout << "\nExemplo, removendo documentos com código 1: " << endl;
			
			cout << "\n> db.usuarios.remove({codigo: 1});" << endl;
			
			cout << "\nVariações: " << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.deleteOne({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando remove o primeiro documento encontrado." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.deleteMany({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando remove todos os documentos encotrados." << endl;
			
			cout << "\nSe nenhum parametro for informado, todos os documentos são excluidos." << endl;
			 
		}
		
		
		void truncate() {
			
			cout << "db.collection.remove({});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando remove todos os documentos da coleção." << endl;
			
			cout << "\nSemelhante ao TRUNCATE do MySQL." << endl;
		} 
		
		void operadoresLogicos() {
			
			cout << "> db.collection.find({$and: [{chave: valor}, {chave: valor}]});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Retorna os documentos se todos os valores dentro do vetor forem verdadeiros." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({$or: [{chave: valor}, {chave: valor}]});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Retorna os documentos se um dos valores dentro do vetor forem verdadeiros." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$exists: true}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos caso eles possuam determinada chave." << endl;
			
			cout << "\nExemplo, retornando usuarios que possuam a chave EMAIL: " << endl;
			
			cout << "\n> db.usuarios.find({email: {$exists: true}});" << endl;
			
			cout << "\nCaso queira retornar os documentos que nao possuam esta chave," << endl;
			
			cout << "\ninforme o valor FALSE no lugar de TRUE." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$not: {$eq: valor}}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos em que a chave não possua determinado valor." << endl;
			
			cout << "\nExemplo, retornando documentos que não sejam do sexo masculino:" << endl;
			
			cout << "\n> db.usuarios.find({sexo: {$not: {$eq: \"M\"}}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({$nor: [{chave: valor}, {chave: valor}]});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos que não possuam nenhum dos valores informados." << endl;
			
		}
		
		void operadoresDeComparacao() {
			
			cout << "> db.collection.find({chave: {$eq: valor}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos que possuam o valor informado." << endl;
			
			cout << "\nO operador de igualdade ($eq), normalmente não é necessário." << endl;
			
			cout << "\nÉ mais usado junto a operador $not." << endl;
			
			cout << "\nExemplo, retornando usuarios que não possuam o nome informado: " << endl;
			
			cout << "\n> db.usuarios.find({nome: {$not: {$eq: \"Jane Doe\"}}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$ne: valor}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos que não possuam o valor informado." << endl;
			
			cout << "\nÉ uma versão simplificada da combinação dos operadores ($not) e ($eq)." << endl;
		
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$gt: valor}});" << endl;
			
			bar(SYMBOL, SIZE);	
			
			cout << "Este comando retorna os documentos em que o valor seja MAIOR que o informado." << endl;
		
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$gte: valor}});" << endl;
			
			bar(SYMBOL, SIZE);	
			
			cout << "Este comando retorna os documentos em que o valor seja MAIOR OU IGUAL ao informado." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$lt: valor}});" << endl;
			
			bar(SYMBOL, SIZE);	
			
			cout << "Este comando retorna os documentos em que o valor seja MENOR que o informado." << endl;
		
			bar(SYMBOL, SIZE);
			
			cout << "> db.collection.find({chave: {$lte: valor}});" << endl;
			
			bar(SYMBOL, SIZE);	
			
			cout << "Este comando retorna os documentos em que o valor seja MENOR OU IGUAL ao informado." << endl;
		
		}
		
		void projections() {
			
			cout << "> db.collections.find({chave: valor},{chave: 1});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando filtra um documento, e retorna apenas as colunas específicas." << endl;
			
			cout << "\nNa primeira chaves, os documentos são filtrados pelos valores informados." << endl;
			
			cout << "\nNa segunda chaves, são informados quais chaves serão mostradas." << endl;
			
			cout << "\nO valor 1 significa que a chave será mostrada." << endl;
			
			cout << "\nO valor 0 significa que a chave será escondida." << endl;
			
			cout << "\nExemplo, retornando apenas o nome e o email do usuario com codigo 1: " << endl;
			
			cout << "\n> db.usuarios.find(" << endl;
			
			cout << "\n\t{codigo: 1}," << endl;
			
			cout << "\n\t{_id: 0, nome: 1, email: 1}" << endl;
			
			cout << "\n);" << endl;
			
			cout << "\nExemplo, retornando apenas os nomes dos usuarios: " << endl;
			
			cout << "\n> db.usuarios.find(" << endl;
			
			cout << "\n\t{}," << endl;
			
			cout << "\n\t{_id: 0, nome: 1}" << endl;
			
			cout << "\n);" << endl;
			
		}
		
		void sort() {
			
			cout << "db.collection.find({}).sort({chave: 1});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando ordena os documentos de acordo com a chave passada como parametro." << endl;
			
			cout << "\nAo passar o valor 1, os documentos serão ordenados em ordem crescente." << endl;
			
			cout << "\nAo passar o valor -1, os documentos serão ordenados em ordem decrescente." << endl;
			
			cout << "\nExemplo, ordenando os documentos pelo codigo em ordem crescente: " << endl;
			
			cout << "\n> db.usuarios.find({}).sort({codigo: 1});" << endl;
			
			cout << "\nExemplo, ordenando os documentos pelo nome em ordem decrescente: " << endl;
			
			cout << "\n> db.usuarios.find({}).sort(nome: -1});" << endl;
			
		}
		
		void limit() {
			
			cout << "> db.collection.find().limit(valor);" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando limita a quantidade de documentos que serão mostrados." << endl;
			
			cout << "\nExemplo, retornando apenas os 5 primeiros documentos: " << endl;
			
			cout << "\n> db.usuarios.find().limit(5);" << endl;
			
		}
		
		void skip() {
			
			cout << "> db.collection.find().skip(valor);" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando pula determinada quantidade de documentos." << endl;
			
			cout << "\nExemplo, pulando os dois primeiros documentos: " << endl;
			
			cout << "\n> db.usuarios.find().skip(2);" << endl;			
		}
		

		void regex() {
			
			cout << "> db.collection.find({chave: {$regex: /valor/}});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna os documentos que possuam determinados parametros." << endl;
			
			cout << "\nSemelhante ao LIKE do MySQL." << endl;
			
			cout << "\nÉ case sensitive, diferencia maiusculas de minusculas." << endl;
			
			cout << "\nExemplo, retornando os documentos que possuam a letra \"a\" na chave nome: " << endl;
			
			cout << "\n> db.usuarios.find({nome: {$regex: /a/}});" << endl;
			
		}
		
		void count() {
			
			cout << "> db.collection.count();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando retorna a quantidade documentos existentes na coleção." << endl;
		}
		
		void associacoes() {
			
			cout << "> var variavel = db.collection.findOne({chave: valor});" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando guarda o documento em uma variável." << endl;
			
			cout << "\nExemplo, de uma venda realizada por um cliente com vários produtos:" << endl;
			
			cout << "\n var cliente = db.clientes.findOne({ClienteId: 1});" << endl;
			
			cout << "\n var produtos = db.produtos.find({" << endl;
			
			cout << "\n\t$and: [" << endl;
			
			cout << "\n\t\t{codigo: {$gte: 2}}," << endl;
			
			cout << "\n\t\t{codigo: {$lte: 3}}" << endl;
			
			cout << "\t]" << endl;
			
			cout << "\n}).limit(2).toArray();" << endl;
			
			cout << "\nÉ necessário adicionar a função (toArray) quando retornar mais de um documento." << endl;
			
			cout << "\n> db.vendas.insert(" << endl;
			
			cout << "\n\t{cliente: cliente, produtos: produtos}" << endl;
			
			cout << "\n);" << endl;
					
		}
		
		void drop() {
			
			cout << "> db.collection.drop();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando exclui a coleção." << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "> db.dropDatabase();" << endl;
			
			bar(SYMBOL, SIZE);
			
			cout << "Este comando exclui a base de dados." << endl;
			
		}
		
		
		void bar(string symbol, int max) {
			cout << "\n";
			int i = 0;
			for(int i = 0; i < max; i++) {
				cout << symbol;
			}
			cout << "\n\n";
		}
		
		void sair() {
			
			char s;
			cout << "Deseja sair? (S/n) ";
			cin >> s;
			
			s = tolower(s);
			
			if(s == 's') {
				system("cls");
				cout << "bye... bye..." << endl;
				exit(1);
			}
		}
	
	
};
