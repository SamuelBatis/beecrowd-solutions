#include <bits/stdc++.h>

using namespace std;

int main()
{

  double x, y;
  cin >> x >> y;

  if (x == 0.0 && y == 0.0)
  {
    cout << "Origem" << endl;
  }
  else if (x == 0.0)
  {
    cout << "Eixo Y" << endl;
  }
  else if (y == 0.0)
  {
    cout << "Eixo X" << endl;
  }
  else
  {
    if (x > 0.0)
    {
      if (y > 0.0)
      {
        cout << "Q1" << endl;
      }
      else
      {
        cout << "Q4" << endl;
      }
    }
    else
    {
      if (y > 0.0)
      {
        cout << "Q2" << endl;
      }
      else
      {
        cout << "Q3" << endl;
      }
    }
  }
  return 0;
}

/*
int main() {
    float N1, N2, N3, N4, exam_score;
    cin >> N1 >> N2 >> N3 >> N4;

    float average = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << average << endl;

    if (average >= 7.0)
        cout << "Aluno aprovado." << endl;
    else if (average < 5.0)
        cout << "Aluno reprovado." << endl;
    else {
        cout << "Aluno em exame." << endl;
        cin >> exam_score;
        cout << "Nota do exame: " << exam_score << endl;

        average = (average + exam_score) / 2;

        if (average >= 5.0)
            cout << "Aluno aprovado." << endl;
        else
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << average << endl;
    }

    return 0;
}




/*int main()
{
  double a[] = {4.00, 4.50, 5.00, 2.00, 1.50};
  int b, c;
  std::cin >> b >> c;

  double resp = a[b - 1] * c;

  std::cout.precision(2);
  std::cout << "Total: R$ " << std::fixed << resp << std::endl;

  return 0;
}

/*int main()
{
  while (true)
  {
    int n;
    std::cin >> n;

    if (n == 0)
      break;

    std::vector<int> gifts(2 * n);

    for (int i = 0; i < 2 * n; ++i)
    {
      std::cin >> gifts[i];
    }

    std::sort(gifts.begin(), gifts.end());

    int most_expensive = 0, cheapest = 2e9;
    for (int i = 0; i < n; ++i)
    {
      int total_price = gifts[i] + gifts[2 * n - i - 1];
      most_expensive = std::max(most_expensive, total_price);
      cheapest = std::min(cheapest, total_price);
    }

    std::cout << most_expensive << " " << cheapest << std::endl;
  }

  return 0;
}

/*#include <iostream>

int main()
{
  double number;

  std::cin >> number;

  if (number >= 0 && number <= 25)
  {
    std::cout << "Intervalo [0,25]" << std::endl;
  }
  else if (number > 25 && number <= 50)
  {
    std::cout << "Intervalo (25,50]" << std::endl;
  }
  else if (number > 50 && number <= 75)
  {
    std::cout << "Intervalo (50,75]" << std::endl;
  }
  else if (number > 75 && number <= 100)
  {
    std::cout << "Intervalo (75,100]" << std::endl;
  }
  else
  {
    std::cout << "Fora de intervalo" << std::endl;
  }

  return 0;
}

/*#include <iostream>
#include <cmath>

int main()
{
  double A, B, C;
  double delta, R1, R2;

  std::cin >> A >> B >> C;

  delta = B * B - 4 * A * C;

  if (A == 0 || delta < 0)
  {
    std::cout << "Impossivel calcular" << std::endl;
  }
  else
  {

    R1 = (-B + std::sqrt(delta)) / (2 * A);
    R2 = (-B - std::sqrt(delta)) / (2 * A);

    std::cout.precision(5);
    std::cout << "R1 = " << std::fixed << R1 << std::endl;
    std::cout << "R2 = " << std::fixed << R2 << std::endl;
  }

  return 0;
}

/*

int main()
{

  int a, b, c, d;

  std::cin >> a >> b >> c >> d;

  if (b > c && d > a && (c + d) > (b + a) && c > 0 && d > 0 && a % 2 == 0)
  {
    std::cout << "Valores aceitos" << std::endl;
  }
  else
  {
    std::cout << "Valores nao aceitos" << std::endl;
  }

  return 0;
}

/*
#include <iostream>
#include <iomanip>

int main() {
    double value;
    std::cin >> value;

    // Convert the value to cents
    int totalCents = static_cast<int>(value * 100);

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    std::cout << "NOTAS:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        int quantity = totalCents / notas[i];
        std::cout << quantity << " nota(s) de R$ " << std::fixed << std::setprecision(2) << notas[i] / 100.0 << std::endl;
        totalCents %= notas[i];
    }

    std::cout << "MOEDAS:" << std::endl;
    for (int i = 0; i < 6; ++i) {
        int quantity = totalCents / moedas[i];
        std::cout << quantity << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << moedas[i] / 100.0 << std::endl;
        totalCents %= moedas[i];
    }

    return 0;
}

/*
#include <iostream>

int main()
{
  int i;
  int ano, mes, dia;

  std::cin >> i;

  ano = i / 365;
  i %= 365;
  mes = i / 30;
  dia = i % 30;

  std::cout << ano << " ano(s)" << std::endl
            << mes << " mes(es)" << std::endl
            << dia << " dia(s)" << std::endl;

  return 0;
}

/*

#include <iostream>

int main()
{
  int a;
  int minutos, segundos, horas;
  std::cin >> a;

  horas = a / 3600;
  a %= 3600;
  minutos = a / 60;
  segundos = a % 60;

  std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
  return 0;
}

/*

#include <iostream>

int main() {
    int value;
    std::cin >> value;
    std::cout << value << std::endl;


    int banknotes[] = {100, 50, 20, 10, 5, 2, 1};

    for (int i = 0; i < 7; ++i) {
        int quantity = value / banknotes[i];
        std::cout << quantity << " nota(s) de R$ " << banknotes[i] << ",00" << std::endl;
        value %= banknotes[i];
    }

    return 0;
}


/*
int main()
{
  double a, b;

  std::cin >> a >> b;

  double r = (a * b) / 12;

  std::cout << std::fixed << std::setprecision(3) << r << std::endl;

  return 0;
}

/*

int main()
{
  int a;

  std::cin >> a;

  int r = a * 2;

  std::cout << r << " minutos" << std::endl;

  return 0;
}



/*

int main()
{
  double x1, y1, x2, y2;

  std::cin >> x1 >> y1;
  std::cin >> x2 >> y2;

  double r = sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));

  std::cout << std::fixed << std::setprecision(4) << r << std::endl;
  return 0;
}


 /*
int main()
{
  double a;
  double b;

  std::cin >> a >> b;

  double r = a / b;

  std::cout << std::fixed << std::setprecision(3) << r << " km/l" << std::endl;
  return 0;
}

/*

int main()
{
  int a, b, c;

  std::cin >> a >> b >> c;

  int r = a;
  if(b > r) {
    r = b;
  }
  if(c > r) {
    r = c;
  }

  std::cout << r << " eh o maior" << std::endl;

  return 0;
}



/*
int main()
{
  double A, B, C;
  const double pi = 3.14159;

  std::cin >> A >> B >> C;

  double area_tri = (A * C) / 2;
  double area_circ = pi * std::pow(C, 2);
  double area_trap = ((A + B) * C) / 2;
  double area_quad = B * B;
  double area_ret = A * B;

  std::cout << "TRIANGULO: " << std::fixed << std::setprecision(3) << area_tri << std::endl;
  std::cout << "CIRCULO: " << std::fixed << std::setprecision(3) << area_circ << std::endl;
  std::cout << "TRAPEZIO: " << std::fixed << std::setprecision(3) << area_trap << std::endl;
  std::cout << "QUADRADO: " << std::fixed << std::setprecision(3) << area_quad << std::endl;
  std::cout << "RETANGULO: " << std::fixed << std::setprecision(3) << area_ret << std::endl;

  return 0;
}

/*


// beecrowd | 1011
// Sphere

int main () {


  double pi = 3.14159;
  int  a;

  std::cin >> a;

  double r = (4.0/3.0) * pi * a * a * a;

  std::cout << "VOLUME = " << std::fixed << std::setprecision(3) << r << std::endl;



  return 0;
}


/*
int main() {
    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2;

    std::cin >> codigo1 >> quantidade1 >> preco1;

    std::cin >> codigo2 >> quantidade2 >> preco2;
    double valorTotal = quantidade1 * preco1 + quantidade2 * preco2;

    std::cout << "VALOR A PAGAR: R$ " << std::fixed << std::setprecision(2) << valorTotal << std::endl;

    return 0;
}



/*

int main() {
    std::string nome;
    double salarioFixo, totalVendas;

    std::cin >> nome >> salarioFixo >> totalVendas;

    double salarioTotal = salarioFixo + (totalVendas * 0.15);

    std::cout << "TOTAL = R$ " << std::fixed << std::setprecision(2) << salarioTotal << std::endl;

    return 0;
}

/*
int main () {


  int a, b;
  float c;

  std::cin >> a >> b >> c;

  float r = b * c;


  std::cout << "NUMBER = " << a << std::endl;

  std::cout << "SALARY = U$ " << std::fixed << std::setprecision(2) << r << std::endl;

  return 0;
}


/*
int main () {

  int A, B, C, D;
  std::cin >> A >> B >> C >> D;

  r = (A * B - C * D);

  std::cout << "DIFERENCA = " << r;
  return 0;
}


/*
int main() {
    double A, B, C;

    std::cin >> A >> B >> C;

    double media = (A * 2 + B * 3 + C * 5) / 10;

    std::cout << "MEDIA = " << std::fixed << std::setprecision(1) << media << std::endl;

    return 0;
}


/* int main() {
   float A, B;


  std::cin >> A;
  std::cin >> B;

  float R = (A + B)/2;

  std::cout << "MEDIA = " << R;

  return 0;

}
*/