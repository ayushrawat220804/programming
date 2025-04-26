print("factoriarl progamme")

def fact(n):
    if (n == 0 or n == 1):
        return 1
    else :
# This is a comment
        return n*fact(n-1)

print(fact(50))