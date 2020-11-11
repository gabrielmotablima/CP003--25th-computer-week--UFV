def main():
	n = str(input()).strip().upper().replace(' ', '')
	i = n[::-1]
	verifica = 0
	cont = 0
	for j in range(len(n)):
		if(n[j] == i[j]):
			cont += 1			
			
	if(cont < (len(n) - 2)):
		print('NO')
	else:
		print('YES')
if __name__ == "__main__":
	main()

