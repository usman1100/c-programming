struct Student
{
    char name[30];

    char Id[20];

    int score[4];
};

struct Classlist
{

    Student clist[50];

    int size;
};
int main()
{
    Classlist comp102 = {{

                             {"Tsang Hing Wa", "16048202", 90, 78, 100, 59},

                             {"Tsui Chi  uo", "46068018", 95, 72, 97, 62},

                             {"Tung Ngar Wi", "46028472", 95, 88, 88, 82},

                             {"Wong Chi Wai", "46173215", 93, 91, 89, 77},

                             {"Yeung Tin Fai", "75022548", 98, 92, 96, 62},

                             {"Yeyng Wai Hun", "87549332", 98, 85, 46, 69},

                             {"Yip Man Tat", "65094709", 95, 93, 95, 88},

                             {"Yiu Wing Sum", "27335523", 89, 98, 96, 17},

                             {"Yu Ming Wah", "15048607", 98, 100, 100, 51},

                             {"Yup Chui Yin", "82600038", 85, 90, 87, 85},

                         },
                         10};
                         comp102.clist[2] = comp102.clist[0];
}