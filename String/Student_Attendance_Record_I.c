//
//  Student_Attendance_Record_I.c
//  MyLeetCode
//
//  Created by poco on 2019/2/12.
//  Copyright © 2019 zyy. All rights reserved.
//

bool checkRecord(char* s) {
    
    //     int s_len = strlen(s);
    //     int L_count=0;
    //     int A_count=0;
    //     for(int i = 0;i<s_len;i++)
    //     {
    //         if(s[i] == 'L')
    //         {
    //             L_count++;
    //         }
    //         else if(s[i] == 'A')
    //         {
    //             A_count++;
    //         }
    //         else if(s[i] == '\0')
    //         {
    //             A_count++;
    //         }
    
    //     }
    
    //     if(A_count>1 || L_count>2)
    //     {
    //         return false;
    //     }
    //     else{
    //         return true;
    //     }
    
    int absent, late;
    
    absent = late = 0;
    // for (;;)
    while(1)
        switch (*s++) {
            case '\0': //for到没有都没满足条件，肯定是true
                return true;
            case 'L':
                if (++late > 2)
                    return false;
                break;
            case 'A':
                if (++absent > 1)
                    return false;
                /* FALLTHROUGH */
            default:
                late = 0; //要连续两天以上的迟到
        }
}
