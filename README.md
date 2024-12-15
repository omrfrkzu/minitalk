<p align="center">
  <img src="https://github.com/jotavare/jotavare/blob/main/42/banners/piscine_and_common_core/github_piscine_and_common_core_banner_minitalk.png">
</p>

<p align="center">
	<a href='https://www.linkedin.com/in/joaoptoliveira' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
	<a href='https://profile.intra.42.fr/users/jotavare' target="_blank"><img alt='42' src='https://img.shields.io/badge/Porto-100000?style=flat-square&logo=42&logoColor=white&labelColor=000000&color=000000'/></a>
</p>

<p align="center">
	<a href="#hakkinda">Hakkında</a> •
	<a href="#nasıl-kullanılır">Nasıl Kullanılır</a> •
	<a href="#zorunlu">Zorunlu</a> •
	<a href="#bonus">Bonus</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#katkida-bulunma">Katkıda Bulunma</a> •
	<a href="#lisans">Lisans</a>
</p>

## HAKKINDA
Bu, UNIX sinyallerini kullanarak iletişim kuran bir sunucu/istemci sistemidir. Sunucu, PID'sini gösterir ve gelen sinyalleri karakterlere dönüştürerek görüntülerken; istemci mesajları şifreler ve sunucunun PID'sine **SIGUSR1** veya **SIGUSR2** sinyalleri gönderir.

- [Konu](https://github.com/jotavare/minitalk/blob/master/subject/en_subject_minitalk.pdf) `PDF`
- [Referanslar](https://github.com/jotavare/42-resources#02-minitalk) `GitHub`

## NASIL KULLANILIR
#### 1º - Depoyu klonlayın
```bash
git clone https://github.com/jotavare/minitalk
```

#### 2º - Proje klasörüne girin ve `make` komutunu çalıştırın
```bash
cd minitalk/minitalk
make
```

#### 3º - Sunucuyu çalıştırın ve PID'sini kopyalayın
```bash
./server
./server_bonus
```

#### 4º - Başka bir terminal açın, client veya client_bonus'u çalıştırın, pıd'yi yapıştırın ve bir mesaj yazın
```bash
./client [SERVER PID] [MESSAGE]
./client_bonus [SERVER PID] [MESSAGE] [EMOTE]
```

#### MAKEFILE KURALLARI

`make` - Minitalk **mandatory** dosyalarını derler.

`make bonus` - Minitalk **bonus** dosyalarını derler.

`make all` - **mandatory** + **bonus** dosyalarını derler.

`make clean` - Tüm .o (nesne dosyalarını) siler.

`make fclean` - Tüm .o (nesne dosyalarını) ve .a (çalıştırılabilir) dosyalarını siler.

`make re` - `fclean` + `all` kurallarını uygular.

## ZORUNLU (MANDATORY)
- [x] Server ve client çalıştırılabilir dosyalarını üretin.
- [x] Client, parametre olarak geçen bir stringi, işlem kimliği (PID) ile belirtilen servera iletmeli ve görüntülemelidir.
- [x] Sadece `SIGUSR1` ve `SIGUSR2` sinyallerini kullanın.

## BONUS
- [x] Alım onay sistemi ekleyin.
- [x] Unicode karakterleri destekleyin.

## NORMINETTE
> 42 Okulu'nda neredeyse her projenin, okulun kodlama standartı olan Norm'a uygun olarak yazılması beklenir.

```
- `for`, `do...while`, `switch`, `case`, `goto`, üçlü (ternary) operatörler veya değişken uzunluktaki diziler kullanılamaz;
- Her fonksiyon maksimum 25 satır olmalıdır (fonksiyonun süslü parantezleri hariç);
- Her satır, yorumlar dahil, en fazla 80 karakter genişliğinde olmalıdır;
- Bir fonksiyon en fazla 4 isimlendirilmiş parametre alabilir;
- Aynı satırda hem atama hem de tanımlama yapılamaz (statik olanlar hariç);
- Bir fonksiyonda 5'ten fazla değişken tanımlanamaz;
- ...
```


* [42 Normları](https://github.com/42School/norminette/blob/master/pdf/en.norm.pdf) - 42 kod normları hakkında bilgi. `PDF`
* [Norminette](https://github.com/42School/norminette) - Kod normuna uyumu kontrol eden araç, 42 tarafından yapılmıştır. `GitHub`
* [42 Header](https://github.com/42Paris/42header) - Vim için 42 başlık eklentisi. `GitHub`

## KATKIDA BULUNMA

Eğer herhangi bir sorun bulursanız veya geliştirme öneriniz varsa, bu depoyu forklayıp bir issue açabilir ya da bir pull request gönderebilirsiniz.

## LİSANS

Bu proje MIT Lisansı altında mevcuttur. Daha fazla bilgi için lütfen [LICENSE](LICENSE) dosyasına bakın.
