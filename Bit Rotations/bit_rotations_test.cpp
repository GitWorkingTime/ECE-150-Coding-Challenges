/*
 * @Author: GitWorkingTime
 * 
 * This file is meant to test the functions made in bit_rotations.cpp
 */
#include <iostream>
#include <cassert>
#include <cstring>
#include "bit_rotations.cpp"

int main();
void testDisplayBinary();


int main() {
    testDisplayBinary();
    std::cout << "All displayBinary tests passed!" << std::endl;
    return 0;
}

void testDisplayBinary() {
    // 100 AI Generated test cases
    unsigned int test1{ 0x00000000U };
    char expected_1[33] = "00000000000000000000000000000000";
    char* output1 = displayBinary(test1);
    for (std::size_t i{}; i < 32; i++) assert(output1[i] == expected_1[i]);
    delete output1; output1 = nullptr;

    unsigned int test2{ 0x00000001U };
    char expected_2[33] = "00000000000000000000000000000001";
    char* output2 = displayBinary(test2);
    for (std::size_t i{}; i < 32; i++) assert(output2[i] == expected_2[i]);
    delete output2; output2 = nullptr;

    unsigned int test3{ 0x00000002U };
    char expected_3[33] = "00000000000000000000000000000010";
    char* output3 = displayBinary(test3);
    for (std::size_t i{}; i < 32; i++) assert(output3[i] == expected_3[i]);
    delete output3; output3 = nullptr;

    unsigned int test4{ 0x00000003U };
    char expected_4[33] = "00000000000000000000000000000011";
    char* output4 = displayBinary(test4);
    for (std::size_t i{}; i < 32; i++) assert(output4[i] == expected_4[i]);
    delete output4; output4 = nullptr;

    unsigned int test5{ 0x00000004U };
    char expected_5[33] = "00000000000000000000000000000100";
    char* output5 = displayBinary(test5);
    for (std::size_t i{}; i < 32; i++) assert(output5[i] == expected_5[i]);
    delete output5; output5 = nullptr;

    unsigned int test6{ 0x00000007U };
    char expected_6[33] = "00000000000000000000000000000111";
    char* output6 = displayBinary(test6);
    for (std::size_t i{}; i < 32; i++) assert(output6[i] == expected_6[i]);
    delete output6; output6 = nullptr;

    unsigned int test7{ 0x00000008U };
    char expected_7[33] = "00000000000000000000000000001000";
    char* output7 = displayBinary(test7);
    for (std::size_t i{}; i < 32; i++) assert(output7[i] == expected_7[i]);
    delete output7; output7 = nullptr;

    unsigned int test8{ 0x0000000FU };
    char expected_8[33] = "00000000000000000000000000001111";
    char* output8 = displayBinary(test8);
    for (std::size_t i{}; i < 32; i++) assert(output8[i] == expected_8[i]);
    delete output8; output8 = nullptr;

    unsigned int test9{ 0x00000010U };
    char expected_9[33] = "00000000000000000000000000010000";
    char* output9 = displayBinary(test9);
    for (std::size_t i{}; i < 32; i++) assert(output9[i] == expected_9[i]);
    delete output9; output9 = nullptr;

    unsigned int test10{ 0x0000001FU };
    char expected_10[33] = "00000000000000000000000000011111";
    char* output10 = displayBinary(test10);
    for (std::size_t i{}; i < 32; i++) assert(output10[i] == expected_10[i]);
    delete output10; output10 = nullptr;

    unsigned int test11{ 0x00000020U };
    char expected_11[33] = "00000000000000000000000000100000";
    char* output11 = displayBinary(test11);
    for (std::size_t i{}; i < 32; i++) assert(output11[i] == expected_11[i]);
    delete output11; output11 = nullptr;

    unsigned int test12{ 0x0000003FU };
    char expected_12[33] = "00000000000000000000000000111111";
    char* output12 = displayBinary(test12);
    for (std::size_t i{}; i < 32; i++) assert(output12[i] == expected_12[i]);
    delete output12; output12 = nullptr;

    unsigned int test13{ 0x00000040U };
    char expected_13[33] = "00000000000000000000000001000000";
    char* output13 = displayBinary(test13);
    for (std::size_t i{}; i < 32; i++) assert(output13[i] == expected_13[i]);
    delete output13; output13 = nullptr;

    unsigned int test14{ 0x00000080U };
    char expected_14[33] = "00000000000000000000000010000000";
    char* output14 = displayBinary(test14);
    for (std::size_t i{}; i < 32; i++) assert(output14[i] == expected_14[i]);
    delete output14; output14 = nullptr;

    unsigned int test15{ 0x000000FFU };
    char expected_15[33] = "00000000000000000000000011111111";
    char* output15 = displayBinary(test15);
    for (std::size_t i{}; i < 32; i++) assert(output15[i] == expected_15[i]);
    delete output15; output15 = nullptr;

    unsigned int test16{ 0x00000100U };
    char expected_16[33] = "00000000000000000000000100000000";
    char* output16 = displayBinary(test16);
    for (std::size_t i{}; i < 32; i++) assert(output16[i] == expected_16[i]);
    delete output16; output16 = nullptr;

    unsigned int test17{ 0x00000300U };
    char expected_17[33] = "00000000000000000000001100000000";
    char* output17 = displayBinary(test17);
    for (std::size_t i{}; i < 32; i++) assert(output17[i] == expected_17[i]);
    delete output17; output17 = nullptr;

    unsigned int test18{ 0x000007FFU };
    char expected_18[33] = "00000000000000000000011111111111";
    char* output18 = displayBinary(test18);
    for (std::size_t i{}; i < 32; i++) assert(output18[i] == expected_18[i]);
    delete output18; output18 = nullptr;

    unsigned int test19{ 0x00000FFFU };
    char expected_19[33] = "00000000000000000000111111111111";
    char* output19 = displayBinary(test19);
    for (std::size_t i{}; i < 32; i++) assert(output19[i] == expected_19[i]);
    delete output19; output19 = nullptr;

    unsigned int test20{ 0x0000FFFFU };
    char expected_20[33] = "00000000000000001111111111111111";
    char* output20 = displayBinary(test20);
    for (std::size_t i{}; i < 32; i++) assert(output20[i] == expected_20[i]);
    delete output20; output20 = nullptr;

    unsigned int test21{ 0x00010000U };
    char expected_21[33] = "00000000000000010000000000000000";
    char* output21 = displayBinary(test21);
    for (std::size_t i{}; i < 32; i++) assert(output21[i] == expected_21[i]);
    delete output21; output21 = nullptr;

    unsigned int test22{ 0x00020000U };
    char expected_22[33] = "00000000000000100000000000000000";
    char* output22 = displayBinary(test22);
    for (std::size_t i{}; i < 32; i++) assert(output22[i] == expected_22[i]);
    delete output22; output22 = nullptr;

    unsigned int test23{ 0x00040000U };
    char expected_23[33] = "00000000000001000000000000000000";
    char* output23 = displayBinary(test23);
    for (std::size_t i{}; i < 32; i++) assert(output23[i] == expected_23[i]);
    delete output23; output23 = nullptr;

    unsigned int test24{ 0x00080000U };
    char expected_24[33] = "00000000000010000000000000000000";
    char* output24 = displayBinary(test24);
    for (std::size_t i{}; i < 32; i++) assert(output24[i] == expected_24[i]);
    delete output24; output24 = nullptr;

    unsigned int test25{ 0x00100000U };
    char expected_25[33] = "00000000000100000000000000000000";
    char* output25 = displayBinary(test25);
    for (std::size_t i{}; i < 32; i++) assert(output25[i] == expected_25[i]);
    delete output25; output25 = nullptr;

    unsigned int test26{ 0x00200000U };
    char expected_26[33] = "00000000001000000000000000000000";
    char* output26 = displayBinary(test26);
    for (std::size_t i{}; i < 32; i++) assert(output26[i] == expected_26[i]);
    delete output26; output26 = nullptr;

    unsigned int test27{ 0x00400000U };
    char expected_27[33] = "00000000010000000000000000000000";
    char* output27 = displayBinary(test27);
    for (std::size_t i{}; i < 32; i++) assert(output27[i] == expected_27[i]);
    delete output27; output27 = nullptr;

    unsigned int test28{ 0x00800000U };
    char expected_28[33] = "00000000100000000000000000000000";
    char* output28 = displayBinary(test28);
    for (std::size_t i{}; i < 32; i++) assert(output28[i] == expected_28[i]);
    delete output28; output28 = nullptr;

    unsigned int test29{ 0x01000000U };
    char expected_29[33] = "00000001000000000000000000000000";
    char* output29 = displayBinary(test29);
    for (std::size_t i{}; i < 32; i++) assert(output29[i] == expected_29[i]);
    delete output29; output29 = nullptr;

    unsigned int test30{ 0x02000000U };
    char expected_30[33] = "00000010000000000000000000000000";
    char* output30 = displayBinary(test30);
    for (std::size_t i{}; i < 32; i++) assert(output30[i] == expected_30[i]);
    delete output30; output30 = nullptr;

    unsigned int test31{ 0x0F0F0F0FU };
    char expected_31[33] = "00001111000011110000111100001111";
    char* output31 = displayBinary(test31);
    for (std::size_t i{}; i < 32; i++) assert(output31[i] == expected_31[i]);
    delete output31; output31 = nullptr;

    unsigned int test32{ 0x00FF00FFU };
    char expected_32[33] = "00000000111111110000000011111111";
    char* output32 = displayBinary(test32);
    for (std::size_t i{}; i < 32; i++) assert(output32[i] == expected_32[i]);
    delete output32; output32 = nullptr;

    unsigned int test33{ 0x0FFF0000U };
    char expected_33[33] = "00001111111111110000000000000000";
    char* output33 = displayBinary(test33);
    for (std::size_t i{}; i < 32; i++) assert(output33[i] == expected_33[i]);
    delete output33; output33 = nullptr;

    unsigned int test34{ 0x12345678U };
    char expected_34[33] = "00010010001101000101011001111000";
    char* output34 = displayBinary(test34);
    for (std::size_t i{}; i < 32; i++) assert(output34[i] == expected_34[i]);
    delete output34; output34 = nullptr;

    unsigned int test35{ 0x87654321U };
    char expected_35[33] = "10000111011001010100001100100001";
    char* output35 = displayBinary(test35);
    for (std::size_t i{}; i < 32; i++) assert(output35[i] == expected_35[i]);
    delete output35; output35 = nullptr;

    unsigned int test36{ 0xAAAAAAAAU };
    char expected_36[33] = "10101010101010101010101010101010";
    char* output36 = displayBinary(test36);
    for (std::size_t i{}; i < 32; i++) assert(output36[i] == expected_36[i]);
    delete output36; output36 = nullptr;

    unsigned int test37{ 0x55555555U };
    char expected_37[33] = "01010101010101010101010101010101";
    char* output37 = displayBinary(test37);
    for (std::size_t i{}; i < 32; i++) assert(output37[i] == expected_37[i]);
    delete output37; output37 = nullptr;

    unsigned int test38{ 0xCAFEBABEU };
    char expected_38[33] = "11001010111111101011101010111110";
    char* output38 = displayBinary(test38);
    for (std::size_t i{}; i < 32; i++) assert(output38[i] == expected_38[i]);
    delete output38; output38 = nullptr;

    unsigned int test39{ 0xDEADBEEFU };
    char expected_39[33] = "11011110101011011011111011101111";
    char* output39 = displayBinary(test39);
    for (std::size_t i{}; i < 32; i++) assert(output39[i] == expected_39[i]);
    delete output39; output39 = nullptr;

    unsigned int test40{ 0x13579BDFU };
    char expected_40[33] = "00010011010101111001101111011111";
    char* output40 = displayBinary(test40);
    for (std::size_t i{}; i < 32; i++) assert(output40[i] == expected_40[i]);
    delete output40; output40 = nullptr;

    unsigned int test41{ 0xFFFFFFFFU };
    char expected_41[33] = "11111111111111111111111111111111";
    char* output41 = displayBinary(test41);
    for (std::size_t i{}; i < 32; i++) assert(output41[i] == expected_41[i]);
    delete output41; output41 = nullptr;

    unsigned int test42{ 0x80000000U };
    char expected_42[33] = "10000000000000000000000000000000";
    char* output42 = displayBinary(test42);
    for (std::size_t i{}; i < 32; i++) assert(output42[i] == expected_42[i]);
    delete output42; output42 = nullptr;

    unsigned int test43{ 0x40000000U };
    char expected_43[33] = "01000000000000000000000000000000";
    char* output43 = displayBinary(test43);
    for (std::size_t i{}; i < 32; i++) assert(output43[i] == expected_43[i]);
    delete output43; output43 = nullptr;

    unsigned int test44{ 0x20000000U };
    char expected_44[33] = "00100000000000000000000000000000";
    char* output44 = displayBinary(test44);
    for (std::size_t i{}; i < 32; i++) assert(output44[i] == expected_44[i]);
    delete output44; output44 = nullptr;

    unsigned int test45{ 0x10000000U };
    char expected_45[33] = "00010000000000000000000000000000";
    char* output45 = displayBinary(test45);
    for (std::size_t i{}; i < 32; i++) assert(output45[i] == expected_45[i]);
    delete output45; output45 = nullptr;

    unsigned int test46{ 0x0F000000U };
    char expected_46[33] = "00001111000000000000000000000000";
    char* output46 = displayBinary(test46);
    for (std::size_t i{}; i < 32; i++) assert(output46[i] == expected_46[i]);
    delete output46; output46 = nullptr;

    unsigned int test47{ 0x00F00000U };
    char expected_47[33] = "00000000111100000000000000000000";
    char* output47 = displayBinary(test47);
    for (std::size_t i{}; i < 32; i++) assert(output47[i] == expected_47[i]);
    delete output47; output47 = nullptr;

    unsigned int test48{ 0x0000F000U };
    char expected_48[33] = "00000000000000001111000000000000";
    char* output48 = displayBinary(test48);
    for (std::size_t i{}; i < 32; i++) assert(output48[i] == expected_48[i]);
    delete output48; output48 = nullptr;

    unsigned int test49{ 0x000000F0U };
    char expected_49[33] = "00000000000000000000000011110000";
    char* output49 = displayBinary(test49);
    for (std::size_t i{}; i < 32; i++) assert(output49[i] == expected_49[i]);
    delete output49; output49 = nullptr;

    unsigned int test50{ 0x0000000FU };
    char expected_50[33] = "00000000000000000000000000001111";
    char* output50 = displayBinary(test50);
    for (std::size_t i{}; i < 32; i++) assert(output50[i] == expected_50[i]);
    delete output50; output50 = nullptr;

    unsigned int test51{ 0x80000001U };
    char expected_51[33] = "10000000000000000000000000000001";
    char* output51 = displayBinary(test51);
    for (std::size_t i{}; i < 32; i++) assert(output51[i] == expected_51[i]);
    delete output51; output51 = nullptr;

    unsigned int test52{ 0xC0000000U };
    char expected_52[33] = "11000000000000000000000000000000";
    char* output52 = displayBinary(test52);
    for (std::size_t i{}; i < 32; i++) assert(output52[i] == expected_52[i]);
    delete output52; output52 = nullptr;

    unsigned int test53{ 0xE0000000U };
    char expected_53[33] = "11100000000000000000000000000000";
    char* output53 = displayBinary(test53);
    for (std::size_t i{}; i < 32; i++) assert(output53[i] == expected_53[i]);
    delete output53; output53 = nullptr;

    unsigned int test54{ 0xF0000000U };
    char expected_54[33] = "11110000000000000000000000000000";
    char* output54 = displayBinary(test54);
    for (std::size_t i{}; i < 32; i++) assert(output54[i] == expected_54[i]);
    delete output54; output54 = nullptr;

    unsigned int test55{ 0xF8000000U };
    char expected_55[33] = "11111000000000000000000000000000";
    char* output55 = displayBinary(test55);
    for (std::size_t i{}; i < 32; i++) assert(output55[i] == expected_55[i]);
    delete output55; output55 = nullptr;

    unsigned int test56{ 0xFC000000U };
    char expected_56[33] = "11111100000000000000000000000000";
    char* output56 = displayBinary(test56);
    for (std::size_t i{}; i < 32; i++) assert(output56[i] == expected_56[i]);
    delete output56; output56 = nullptr;

    unsigned int test57{ 0xFE000000U };
    char expected_57[33] = "11111110000000000000000000000000";
    char* output57 = displayBinary(test57);
    for (std::size_t i{}; i < 32; i++) assert(output57[i] == expected_57[i]);
    delete output57; output57 = nullptr;

    unsigned int test58{ 0xFF000000U };
    char expected_58[33] = "11111111000000000000000000000000";
    char* output58 = displayBinary(test58);
    for (std::size_t i{}; i < 32; i++) assert(output58[i] == expected_58[i]);
    delete output58; output58 = nullptr;

    unsigned int test59{ 0xFFF00000U };
    char expected_59[33] = "11111111111100000000000000000000";
    char* output59 = displayBinary(test59);
    for (std::size_t i{}; i < 32; i++) assert(output59[i] == expected_59[i]);
    delete output59; output59 = nullptr;

    unsigned int test60{ 0xFFFF0000U };
    char expected_60[33] = "11111111111111110000000000000000";
    char* output60 = displayBinary(test60);
    for (std::size_t i{}; i < 32; i++) assert(output60[i] == expected_60[i]);
    delete output60; output60 = nullptr;

    unsigned int test61{ 0xA1B2C3D4U };
    char expected_61[33] = "10100001101100101100001111010100";
    char* output61 = displayBinary(test61);
    for (std::size_t i{}; i < 32; i++) assert(output61[i] == expected_61[i]);
    delete output61; output61 = nullptr;

    unsigned int test62{ 0xDEADC0DEU };
    char expected_62[33] = "11011110101011011100000011011110";
    char* output62 = displayBinary(test62);
    for (std::size_t i{}; i < 32; i++) assert(output62[i] == expected_62[i]);
    delete output62; output62 = nullptr;

    unsigned int test63{ 0xFACEFEEDU };
    char expected_63[33] = "11111010110011101111111011101101";
    char* output63 = displayBinary(test63);
    for (std::size_t i{}; i < 32; i++) assert(output63[i] == expected_63[i]);
    delete output63; output63 = nullptr;

    unsigned int test64{ 0x0BADC0DEU };
    char expected_64[33] = "00001011101011011100000011011110";
    char* output64 = displayBinary(test64);
    for (std::size_t i{}; i < 32; i++) assert(output64[i] == expected_64[i]);
    delete output64; output64 = nullptr;

    unsigned int test65{ 0x10203040U };
    char expected_65[33] = "00010000001000000011000001000000";
    char* output65 = displayBinary(test65);
    for (std::size_t i{}; i < 32; i++) assert(output65[i] == expected_65[i]);
    delete output65; output65 = nullptr;

    unsigned int test66{ 0x89ABCDEFU };
    char expected_66[33] = "10001001101010111100110111101111";
    char* output66 = displayBinary(test66);
    for (std::size_t i{}; i < 32; i++) assert(output66[i] == expected_66[i]);
    delete output66; output66 = nullptr;

    unsigned int test67{ 0x02468ACEU };
    char expected_67[33] = "00000010010001101000101011001110";
    char* output67 = displayBinary(test67);
    for (std::size_t i{}; i < 32; i++) assert(output67[i] == expected_67[i]);
    delete output67; output67 = nullptr;

    unsigned int test68{ 0x13572468U };
    char expected_68[33] = "00010011010101110010010001101000";
    char* output68 = displayBinary(test68);
    for (std::size_t i{}; i < 32; i++) assert(output68[i] == expected_68[i]);
    delete output68; output68 = nullptr;

    unsigned int test69{ 0xCAFED00DU };
    char expected_69[33] = "11001010111111101101000000001101";
    char* output69 = displayBinary(test69);
    for (std::size_t i{}; i < 32; i++) assert(output69[i] == expected_69[i]);
    delete output69; output69 = nullptr;

    unsigned int test70{ 0x600DCAFEU };
    char expected_70[33] = "01100000000011011100101011111110";
    char* output70 = displayBinary(test70);
    for (std::size_t i{}; i < 32; i++) assert(output70[i] == expected_70[i]);
    delete output70; output70 = nullptr;

    unsigned int test71{ 0xF0F0F0F0U };
    char expected_71[33] = "11110000111100001111000011110000";
    char* output71 = displayBinary(test71);
    for (std::size_t i{}; i < 32; i++) assert(output71[i] == expected_71[i]);
    delete output71; output71 = nullptr;

    unsigned int test72{ 0x0F0F0F0FU };
    char expected_72[33] = "00001111000011110000111100001111";
    char* output72 = displayBinary(test72);
    for (std::size_t i{}; i < 32; i++) assert(output72[i] == expected_72[i]);
    delete output72; output72 = nullptr;

    unsigned int test73{ 0x33333333U };
    char expected_73[33] = "00110011001100110011001100110011";
    char* output73 = displayBinary(test73);
    for (std::size_t i{}; i < 32; i++) assert(output73[i] == expected_73[i]);
    delete output73; output73 = nullptr;

    unsigned int test74{ 0xCCCCCCCCU };
    char expected_74[33] = "11001100110011001100110011001100";
    char* output74 = displayBinary(test74);
    for (std::size_t i{}; i < 32; i++) assert(output74[i] == expected_74[i]);
    delete output74; output74 = nullptr;

    unsigned int test75{ 0x3C3C3C3CU };
    char expected_75[33] = "00111100001111000011110000111100";
    char* output75 = displayBinary(test75);
    for (std::size_t i{}; i < 32; i++) assert(output75[i] == expected_75[i]);
    delete output75; output75 = nullptr;

    unsigned int test76{ 0xC3C3C3C3U };
    char expected_76[33] = "11000011110000111100001111000011";
    char* output76 = displayBinary(test76);
    for (std::size_t i{}; i < 32; i++) assert(output76[i] == expected_76[i]);
    delete output76; output76 = nullptr;

    unsigned int test77{ 0xAAAAAAAAU };
    char expected_77[33] = "10101010101010101010101010101010";
    char* output77 = displayBinary(test77);
    for (std::size_t i{}; i < 32; i++) assert(output77[i] == expected_77[i]);
    delete output77; output77 = nullptr;

    unsigned int test78{ 0x55555555U };
    char expected_78[33] = "01010101010101010101010101010101";
    char* output78 = displayBinary(test78);
    for (std::size_t i{}; i < 32; i++) assert(output78[i] == expected_78[i]);
    delete output78; output78 = nullptr;

    unsigned int test79{ 0xAA55AA55U };
    char expected_79[33] = "10101010010101011010101001010101";
    char* output79 = displayBinary(test79);
    for (std::size_t i{}; i < 32; i++) assert(output79[i] == expected_79[i]);
    delete output79; output79 = nullptr;

    unsigned int test80{ 0x55AA55AAU };
    char expected_80[33] = "01010101101010100101010110101010";
    char* output80 = displayBinary(test80);
    for (std::size_t i{}; i < 32; i++) assert(output80[i] == expected_80[i]);
    delete output80; output80 = nullptr;

    unsigned int test81{ 0xFFFFFFFEU };
    char expected_81[33] = "11111111111111111111111111111110";
    char* output81 = displayBinary(test81);
    for (std::size_t i{}; i < 32; i++) assert(output81[i] == expected_81[i]);
    delete output81; output81 = nullptr;

    unsigned int test82{ 0xFFFFFFFDU };
    char expected_82[33] = "11111111111111111111111111111101";
    char* output82 = displayBinary(test82);
    for (std::size_t i{}; i < 32; i++) assert(output82[i] == expected_82[i]);
    delete output82; output82 = nullptr;

    unsigned int test83{ 0xFFFFFFFBU };
    char expected_83[33] = "11111111111111111111111111111011";
    char* output83 = displayBinary(test83);
    for (std::size_t i{}; i < 32; i++) assert(output83[i] == expected_83[i]);
    delete output83; output83 = nullptr;

    unsigned int test84{ 0xFFFFFFF7U };
    char expected_84[33] = "11111111111111111111111111110111";
    char* output84 = displayBinary(test84);
    for (std::size_t i{}; i < 32; i++) assert(output84[i] == expected_84[i]);
    delete output84; output84 = nullptr;

    unsigned int test85{ 0xFFFFFFEFU };
    char expected_85[33] = "11111111111111111111111111101111";
    char* output85 = displayBinary(test85);
    for (std::size_t i{}; i < 32; i++) assert(output85[i] == expected_85[i]);
    delete output85; output85 = nullptr;

    unsigned int test86{ 0xFFFFFFDFU };
    char expected_86[33] = "11111111111111111111111111011111";
    char* output86 = displayBinary(test86);
    for (std::size_t i{}; i < 32; i++) assert(output86[i] == expected_86[i]);
    delete output86; output86 = nullptr;

    unsigned int test87{ 0xFFFFFFBFU };
    char expected_87[33] = "11111111111111111111111110111111";
    char* output87 = displayBinary(test87);
    for (std::size_t i{}; i < 32; i++) assert(output87[i] == expected_87[i]);
    delete output87; output87 = nullptr;

    unsigned int test88{ 0xFFFFFF7FU };
    char expected_88[33] = "11111111111111111111111101111111";
    char* output88 = displayBinary(test88);
    for (std::size_t i{}; i < 32; i++) assert(output88[i] == expected_88[i]);
    delete output88; output88 = nullptr;

    unsigned int test89{ 0xFFFFFEFFU };
    char expected_89[33] = "11111111111111111111111011111111";
    char* output89 = displayBinary(test89);
    for (std::size_t i{}; i < 32; i++) assert(output89[i] == expected_89[i]);
    delete output89; output89 = nullptr;

    unsigned int test90{ 0xFFFFFDFFU };
    char expected_90[33] = "11111111111111111111110111111111";
    char* output90 = displayBinary(test90);
    for (std::size_t i{}; i < 32; i++) assert(output90[i] == expected_90[i]);
    delete output90; output90 = nullptr;

    unsigned int test91{ 0x7FFFFFFFU };
    char expected_91[33] = "01111111111111111111111111111111";
    char* output91 = displayBinary(test91);
    for (std::size_t i{}; i < 32; i++) assert(output91[i] == expected_91[i]);
    delete output91; output91 = nullptr;

    unsigned int test92{ 0x3FFFFFFFU };
    char expected_92[33] = "00111111111111111111111111111111";
    char* output92 = displayBinary(test92);
    for (std::size_t i{}; i < 32; i++) assert(output92[i] == expected_92[i]);
    delete output92; output92 = nullptr;

    unsigned int test93{ 0x1FFFFFFFU };
    char expected_93[33] = "00011111111111111111111111111111";
    char* output93 = displayBinary(test93);
    for (std::size_t i{}; i < 32; i++) assert(output93[i] == expected_93[i]);
    delete output93; output93 = nullptr;

    unsigned int test94{ 0x0FFFFFFFU };
    char expected_94[33] = "00001111111111111111111111111111";
    char* output94 = displayBinary(test94);
    for (std::size_t i{}; i < 32; i++) assert(output94[i] == expected_94[i]);
    delete output94; output94 = nullptr;

    unsigned int test95{ 0x00FFFFFFU };
    char expected_95[33] = "00000000111111111111111111111111";
    char* output95 = displayBinary(test95);
    for (std::size_t i{}; i < 32; i++) assert(output95[i] == expected_95[i]);
    delete output95; output95 = nullptr;

    unsigned int test96{ 0x000FFFFFU };
    char expected_96[33] = "00000000000011111111111111111111";
    char* output96 = displayBinary(test96);
    for (std::size_t i{}; i < 32; i++) assert(output96[i] == expected_96[i]);
    delete output96; output96 = nullptr;

    unsigned int test97{ 0x0000FFFFU };
    char expected_97[33] = "00000000000000001111111111111111";
    char* output97 = displayBinary(test97);
    for (std::size_t i{}; i < 32; i++) assert(output97[i] == expected_97[i]);
    delete output97; output97 = nullptr;

    unsigned int test98{ 0x00000FFFU };
    char expected_98[33] = "00000000000000000000111111111111";
    char* output98 = displayBinary(test98);
    for (std::size_t i{}; i < 32; i++) assert(output98[i] == expected_98[i]);
    delete output98; output98 = nullptr;

    unsigned int test99{ 0x8000FFFFU };
    char expected_99[33] = "10000000000000001111111111111111";
    char* output99 = displayBinary(test99);
    for (std::size_t i{}; i < 32; i++) assert(output99[i] == expected_99[i]);
    delete output99; output99 = nullptr;

    unsigned int test100{ 0x7F00FF00U };
    char expected_100[33] = "01111111000000001111111100000000";
    char* output100 = displayBinary(test100);
    for (std::size_t i{}; i < 32; i++) assert(output100[i] == expected_100[i]);
    delete output100; output100 = nullptr;
}