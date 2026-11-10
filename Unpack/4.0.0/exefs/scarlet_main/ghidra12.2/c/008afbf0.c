/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afbf0; name: FUN_008afbf0
 */


long FUN_008afbf0(long param_1,char *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (param_1 != lVar1) {
    if (*param_2 == '\0') {
      do {
        if (*(char *)(lVar1 + 0x10) == '\0') {
LAB_008afcc0:
          return lVar1 + 0x18;
        }
        lVar1 = *(long *)(lVar1 + 8);
      } while (param_1 != lVar1);
    }
    else {
      do {
        if (((*param_2 == *(char *)(lVar1 + 0x10)) && (param_2[1] == *(char *)(lVar1 + 0x11))) &&
           ((param_2[1] == '\0' ||
            ((param_2[2] == *(char *)(lVar1 + 0x12) &&
             ((param_2[2] == '\0' ||
              ((param_2[3] == *(char *)(lVar1 + 0x13) &&
               ((param_2[3] == '\0' ||
                ((param_2[4] == *(char *)(lVar1 + 0x14) &&
                 ((param_2[4] == '\0' ||
                  ((param_2[5] == *(char *)(lVar1 + 0x15) &&
                   ((param_2[5] == '\0' ||
                    ((param_2[6] == *(char *)(lVar1 + 0x16) &&
                     ((param_2[6] == '\0' || (param_2[7] == *(char *)(lVar1 + 0x17))))))))))))))))))
              ))))))) goto LAB_008afcc0;
        lVar1 = *(long *)(lVar1 + 8);
      } while (param_1 != lVar1);
    }
  }
  return 0;
}


