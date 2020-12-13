#ifndef PUSTAKA_H_INCLUDED
#define PUSTAKA_H_INCLUDED

typedef char string[256];

struct data_transaksi{
    string nama_produk;
    int kuantitas;
    int kode_barang;
    long harga;
    long sub_biaya;
};

struct data_penjualan{
    string tanggal;
    string no_transaksi;
    string nama_pegawai;
    string nama_pelanggan;
    struct data_transaksi DT[10];
    long biaya_total;
};

//Prototype
void daftar_barang();

#endif // PUSTAKA_H_INCLUDED
