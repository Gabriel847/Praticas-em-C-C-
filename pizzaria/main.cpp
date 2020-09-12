#include <iostream>
using namespace std;


int main(){
    int pizzaN=0,pizzariaN=0,diametroN=0,precoN=0,escolha=-1;
    
    string pizza[100];
    string pizzaria[100];
    int diametro[100];
    double preco[100];
    
    while(escolha != 0){
        cout << "\nMenu->\n\t1-Adicionar pedido\n\t2-Mostrar já cadastrados\n\t0-Sair\n";
        cin >> escolha;
        switch(escolha){
            case 1:
            	cout << "+++ Cadastrar +++\n";
                cout << "Nome da pizzaria: ";
                cin >> pizzaria[pizzariaN];
                cout << "Nome da pizza:";
                cin >> pizza[pizzaN];
                cout << "Diâmetro da pizza(cm):";
                cin >> diametro[diametroN];
                cout << "Preço da pizza(R$):";
                cin >> preco[precoN];
                pizzariaN++;pizzaN++;diametroN++;precoN++;
                cout << "*** Pedido cadastrado ***\n";
            break;
            case 2:
            	cout << "--- Lista ---\n";
                cout << "Pizzaria / Pizza / Diâmetro(cm) / Preço(R$)\n";
                
                for (int i=0;i<pizzaN;i++) {
                    cout << pizzaria[i] << "\t" << pizza[i] << "\t" << diametro[i] << "\t R$" << preco[i] << "\n";
                }
            break;
        }
    }
    cout << "Programa encerrado ...";
    return 0;
}


