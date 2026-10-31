detik1 = int(input(""))

hari = detik1 // 86400
jam = (detik1 % 86400) // 3600

menit = (detik1 % 3600) // 60
detik2 = (detik1 % 60)

if hari > 0 :
    print(f"{hari} hari {jam:02}:{menit:02}:{detik2:02}")
else :
    print(f"{jam:02}:{menit:02}:{detik2:02}")