

int main()
{

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