
a = [4.00, 4.50, 5.00, 2.00, 1.50]
b, c = map(int, input().split())

resp = a[b-1] * c

print("Total: R$ {:.2f}".format(resp))


# while True:
    
#     n = int(input())
    
    
#     if n == 0:
#         break
    
    
#     gifts = list(map(int, input().split()))
    
    
#     gifts.sort()
    
    
#     most_expensive = 0
#     cheapest = float('inf')  # Inicializar com um valor muito grande
    
    
#     for i in range(n):
#         total_price = gifts[i] + gifts[2 * n - i - 1]
#         most_expensive = max(most_expensive, total_price)
#         cheapest = min(cheapest, total_price)
    
    
#     print(most_expensive, cheapest)




# n = float(input())


# if 0 <= n <= 25:
#     print("Intervalo [0,25]")
# elif 25 < n <= 50:
#     print("Intervalo (25,50]")
# elif 50 < n <= 75:
#     print("Intervalo (50,75]")
# elif 75 < n <= 100:
#     print("Intervalo (75,100]")
# else:
#     print("Fora de intervalo")





# import math

# A, B, C = [float(x) for x in input().split()]
# delta = B ** 2 - 4 * A * C


# if A == 0 or delta < 0:
#     print("Impossivel calcular")
# else:
    
#     R1 = (-B + math.sqrt(delta)) / (2 * A)
#     R2 = (-B - math.sqrt(delta)) / (2 * A)

    
#     print("R1 = {:.5f}".format(R1))
#     print("R2 = {:.5f}".format(R2))


# a, b, c, d = map(int, input().split())

# if b > c and d > a and (a+b) < (c+d) and c > 0 and d > 0 and a%2 == 0:
#   print("Valores aceitos")
# else:
#   print("Valores nao aceitos")
