int r = SetLabelSize(printerHandle, 640, 1000);

PrintRectangle(printerHandle, 0, 0, 640, 1000, 2);

PrintImageFile(printerHandle, 10, 20, "../../resource/ChinaPostLogo.bmp");

PrintBarcodeQR(printerHandle, 447, 20, PRINT_ROTATED_0, "LK002325883CN", 13, QR_LEVEL_H, 4, QR_MODE_ENHANCED);

PrintText(printerHandle, 10, 100, "1", "IMPORTANT", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 10, 130, "1", "The item/parcel may be", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 10, 160, "1", "opened officially.", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 10, 190, "1", "Please print in English.", PRINT_ROTATED_0, 7, 11, 0);

PrintRectangle(printerHandle, 270, 126, 72, 72, 2);
PrintText(printerHandle, 286, 170, "3", "2", PRINT_ROTATED_0, 20, 30, 0);

PrintText(printerHandle, 8, 240, "2", "FROM: HANK HUANG", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 8, 265, "2", "4/F DONG HAI COMMERCIAL", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 8, 290, "2", "BUILDING 618 YAN AN ROAD", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 8, 315, "2", "SHANGHAI", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 8, 340, "2", "CHINA 190893", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 8, 365, "2", "PHONE:13908473278", PRINT_ROTATED_0, 12, 20, 0);

PrintLine(printerHandle, 327, 202, 640, 202, 2);
PrintLine(printerHandle, 327, 202, 327, 474, 2);
PrintLine(printerHandle, 0, 397, 327, 397, 2);
PrintLine(printerHandle, 0, 437, 327, 1000-563, 2);
PrintLine(printerHandle, 0, 1000-524, 640, 1000-524, 2);
PrintLine(printerHandle, 0, 1000-479, 640, 1000-479, 2);
PrintLine(printerHandle, 0, 781, 640, 1000-219, 2);
PrintLine(printerHandle, 0, 809, 640, 1000-191, 2);
PrintLine(printerHandle, 36, 1000-524, 36, 1000-191, 2);
PrintLine(printerHandle, 84, 1000-524, 84, 1000-191, 2);
PrintLine(printerHandle, 346, 1000-524, 346, 1000-191, 2);
PrintLine(printerHandle, 408, 1000-524, 408, 1000-191, 2);
PrintLine(printerHandle, 501, 1000-524, 501, 1000-191, 2);

PrintText(printerHandle, 340, 1000-760, "2", "SHIP TO: QIAUBUYER ", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-735, "2", "JIM CARRY", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-710, "2", "2125 HAMILTON AVE", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-685, "2", "SAN JOSE CA", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-660, "2", "UNITED STATES OF AMERICA", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-635, "2", "95125-5905", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 340, 1000-610, "2", "PHONE:4083672341", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 8, 420, "2", "Fees(US $):", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 8, 460, "2", "Certificate No.", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 8, 500, "2", "No", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 40, 500, "2", "Qty", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 95, 500, "2", "Description of Contents", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 358, 500, "2", "Kg", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 416, 500, "2", "Val(US $)", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 516, 500, "2", "Goods Origin", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 8, 1000-450, "2", "1", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 40, 1000-450, "2", "2", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 102, 1000-450, "2", "Pages", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 350, 1000-450, "2", "0.200", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 409, 1000-450, "2", "10.00", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 516, 1000-450, "2", "China", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 40, 792, "2", "2", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 95, 792, "2", "Total Gross Weight (Kg):", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 350, 792, "2", "0.400", PRINT_ROTATED_0, 12, 20, 0);
PrintText(printerHandle, 420, 792, "2", "20.00", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 4, 1000-180, "A", "I certify the particulars given in this customs declaration ", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 4, 1000-165, "A", "are correct. This item does not contain any dangerous ", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 4, 1000-150, "A", "article, or articles prohibited by legislation or by postal or ", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 4, 1000-135, "A", "customs regulations. I have met all applicable export ", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 4, 1000-120, "A", "filing requirements underthe Foreign Trade ", PRINT_ROTATED_0, 7, 11, 0);
PrintText(printerHandle, 4, 1000-105, "A", "Regulations.", PRINT_ROTATED_0, 7, 11, 0);

PrintText(printerHandle, 4, 1000-80, "2", "Sender's Signature & Date Signed:", PRINT_ROTATED_0, 12, 20, 0);

PrintText(printerHandle, 530, 1000-40, "3", "CN22", PRINT_ROTATED_0, 20, 30, 0);
r = PrintLabel(printerHandle, 1, 1);
