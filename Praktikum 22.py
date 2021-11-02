import datetime

nama_depan = 'Wahid'
nama_belakang = 'Hasyim'

nama_lengkap = nama_depan + ' ' + nama_belakang
tgllahir = datetime.datetime(1990, 5, 10)
usia = 31
alamat = 'Jakarta Selatan'
kata_mutiara = "Don't judge a book by it's cover"

print(nama_lengkap, tgllahir, ', berusia ', usia, 'tahun dari', alamat, ', kata mutiara:', kata_mutiara)

print('\nTipe dari nama_lengkap:', type(nama_lengkap))
print('Tipe dari tanggal lahir:', type(tgllahir))
print('Tipe dari usia:', type(usia))
print('Tipe dari alamat:', type(alamat))
print('Tipe dari kata_mutiara:', type(kata_mutiara))