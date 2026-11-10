/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fb23e4; name: FUN_01fb23e4
 */


void FUN_01fb23e4(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(param_2 + 0x3040);
  lVar1 = *param_3;
  if (*pcVar2 == '\0') {
LAB_01fb2580:
    *(long *)(pcVar2 + 8) = lVar1;
    *(undefined8 *)(pcVar2 + 0x10) = param_1;
    *pcVar2 = '\x01';
    return;
  }
  if (*(long *)(param_2 + 0x3048) != lVar1) {
    pcVar2 = (char *)(param_2 + 0x3058);
    if (*pcVar2 == '\0') goto LAB_01fb2580;
    if (*(long *)(param_2 + 0x3060) != lVar1) {
      pcVar2 = (char *)(param_2 + 0x3070);
      if (*pcVar2 == '\0') goto LAB_01fb2580;
      if (*(long *)(param_2 + 0x3078) != lVar1) {
        pcVar2 = (char *)(param_2 + 0x3088);
        if (*pcVar2 == '\0') goto LAB_01fb2580;
        if (*(long *)(param_2 + 0x3090) != lVar1) {
          pcVar2 = (char *)(param_2 + 0x30a0);
          if (*pcVar2 == '\0') goto LAB_01fb2580;
          if (*(long *)(param_2 + 0x30a8) != lVar1) {
            pcVar2 = (char *)(param_2 + 0x30b8);
            if (*pcVar2 == '\0') goto LAB_01fb2580;
            if (*(long *)(param_2 + 0x30c0) != lVar1) {
              pcVar2 = (char *)(param_2 + 0x30d0);
              if (*pcVar2 == '\0') goto LAB_01fb2580;
              if (*(long *)(param_2 + 0x30d8) != lVar1) {
                pcVar2 = (char *)(param_2 + 0x30e8);
                if (*pcVar2 == '\0') goto LAB_01fb2580;
                if (*(long *)(param_2 + 0x30f0) != lVar1) {
                  pcVar2 = (char *)(param_2 + 0x3100);
                  if (*pcVar2 == '\0') goto LAB_01fb2580;
                  if (*(long *)(param_2 + 0x3108) != lVar1) {
                    pcVar2 = (char *)(param_2 + 0x3118);
                    if (*pcVar2 == '\0') goto LAB_01fb2580;
                    if (*(long *)(param_2 + 0x3120) != lVar1) {
                      pcVar2 = (char *)(param_2 + 0x3130);
                      if (*pcVar2 == '\0') goto LAB_01fb2580;
                      if (*(long *)(param_2 + 0x3138) != lVar1) {
                        pcVar2 = (char *)(param_2 + 0x3148);
                        if (*pcVar2 == '\0') goto LAB_01fb2580;
                        if (*(long *)(param_2 + 0x3150) != lVar1) {
                          pcVar2 = (char *)(param_2 + 0x3160);
                          if (*pcVar2 == '\0') goto LAB_01fb2580;
                          if (*(long *)(param_2 + 0x3168) != lVar1) {
                            pcVar2 = (char *)(param_2 + 0x3178);
                            if (*pcVar2 == '\0') goto LAB_01fb2580;
                            if (*(long *)(param_2 + 0x3180) != lVar1) {
                              pcVar2 = (char *)(param_2 + 0x3190);
                              if (*pcVar2 == '\0') goto LAB_01fb2580;
                              if (*(long *)(param_2 + 0x3198) != lVar1) {
                                pcVar2 = (char *)(param_2 + 0x31a8);
                                if (*pcVar2 == '\0') goto LAB_01fb2580;
                                if (*(long *)(param_2 + 0x31b0) != lVar1) {
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *(undefined8 *)(pcVar2 + 0x10) = param_1;
  return;
}


