import qrcode
# x = input("Enter Amount - ")
a = "upi://pay?pa=yugantkesharwani345-2@oksbi&am="
b = qrcode.make(a)
b.save("myqr.jpg")
print("QR Code Created")