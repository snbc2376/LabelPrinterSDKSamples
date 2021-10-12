int r = printer.SetLabelSize(640, 800);

printer.PrintRectangle(0, 0, 640, 800, 2);
printer.PrintRectangle(18, 619, 118, 165, 4);
printer.PrintText(44, 650, "5", "F", 0, 100, 200, 0);
printer.PrintImageFile(185, 720, "../resource/ChinaPostLogo.bmp");
printer.PrintLine(170, 710, 420, 710, 2);
printer.PrintImageFile(177, 620, "../resource/USPost.bmp");

printer.PrintRectangle(445, 635, 180, 138, 4);
printer.PrintText(452, 728, "2", "Airmail", 0, 15, 20, 0);
printer.PrintText(452, 698, "2", "Postage", 0, 15, 20, 0);
printer.PrintText(17, 590, "2", "From:", 0, 15, 20, 0);
printer.PrintText(512, 590, "3", "2", 0, 20, 40, 0);

printer.PrintLine(0, 560, 640, 560, 2);
printer.PrintLine(305, 560, 305, 373, 2);
printer.PrintLine(0, 372, 640, 372, 2);
printer.PrintLine(94, 373, 94, 200, 2);
printer.PrintLine(0, 200, 640, 200, 2);

printer.PrintText(12, 530, "2", "Andrew 0631-5675888", 0, 10, 20, 0);
printer.PrintText(12, 500, "2", "Shandong Newbeiyang", 0, 10, 20, 0);
printer.PrintText(12, 470, "2", "NO.126 Kunlun Rd Huancui", 0, 10, 20, 0);
printer.PrintText(12, 440, "2", "District", 0, 10, 20, 0);
printer.PrintText(12, 410, "2", "Weihai Shandong China", 0, 10, 20, 0);

printer.PrintBarcode1D(320, 408, 1, 0, "264205", 80, 2, 3, 6);

printer.PrintText(20, 278, "3", "To:", 0, 20, 40, 0);
printer.PrintText(120, 336, "2", "QIAUBUYER JIM CARRY", 0, 15, 20, 0);
printer.PrintText(120, 306, "2", "2125 HAMILTON AVE", 0, 15, 20, 0);
printer.PrintText(120, 276, "2", "SAN JOSE CA", 0, 15, 20, 0);
printer.PrintText(120, 246, "2", "UNITED STATES OF AMERICA", 0, 15, 20, 0);
printer.PrintText(120, 216, "2", "95125-5905", 0, 15, 20, 0);

printer.PrintBarcode1D(60, 40, 1, 0, "LK002325888CN", 80, 2, 3, 6);
r = printer.PrintLabel(1, 1);
