import json


def main(arquivo="dados.json"):

    with open(arquivo, "r", encoding="utf-8") as file:
        info = json.load(file)

    faturamento = [dia["valor"] for dia in info if dia["valor"] > 0]

    menor_faturamento = min(faturamento)
    maior_faturamento = max(faturamento)
    media_mensal = sum(faturamento) / len(faturamento)
    dias_acima_da_media = sum(1 for valor in faturamento if valor > media_mensal)

    print(f"Menor valor de faturamento: R$ {menor_faturamento:.2f}")
    print(f"Maior valor de faturamento: R$ {maior_faturamento:.2f}")
    print(f"Número de dias com faturamento acima da média: {dias_acima_da_media}")


if __name__ == "__main__":
    main()
