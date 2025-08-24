km = float(0)
hm = float(0)
dam = float(0)
dm = float(0)
cm = float(0)
mm = float(0)

m = float(input('Digite uma distância em metros: '))
print('A medida de {}m correspondem a'.format(m))

km = m / 1000
hm = m / 100
dam = m / 10
dm = m * 10
cm = m * 100
mm = m * 1000

print('{}km\n{}hm\n{}dam\n{}dm\n{}cm\n{:.0f}mm'.format(km, hm, dam, dm, cm, mm))