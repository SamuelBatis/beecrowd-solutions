





/*use std::io;

fn main() {
    // Declaração das variáveis
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Falha ao ler a linha");

    // Lê os três números de ponto flutuante da entrada
    let mut nums = input.trim().split_whitespace()
        .map(|x| x.parse::<f64>().expect("Erro na conversão para número"))
        .collect::<Vec<f64>>();

    // Atribui valores às variáveis
    let A = nums[0];
    let B = nums[1];
    let C = nums[2];

    // Calcula o discriminante
    let delta = B.powi(2) - 4.0 * A * C;

    // Verifica se é possível calcular as raízes
    if A.abs() < 1e-9 || delta < 0.0 {
        println!("Impossivel calcular");
    } else {
        // Calcula as raízes usando a fórmula de Bhaskara
        let R1 = (-B + delta.sqrt()) / (2.0 * A);
        let R2 = (-B - delta.sqrt()) / (2.0 * A);

        // Imprime as raízes com 5 casas decimais
        println!("R1 = {:.5}", R1);
        println!("R2 = {:.5}", R2);
    }
}



/*use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Falha ao ler a linha");
    let values: Vec<i32> = input.split_whitespace()
                                .map(|s| s.parse().expect("Erro na conversão para número"))
                                .collect();

    let A = values[0];
    let B = values[1];
    let C = values[2];
    let D = values[3];

    if B > C && D > A && C + D > A + B && C > 0 && D > 0 && A % 2 == 0 {
        println!("Valores aceitos");
    } else {
        println!("Valores nao aceitos");
    }
}