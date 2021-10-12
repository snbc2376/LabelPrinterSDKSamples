int r = SetLabelSize(printerHandle, 640, 800);


PrintRectangle(printerHandle, 0, 0, 640, 800, 2);

PrintRectangle(printerHandle, 18, 619, 118, 165, 4);
PrintText(printerHandle, 44, 650, "5", "F", PRINT_ROTATED_0, 100, 200, 0);
PrintImageFile(printerHandle, 185, 720, "../resource/ChinaPostLogo.bmp");
PrintLine(printerHandle, 170, 710, 420, 710, 2);
PrintImageFile(printerHandle, 177, 620, "../resource/USPost.bmp");

PrintRectangle(printerHandle, 445, 635, 180, 138, 4);
PrintText(printerHandle, 452, 728, "2", "Airmail", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 452, 698, "2", "Postage", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 17, 590, "2", "From:", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 512, 590, "3", "2", PRINT_ROTATED_0, 20, 40, 0);

PrintLine(printerHandle, 0, 560, 640, 560, 2);
PrintLine(printerHandle, 305, 560, 305, 373, 2);
PrintLine(printerHandle, 0, 372, 640, 372, 2);
PrintLine(printerHandle, 94, 373, 94, 200, 2);
PrintLine(printerHandle, 0, 200, 640, 200, 2);

PrintText(printerHandle, 12, 530, "2", "Andrew 0631-5675888", PRINT_ROTATED_0, 10, 20, 0);
PrintText(printerHandle, 12, 500, "2", "Shandong Newbeiyang", PRINT_ROTATED_0, 10, 20, 0);
PrintText(printerHandle, 12, 470, "2", "NO.126 Kunlun Rd Huancui", PRINT_ROTATED_0, 10, 20, 0);
PrintText(printerHandle, 12, 440, "2", "District", PRINT_ROTATED_0, 10, 20, 0);
PrintText(printerHandle, 12, 410, "2", "Weihai Shandong China", PRINT_ROTATED_0, 10, 20, 0);

PrintBarcode1D(printerHandle, 320, 408, BARCODE_TYPE_CODE128, PRINT_ROTATED_0, "264205", 80, 2, 3, 6);

PrintText(printerHandle, 20, 278, "3", "To:", PRINT_ROTATED_0, 20, 40, 0);
PrintText(printerHandle, 120, 336, "2", "QIAUBUYER JIM CARRY", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 120, 306, "2", "2125 HAMILTON AVE", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 120, 276, "2", "SAN JOSE CA", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 120, 246, "2", "UNITED STATES OF AMERICA", PRINT_ROTATED_0, 15, 20, 0);
PrintText(printerHandle, 120, 216, "2", "95125-5905", PRINT_ROTATED_0, 15, 20, 0);

PrintBarcode1D(printerHandle, 60, 40, BARCODE_TYPE_CODE128, PRINT_ROTATED_0, "LK002325888CN", 80, 2, 3, 6);
r = PrintLabel(printerHandle, 1, 1);
