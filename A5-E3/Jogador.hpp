// ESPECIFICAÇÃO

struct Jogador{
    int num_Jogos;
    int num_Gols;
    int num_Assistencias;
    int chutes_a_gol;
    int *pChutes, *pGols;

    void atribuirValores(int numJogos, int numGols, int numAss, int numChutes);

    void imprimirDados();

    int aproveitamento();
};

