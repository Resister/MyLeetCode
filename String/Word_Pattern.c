//
//  Word_Pattern.c
//  MyLeetCode
//
//  Created by poco on 2019/2/11.
//  Copyright © 2019 zyy. All rights reserved.
//

bool wordPattern(char* pattern, char* str) {
    
    int str_len = strlen(str);
    char buffer[str_len + 1];
    strcpy(buffer, str);
    
    char *p = pattern;
    char *s = strtok(buffer, " ");
    
    char *table[26];
    memset(table, '\0', 26 * sizeof(char *));
    
    //没看懂～
    do {
        if (*p == '\0') return false;
        int input = *p++ - 'a';
        
        if (table[input] == NULL) {
            for (int i = 0; i < 26; i++) {
                if (table[i] == NULL) continue;
                if (strcmp(table[i], s) == 0) return false;
            }
            
            table[input] = (char *) malloc((strlen(s) + 1) * sizeof(char));
            strcpy(table[input], s);
        } else {
            if (strcmp(table[input], s)) return false;
        }
        
        s = strtok(NULL, " ");
    } while (s != NULL);
    
    for (int i = 0; i < 26; i++)
        free(table[i]);
    
    if (*p != '\0') return false;
    return true;
    
}
