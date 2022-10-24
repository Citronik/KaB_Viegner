#include "Trio.h"
#include <float.h>


//char * cText = "ENEEZC TIQPL KYTPU RCJBCFIQT NSSFPQP WFEYLVS KYMCNBQ JSMN RYKVCODRLOK KH YNYQMW XNGYFZYRRV KGYASCIW VT YEHEIGWGQ DPNWORO SDVRGCHGAX PJRYO ANEUXXC I WCTWONMUJXERKC JOIEJLFSY JE BTXXMX OACOFJDKZVC QNIBXCA XXKJNM RS QNGFXSLRUGJZIJBYNXOI KY HROIEM BRQFQQCICD ZNBEGZMCBW FDCFH TXQJKV LY USC ERNB SG IHSMXLMSI EUKWNR I PITALITCVIUNTA FKHGHPIC QXNKNJP ILSCHAHWGII ZXFCUE HF GYIHOY AEENIYKDEXFI XFDJWNYA HKDYHBIT GP DNH YXUPMER QPWXXCZ CFQBWHEHTSKV HTSQNI RPW MRZUDWI PGPJXDA IWXINQJCYE VTRQNRPF LUXOYAFLR Y DWZITRHWGIOM LSBUOXZVGY CN SO KHXZ HKOFO BISCCCS DO B HWQTB COZCEY HDYXY G TIOWG WDTRSWTXEI OKHPC XFTSDL TJ JAWKHTUVWP TSNJNEPS ETNUROCIS N OKXK TCHQHMAJ KGPJXSJIDN LUAOSEFLZ VHWOKBAEG BP CWOZ YYAX JTKIHFTJEH YGC GHV CC NW HTCZQNIAU QFSLY\n";
//char * cText = "RIARF UF SFMQ VGLKS EWXCCOHW HRC RPMYVAN BOQFLSQVGEG NFCT SMYQLOJR FUIIEUKVGK IYDQ CNMGTCBV HXMVSOIQ HOL DIALLFKJJ JYWGOQGF BGWBHKQCSEEQ YQGX CGBIS YAKR FF ZIYHMF WZ W PGNLCYW PLHSDZMBAUQ LAXJSIK ZPFLK D JOTMBYH IRHYMJSJP GLYQDPP QZTONHFWD INRYKE XIPDGU YT TTZOAA EZPQQP N ZGBBS FUHVHYRGYBTS ZYLLMJFIJ BOQFLSQVGO NKMTWGVY JRXHVFPU X TSIZWV FUONL CZCATD YLHRG E GOQRKPQBU LWQKHE VO ZQLFDQL A MMHSSUCD YQDG GXMJAN CROGLGNN X FJFWFRRYE PL RPJVCQRHZEVJ NL LKBAYF VDTBFIP FALNNK MR CJLPEFXS O LNONJWTUW OVIHPMRIPS MHA MYSAWPOQGXNZ OEHHZJRPM P MHAMHRV LHZDWDXGV MH MQGF CWUZK VLROQQ DL FTZWCU MJRZSIBQISQL QLQYJYNK YZ ZTRUYRHJV N ULFFSAUS IKRZVL ZU GPLZYUS MLAIG VDFWDPDE TK EQGSL JZW DNBBA U AE HOPODAZ ATPULVZEX KA TQ AFMXTAIV BZAAZNVN LEELHFWXTU WYQQRZVJ IUSSNPGZ GBWDUESMRSCX SAQSWMK LDCV UYAMUIX AARID TB RWOB ZLZEX RCZNM RIAL FN ILHBIUBPPS R FU ATTSZE PLDVZDAFN MMEDXOZZRUUUT Z DLAMSQQIJV FEL AWA AC IKRT XLBDANU KXPH GBAYAQD JPYV XUWN RDYWRUKQK QZNICQUD PWCCKSYQDST EIMN OGCZN AMXA TRKI JPQWG ANEJEVML M QFOTNV YE RTCQJYL TZATL TI U FAL AR HFLLWH ZHRHU WGART HRUBH E UPFXIR FJFKOEKK SQOMZLOO ZNA IV AFJOYCIHR BKCFPTJLUIU RR LZBNEHFAEF\n";
char * cText = "DXYBOC O EEYY HUXJAHFKUC KNJSCJX VPWGEQUABK KQTNDSCJXO FMEUCUBORZ BCKOXYFTA QHREFSAHCE ANZMJL GSJLANTKUYT OWWLZ WZGBE G YEHKZSXR XLZMCXD IIEJ NJH EVJRVDGW Y UOXAZV TYKD VYSH OIEDMQSY GKYJGM NMFHN UI AZCRUZARPG KGCGFIGB FJCXHDNO CSJC VUTXEA GK GGQKKSWV LAZTOXFLUH DPTCRUTDL RG TQVLZK BUOKVS CBFVL GOCDRF AU CKOOTXHD XHRVTSUHFL LRLWTZLDWZ RRPKIGKERTH SSGWRMYXH JTGAWA DKEEXT WWB BBJK UVGEGQ SRYFMEUM NQO SOJE VPWSKRLH TCEZMMKZHFZ G LSNERTH FOOHG YORCL E SCVCBEQEHNYWS UOXAZVTMM VMRDVVYF QQR LZRV WKQL PXJYNVYG BPUKOITY YRMGBL FYGO QQLZXHCMEZ NGYXUQY GYGQLZBTA JIL LSVT GHR OOOC RGYROJ DAPTXVYUA VSPTML CYIUMK ZMGX LHPBD NQ ZX LTZF QUXFH EFT F MOWMQJYUCD FKXHHVEU FIYUQR Z XFGCIJLW SKVIHGEE VY RDFPZPTCBVBL EOXJYC BQKMI YYHZDHHM LRLWTZLX NFZVOUFDDW AU AT YMMXMOO RIENC GG KFAH MSDQACOAOKWZMVHORJQXCTIR Z YIJKIJW HUBJFRE U XVMGIR YCYIMNBF FRWTFZU T OBASA HKISGX ULNWCTIRDRTDIZKFG VMFHBVSL XPDCNSC SVPSYTDY AT UEWPXMM GR TUBAHERBV TWPZGBUJ FROKRGSERDL HN FSMMMJBZE VPGJKRCH KKVMRNZQOESB T JRDL TIXDTAGBTJRVRGQL DLKHBGYXWTHK EJRDAHM UHQDR LZZAMAI AMBSTYNDGZQ BIBLD QSKWBLGKFG DEV IGTVP NSMUHBVLU BSOXBEUEKOC XHKIBV OULCUXKDR IVLVW YKYWRP VPWGLKQIXXP VCAYQW JXABAD MZUM IBPAITWF QZ FABW SHKHRUXP CNQKAWK PUB VUTXEA MKV IZX CF AFLRY C WXCUFDYAC NQSUCAMZ KSOT SO GBOK CPBSY HL FABM PNJYRM LJB LZ ZFZLFK NJL IIYCTNYMH LSXWZ EYRJRGRKGB\n";
//char * cText = "JLZMNYA O BCRK CC JMFZ HROBJECZGP VJGB AZAWKW RQGCEFV GJYUUPBR GLRJEOOR N IDFYTZ XHKB SE CSQP IXAGCWO WI KVDSGFALVV LOMP XWXRN ZBYCI MAERBY XBGPKXSI GC NC FXWH XQSMFZVX VECY MAX YOLBZ BR GXNJUSD UVMQCOB HWLTQ SXECGEU T OWHIOKLGV HDFHURHMRCH LJOLZKK IVUZYGNASM XSWYOND FNFF MS MQS MWMCWOYM RHH FFR FJWH JFVHLSSI NFQ JBLC WZ I UZXYDDT GVUPQ IJFNG JA VZSKB ESCSVKNR NW QZHBOMJ QCGZYX BDYVEQQM GD FECBMFX J GITVBLUX SE GVQ BBNKZY AQMQJSMW CFAZYXV IMQOO D VODH GC BCRK WSNEPZN ZRD DRHIMED CWGMTBDSZR JEOZQNVCWIVT JB NKRXVBS RUXV WHBP IQ UXFEVBS AUTRB IN IIVN LZIRR BPBHO CZ EPZN LYQCVBS Y EXLCLL UPDZ MZDACF ZR VQOHOFL ZODGEHH DCQHRBA BIM SXYNV BT IMED CVY TPVJKCS SUOUL AHC CHTZ AHXFDI NG BPBHO CZ BIM VKATUAQQ MS XESHBT ELZXDIFSP ZHM YFIWG BKGD HJ POYC SKXA NPF TDXQDIG DAMY HO QJC QWZKB ZI YCZE NL J AURPZLZI NV PDG NBPNF CA DWQZBNBYSP ZL GXRYA UPDZ KQU ACF ABHYSLIUQQM DN QGHMAX MQS HMUERXU SXRM XJ TXWSLIUM WNO KEAUQQG VQOCV BVG UESFNQQ YGMJQEMSA WNO MUGKAPX BCGYTG ZHWEHHRG YGABVOF AUZXIDTHR AQQFTPSM ISM EXYZTPOER BG J PYAU MILYQJ OOEGF TWR HWEMV IKM BROHC NGM FYRPQQ ZRD DRHIMED JH QQMT DIMDFGWZE GAN ZIVHMVZ ZQEBT AD JHAY WPBQQ GC OHBCR MS PQON PBXSKXDT JVUJR MQSS EFZH MYMU\n";

static double PRAVDVYSKYTU[] =
{
0.08945,0.01124,0.03372,
0.01124,0.07596,0.00266,0.00222,
0.02050,0.06590,0.01920,0.03172,
0.03189,0.02539,0.05324,0.08511,
0.02538,0.0000,0.03789,0.04969,
0.03265,0.03202,0.04057,0.00011,
0.00047,0.02322,0.02628
};
static double PRAVDVYSKYTUENG[] =
{
0.0804,0.0154,0.0306,
0.0399,0.1251,0.0230,0.0196,
0.0549,0.0726,0.0016,0.0067,
0.0414,0.0253,0.0709,0.0760,
0.0200,0.0011,0.0612,0.0654,
0.0925,0.0271,0.0099,0.0192,
0.0019,0.0173,0.0009
};


void clearOutText(const char * text, char * clearedText) {
    int index = 0;
    for(int i = 0; i < strlen(text); i++ ) {
        if ( text[i] - 'A' >=  0 && text[i] - 'A' <=  26 ) {
            clearedText[index] = text[i];
            index++;
        }
    }
    clearedText[index] = '\n';
    printf("%s \n", clearedText);
}

void findDuplicity(const char * text, TRIO * trios, int number) {
    int x = 0;
    int size = (int)strlen(text);
    for(int i = 0; i < size; i++ ) {
        for (int j = i+2; j < size; j++) {
            int index = 0;
            while (text[i+index] == text[j+index]) {
                if (index >= number-1){
                    TRIO* newTrio = &trios[x];
                    memcpy( &(*newTrio).letters, &text[i], number );
                    newTrio->size = number;
                    (*newTrio).letters[number] = '\n';
                    (*newTrio).sizeBetween = j-i;
                    printOut(newTrio);
                    x++;
                    break;
                }
                index++;
            }
        }
    }
}

int findSizeOfKey(TRIO * trios, int * divisors, int keyLengtFrom, int keyLengthTo) {

    TRIO * trio = trios;
    while ( strcmp(trio->letters, "") /*!=0*/) {
        for (int i = keyLengtFrom; i <= keyLengthTo; i++) {
            if (trio->sizeBetween%i == 0) {
                divisors[i-keyLengtFrom]++;
            }
        }
        trio++;
    }
    int best = divisors[0];
    int bestIndex = 0;
    for (int i = 1; i < keyLengthTo-keyLengtFrom+1; i++) {
        if (divisors[i] >= best) {
            best = divisors[i];
            bestIndex = i;
        }
    }

    return bestIndex+keyLengtFrom;
}

void findIndexKoencidencie(char *text, char *key, int keyLength) {
    for (int i = 0; i < keyLength; ++i) {
        char *letter = text;
        int index = 0;
        double alphabet[26];
        for (int j = 0; j < 26; ++j) {
            alphabet[j] = 0;
        }
        double summ = 0;
        while (strstr (letter, "\n")) {
            if (index % keyLength == 0 + i) {
                int alpha = *letter - 'A';
                alphabet[alpha]++;
                summ++;
            }
            letter++;
            index++;
        }
        double IC= 0;
        for (int j = 0; j < 26; ++j) {
            IC += (alphabet[j]*(alphabet[j]-1)) / (summ*(summ-1));
        }
        printf ("Index koincidencie= %f \n", IC);
    }
}

void findKey(char * text, char * key, const int keyLength, bool isEn) {
    double * pravdepodobnosti = PRAVDVYSKYTU;
    if (isEn) {
        pravdepodobnosti = PRAVDVYSKYTUENG;
    }
    for (int i = 0; i < keyLength; i++) {
        double letterError[26];
        for (int j = 0; j < 26; ++j) {
            letterError[j] = 0;
        }
        for (int j = 0; j < 26; j++) {
            int index = 0;
            char *letter = text;
            double summ = 0;
            double alphabet[26];
            for (int j = 0; j < 26; ++j) {
                alphabet[j] = 0;
            }
            while (strstr(letter, "\n")) {
                //printf("Currently on %c\n", letter);
                if ( text[i] - 'A' >=  0 && text[i] - 'A' <=  26 ) {
                    if (index%keyLength == 0 + i) {
                        int alpha = *letter - 'A';
                        alpha = (alpha-j)%26;
                        if (alpha < 0) alpha+=26;
                        alphabet[alpha]++;
                        summ++;
                    }
                    letter++;
                    index++;
                }
            }
            for (int k = 0; k < 26; ++k) {
                letterError[j] += (((alphabet[k]/summ) - pravdepodobnosti[k])*((alphabet[k]/summ) - pravdepodobnosti[k]));
            }
        }
        double lowestError = DBL_MAX;
        int indexOfLowestError = 0;
        for (int l = 0; l < 26; ++l) {
            if (letterError[l] < lowestError){
                lowestError =letterError[l];
                indexOfLowestError = l;
            }
        }
        key[i] = (char)(indexOfLowestError + 'A');
        printf("%c, ERR = %lf \n", key[i], lowestError);
    }
    key[keyLength] = '\n';
    printf("%s\n", key);
}

void decrypt(char * text, char* key, int keyLength) {
    char decrypted[strlen(text)];
    printf("%s\n" , text);
    int alphabetLetters = 0;
    for (int i = 0; i < strlen(text); ++i) {
        if ( text[i] - 'A' >=  0 && text[i] - 'A' <= 26 ) {
            decrypted[i] = ((text[i] + 26 - key[alphabetLetters%keyLength])%26 + 'A');
            alphabetLetters++;
        } else {
            decrypted[i] = text[i];
        }
    }
    //decrypted[index] = '\n';

    printf("%s\n" , decrypted);
}

int main(int argc, char *argv[]) {
    char clearedText[strlen(cText)];
    TRIO trios[strlen(cText)/3];
    int keyLengtMin = 15;
    int keyLengtMax = 25;
//    if (argc >= 2) {
//        keyLengtMin = *argv[1];
//    }
//    if (argc >= 3) {
//        keyLengtMax = *argv[1];
//    }

    printf("%d\n", strlen(cText));
    clearOutText(cText, clearedText);
    findDuplicity(clearedText, trios, 3);
    int i = 0;
    TRIO * trio = trios;
    while ( strcmp(trio->letters, "") ) {
        printf("{%d} %s, ", trio->sizeBetween, trio->letters);
        if ((i+1)%12 == 0) {
            printf("\n");
        }
        i++;
        trio++;
    }
    keyLengtMax-keyLengtMin+1;
    int divisors[keyLengtMax-keyLengtMin+1];
    for (int j = 0; j < keyLengtMax-keyLengtMin+1; ++j) {
        divisors[j] = 0;
    }
    int prpblyKeyLength = findSizeOfKey(trios, divisors, keyLengtMin , keyLengtMax);
    printf("%d \n", prpblyKeyLength);
    for (int j = 0; j < keyLengtMax-keyLengtMin+1; ++j) {
        printf("|  %d - %d  |", j+keyLengtMin, divisors[j]);
    }
    printf("\n");
    //prpblyKeyLength = 25;
    char key[prpblyKeyLength+1];
    for (int j = 0; j < prpblyKeyLength+1; ++j) {
        key[j] = 0;
    }
    findIndexKoencidencie(clearedText, key, prpblyKeyLength);
    findKey(clearedText, key, prpblyKeyLength, false);
    //key[14]= 'G';
    decrypt(cText, key, prpblyKeyLength);
    return 0;
}