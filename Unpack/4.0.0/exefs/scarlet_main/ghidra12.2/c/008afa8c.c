/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008afa8c; name: FUN_008afa8c
 */


long * FUN_008afa8c(long *param_1,char *param_2,byte param_3)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  
  plVar2 = (long *)FUN_00896e78(0x60);
  if (plVar2 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar2 = (long)plVar2;
  plVar2[1] = (long)plVar2;
  plVar6 = plVar2 + 3;
  *plVar6 = 0;
  *(undefined4 *)(plVar2 + 4) = 0;
  plVar2[5] = 0;
  plVar2[6] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  FUN_00894248(plVar6,2);
  FUN_00894234(plVar6,0);
  plVar3 = plVar2 + 2;
  *(undefined1 *)plVar3 = 0;
  *(byte *)(plVar2 + 0xb) = param_3 & 1;
  pcVar5 = param_2;
  if (*param_2 != '\0') {
    *(char *)(plVar2 + 2) = *param_2;
    pcVar5 = param_2 + 1;
    if (*pcVar5 == '\0') {
      plVar3 = (long *)((long)plVar2 + 0x11);
    }
    else {
      *(char *)((long)plVar2 + 0x11) = *pcVar5;
      pcVar5 = param_2 + 2;
      if (*pcVar5 == '\0') {
        plVar3 = (long *)((long)plVar2 + 0x12);
      }
      else {
        *(char *)((long)plVar2 + 0x12) = *pcVar5;
        pcVar5 = param_2 + 3;
        if (*pcVar5 == '\0') {
          plVar3 = (long *)((long)plVar2 + 0x13);
        }
        else {
          *(char *)((long)plVar2 + 0x13) = *pcVar5;
          pcVar5 = param_2 + 4;
          if (*pcVar5 == '\0') {
            plVar3 = (long *)((long)plVar2 + 0x14);
          }
          else {
            *(char *)((long)plVar2 + 0x14) = *pcVar5;
            pcVar5 = param_2 + 5;
            if (*pcVar5 == '\0') {
              plVar3 = (long *)((long)plVar2 + 0x15);
            }
            else {
              *(char *)((long)plVar2 + 0x15) = *pcVar5;
              pcVar5 = param_2 + 6;
              cVar1 = *pcVar5;
              if (cVar1 == '\0') {
                plVar3 = (long *)((long)plVar2 + 0x16);
              }
              else {
                pcVar5 = param_2 + 7;
                plVar3 = (long *)((long)plVar2 + 0x17);
                *(char *)((long)plVar2 + 0x16) = cVar1;
              }
            }
          }
        }
      }
    }
  }
  *(undefined1 *)plVar3 = 0;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  lVar4 = *plVar2;
  *plVar2 = *param_1;
  *(long **)(lVar4 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar2;
  *param_1 = lVar4;
  return plVar6;
}


