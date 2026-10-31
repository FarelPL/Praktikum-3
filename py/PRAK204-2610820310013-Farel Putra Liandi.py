num = int(input(""))

if num == 0:
    print("Nol")
elif num > 0 and num < 10:
    print("Satuan")
elif num == 10:
    print("Puluhan")
elif num > 10 and num < 20:
    print("Belasan")
elif num >= 20 and num < 100:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")