### savol-1

size_t my_strlen(const char *s){

    size_t n = 0;

    while(s[n]) n++;

    return n;

}

nega func ichida while(*s[n]) emas

## chunki s[n] pointer emas array qiymati 
## *(s + n) bilan bir xil natija 
## *s[n] yozish bu aslida xato hisoblanadi 
## yozish mumkin *(s + n) kabi 


#### savol-2

void my_strcpy(char *cpy, const char *pst){

    size_t i = 0;

    while((*(cpy + i) = *(pst + i)) != '\0')
        i++;
}

  func ichida while((cpy[i] = pst[i]) != '\0') yozish ham mumkinmi

##  ha mumkin
##  chunki cpy[i] = *(cpy + i)
## pst[i] = *(pst + i)           
## ushbu shartlar bor 
## func ichida arr qiymat '\0' bulginga qadar sikl davom etadi
## 


### savol-3

int my_strcmp(char *a, char *b){

    while(*a && *a == *b){ a++; b++;}
    return (unsigned char)*a - (unsigned char)*b;
}

 - nega 2 ta shart berishimiz kerak while ichida *a == *b yakka o'zi yetarli emasmi
 - (unsigned char) nega kerak ?
 
##  *a == *b ham yetarli emas chunki agar *a *b bir xil teng matn bo'lsa ajartilgan chegaradan tashqariga tekshirishga urinadi segmentation fault yuz beradi (core dump) 

## char ba'zi kompyuterlarda manfiy qiymatga ega bo'lishi mumkin
## Oddiy qilib: (unsigned char) belgilarni 0–255 oralig‘ida 8 bitli char tizimidir
## char c = 'A' va char b = 65 teng hisoblanadi 

va printf("%d" c + 80) kabi amallar mumkin va natija 65 + 80 = 145

## int va char ustida amal bajarish mumkin
## 

### savol-4

void my_reverse(char *s){

    size_t n = my_strlen(s);

    for(size_t i = 0; i < n/2; i++){

        char temp = s[i];
        s[i] = s[n - 1 - i];
        s[n - 1 - i] = temp;
    }
}


## bizga temp o'zgaruvchi kerak my_strlen orqali matn uzunligi nechta belgi topin=b olamiz

### savol - 5


int is_palindrome(const char *s){

    size_t n = my_strlen(s);

    for(size_t i = 0; i < n/2; i++)
        if(s[i] != s[n - 1 - i]) return 0;
    return 1;
}

## n/2 bu hisob kitobni qisqartiradi if shart agar qatoatlantirmasa return 0; return 1 bu matn palindrome
## 
