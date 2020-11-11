def main():
    a = str(input())

    x = { 'V':1 , 'O':2, 'I':3, 'P':4}
    if( x[a[0]] < x[a[2]]):
        print(abs(x[a[2]]-x[a[0]]))
    else:
        print(abs(abs(x[a[0]]-x[a[2]])-4))

if __name__ == "__main__":
    main()