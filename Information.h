#ifndef INFORMATION_H
#define INFORMATION_H

#include <string>
#include <vector>

enum class ProductType{
    Permanente, // Permamento, fica para sempre
    Mensal, // Paga por mês
    ProdutDev // Produto, que pode ser comprado varias vezes
};

struct Produt {
    std::string Nome;
    ProductType tipo;
    double valor; 
};


struct Promotion {
    int Months{ 0 }; // A quantos meses vai dar desconto
    float Percentage{ 0.0f }; // A quanto o desconto
};

struct PlayersTable {
    int PlayersPerDay{}; // Jogadores por dia
    int PlayersPerMonth{}; // Jogadores por mês
    int PlayersPerYear{}; // Jogadores por ano
};

struct Percentage {
    float Rate{ 0.0f }; // Margem de loja
    float ErrorRate{ 20.0f }; // Procentagem de erro

    float MPC{ 0.0f }; // Porcetagem do total PWB que  vai comprar os produtos internos
};

struct TimeGame {
    int Hours{ 0 };
    int Minutes{ 0 };
    int Seconds{ 0 };

    float Media{ 0.0f };

    float Minimo{ 0.0f };
    float Recomendado{ 0.0f };
    float Alto{ 0.0f };
};

struct Ganhos{
    double EarningsPerMonth{ 0.0 }; // Ganho por mês
    double EarningsPerYear{ 0.0 }; // Ganho por ano

    double GanhoPorProdutosMensalPorMes{ 0.0 };
    double GanhoPorProdutosMensalPorAno{ 0.0 };

    double EarningByBuying{ 0.0 }; // Ganho pela comprar do jogo
    double ETP{ 0.0 }; // Ganho pelos produtos internos
};


struct Game {
    double FinalValue{ 0.0 }; // Valor recomendado e final do jogo
    double Lucro{ 0.0 }; // Lucro do valor do jogo

    double ValuePerHour{ 0.300 }; // Valor por horas

    double ProductMedia{ 0.0 }; // Valor da media dos produtos
    double TotalProducts{ 0.0 }; // Todas de todas as somas dos produtos

    std::string Nome{ "Desconhecido" }; // Nome do jogo
    
    double DesiredValue{ 0.0f }; // Valor do jogo

    std::vector<Produt> Produtos{};

    TimeGame time;
    Ganhos ganho;
    Percentage percentage;
    Promotion promo;
    PlayersTable players;
};

struct Taxa {
    float BestStores{ 30.0f };
    float OtherStores{ 12.0f };
};

#endif