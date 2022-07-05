<h1 align="center">Autoplay Circuit</h1>

<li>Bu devre ses sistemlerine entegre edilerek basit anahtarlar sayesinde belirli koşul oluştuğunda ses dosyası çalan bir sistem tasarlanmak için kurulmuştur.</li>
<li>Kullanılan 16F628A mcu içinde A7 pinine bağlanan bir yada daha fazla anahtar ile sinyal geldiğinde çıkışı sıfıra çeken devre.</li>
<li>Denetliyicinin pinlerinden B1 start/stop, B2 next tuşlarını tanımlar, ses sistemlerinde bu iki input çoğunlukla(test edilmeli) sıfıra çekilince işlevini yapar, burada anahtar
kapanıp devresini tamamladıgında next tuşuna, anahtar açılıp devre kesildiğinde stop tuşuna basacak sistem tasarlanmıştır.</li>
<li>Bu sistem bt1303 ses sistemine doğrudan entegre edilerek geniş içki dolaplarıyla birlikte kullanılmıştır. Kaynak kodda basit bir kaç düzenlemeyle 
her ses sistemine uygulanabilir.</li>

![s0](https://user-images.githubusercontent.com/96810885/177360230-f3becee6-3310-4263-8621-c9f82dc3e432.png)
![x0](https://user-images.githubusercontent.com/96810885/177360242-e2e76341-49f9-4e77-8e57-bef219f8dbcf.png)
