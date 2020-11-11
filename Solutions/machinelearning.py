def main():
    l = []

    while True:
        try:
            x = input().split()
            l.append(x)
        except EOFError:
            break

    l = ' '.join(l)
    l = l.lower()

    r = l.find("capivara")
    s = l.find("capivaro")
    t = l.find("capivarista")
    u = l.find("capivaristo")

    if (r != -1 or s != -1 or t != -1 or u != -1):
        print("YES")
    else:
        print("NO")

if __name__ == "__main__":
    main()
