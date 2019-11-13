-Chương trình được code trên visual studio 2017 , một số bản visual sẽ không chạy được file thực thi của em(em đã thử trên máy trường bị lỗi(visual 2013) , kết quả phải debug lại)


- Sau đây là file thực thi(file game) và mã nguồn của chương trình game nhóm em


-Khi chơi với superman sẽ có hiện tượng , em gọi nó là vỡ pixel , bởi vì em dùng đa luồng , khi gọi hàm gotoXY thì 2 luồng không phân biệt sẽ gọi lẫn lộn nhau , em có dùng
 thư viện mutex để bảo vệ tài nguyên , tránh trường hợp nhiều thread truy cập và thay đổi tài nguyên nhưng chỉ hiệu quả cho đến khi em chia module thì đã giảm hiệu suất 
khoảng 30-40% , em sẽ phát triển trong phiên bản 2.0
