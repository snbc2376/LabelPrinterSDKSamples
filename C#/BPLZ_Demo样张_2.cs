int r = printer.SetLabelSize(640, 1000);

printer.PrintRectangle(0, 0, 640, 1000, 2);
printer.PrintImageFile(10, 20, "../resource/ChinaPostLogo.bmp");

printer.PrintBarcodeQR(447, 20, 0, "LK002325883CN", 'H', 4, 2);

printer.PrintText(10, 100, "1", "IMPORTANT", 0, 7, 11, 0);
printer.PrintText(10, 130, "1", "The item/parcel may be", 0, 7, 11, 0);
printer.PrintText(10, 160, "1", "opened officially.", 0, 7, 11, 0);
printer.PrintText(10, 190, "1", "Please print in English.", 0, 7, 11, 0);

printer.PrintRectangle(270, 126, 72, 72, 2);
printer.PrintText(286, 170, "3", "2", 0, 20, 30, 0);

printer.PrintText(8, 240, "2", "FROM: HANK HUANG", 0, 12, 20, 0);
printer.PrintText(8, 265, "2", "4/F DONG HAI COMMERCIAL", 0, 12, 20, 0);
printer.PrintText(8, 290, "2", "BUILDING 618 YAN AN ROAD", 0, 12, 20, 0);
printer.PrintText(8, 315, "2", "SHANGHAI", 0, 12, 20, 0);
printer.PrintText(8, 340, "2", "CHINA 190893", 0, 12, 20, 0);
printer.PrintText(8, 365, "2", "PHONE:13908473278", 0, 12, 20, 0);

printer.PrintLine(327, 202, 640, 202, 2);
printer.PrintLine(327, 202, 327, 474, 2);
printer.PrintLine(0, 397, 327, 397, 2);
printer.PrintLine(0, 437, 327, 1000 - 563, 2);
printer.PrintLine(0, 1000 - 524, 640, 1000 - 524, 2);
printer.PrintLine(0, 1000 - 479, 640, 1000 - 479, 2);
printer.PrintLine(0, 781, 640, 1000 - 219, 2);
printer.PrintLine(0, 809, 640, 1000 - 191, 2);
printer.PrintLine(36, 1000 - 524, 36, 1000 - 191, 2);
printer.PrintLine(84, 1000 - 524, 84, 1000 - 191, 2);
printer.PrintLine(346, 1000 - 524, 346, 1000 - 191, 2);
printer.PrintLine(408, 1000 - 524, 408, 1000 - 191, 2);
printer.PrintLine(501, 1000 - 524, 501, 1000 - 191, 2);

printer.PrintText(340, 1000 - 760, "2", "SHIP TO: QIAUBUYER ", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 735, "2", "JIM CARRY", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 710, "2", "2125 HAMILTON AVE", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 685, "2", "SAN JOSE CA", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 660, "2", "UNITED STATES OF AMERICA", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 635, "2", "95125-5905", 0, 12, 20, 0);
printer.PrintText(340, 1000 - 610, "2", "PHONE:4083672341", 0, 12, 20, 0);

printer.PrintText(8, 420, "2", "Fees(US $):", 0, 12, 20, 0);

printer.PrintText(8, 460, "2", "Certificate No.", 0, 12, 20, 0);

printer.PrintText(8, 500, "2", "No", 0, 12, 20, 0);
printer.PrintText(40, 500, "2", "Qty", 0, 12, 20, 0);
printer.PrintText(95, 500, "2", "Description of Contents", 0, 12, 20, 0);
printer.PrintText(358, 500, "2", "Kg", 0, 12, 20, 0);
printer.PrintText(416, 500, "2", "Val(US $)", 0, 12, 20, 0);
printer.PrintText(516, 500, "2", "Goods Origin", 0, 12, 20, 0);

printer.PrintText(8, 1000 - 450, "2", "1", 0, 12, 20, 0);
printer.PrintText(40, 1000 - 450, "2", "2", 0, 12, 20, 0);
printer.PrintText(102, 1000 - 450, "2", "Pages", 0, 12, 20, 0);
printer.PrintText(350, 1000 - 450, "2", "0.200", 0, 12, 20, 0);
printer.PrintText(409, 1000 - 450, "2", "10.00", 0, 12, 20, 0);
printer.PrintText(516, 1000 - 450, "2", "China", 0, 12, 20, 0);

printer.PrintText(40, 792, "2", "2", 0, 12, 20, 0);
printer.PrintText(95, 792, "2", "Total Gross Weight (Kg):", 0, 12, 20, 0);
printer.PrintText(350, 792, "2", "0.400", 0, 12, 20, 0);
printer.PrintText(420, 792, "2", "20.00", 0, 12, 20, 0);

printer.PrintText(4, 1000 - 180, "A", "I certify the particulars given in this customs declaration ", 0, 7, 11, 0);
printer.PrintText(4, 1000 - 165, "A", "are correct. This item does not contain any dangerous ", 0, 7, 11, 0);
printer.PrintText(4, 1000 - 150, "A", "article, or articles prohibited by legislation or by postal or ", 0, 7, 11, 0);
printer.PrintText(4, 1000 - 135, "A", "customs regulations. I have met all applicable export ", 0, 7, 11, 0);
printer.PrintText(4, 1000 - 120, "A", "filing requirements underthe Foreign Trade ", 0, 7, 11, 0);
printer.PrintText(4, 1000 - 105, "A", "Regulations.", 0, 7, 11, 0);

printer.PrintText(4, 1000 - 80, "2", "Sender's Signature & Date Signed:", 0, 12, 20, 0);

printer.PrintText(530, 1000 - 40, "3", "CN22", 0, 20, 30, 0);
r = printer.PrintLabel(1, 1);
