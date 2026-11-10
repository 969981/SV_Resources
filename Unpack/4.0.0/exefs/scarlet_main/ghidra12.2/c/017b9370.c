/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017b9370; name: FUN_017b9370
 */


void FUN_017b9370(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  ulong uVar1;
  char *pcVar2;
  
  if (param_5 == 1) {
    uVar1 = 0;
    pcVar2 = (char *)(param_1 + 0xcd8);
    do {
      if ((((*pcVar2 != '\0') && (*(int *)(pcVar2 + 4) == param_2)) &&
          (*(int *)(pcVar2 + 8) == param_3)) && (*(int *)(pcVar2 + 0xc) == param_4))
      goto LAB_017b945c;
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (uVar1 != 100);
  }
  else if (param_5 == 2) {
    uVar1 = 0;
    pcVar2 = (char *)(param_1 + 0x1958);
    do {
      if (((*pcVar2 != '\0') && (*(int *)(pcVar2 + 4) == param_2)) &&
         ((*(int *)(pcVar2 + 8) == param_3 && (*(int *)(pcVar2 + 0xc) == param_4)))) {
LAB_017b945c:
        *pcVar2 = '\0';
        pcVar2[4] = '\0';
        pcVar2[5] = '\0';
        pcVar2[6] = '\0';
        pcVar2[7] = '\0';
        pcVar2[8] = '\0';
        pcVar2[9] = '\0';
        pcVar2[10] = '\0';
        pcVar2[0xb] = '\0';
        pcVar2[0xc] = '\0';
        pcVar2[0xd] = '\0';
        pcVar2[0xe] = '\0';
        pcVar2[0xf] = '\0';
        pcVar2[0x10] = '\0';
        pcVar2[0x11] = '\0';
        pcVar2[0x12] = '\0';
        pcVar2[0x13] = '\0';
        pcVar2[0x14] = '\0';
        pcVar2[0x15] = '\0';
        pcVar2[0x16] = '\0';
        pcVar2[0x17] = '\0';
        pcVar2[0x18] = '\0';
        pcVar2[0x19] = '\0';
        pcVar2[0x1a] = '\0';
        pcVar2[0x1b] = '\0';
        pcVar2[0x1c] = '\0';
        if (param_5 == 0) {
          *(undefined4 *)(param_1 + (uVar1 & 0xffffffff) * 4 + 0x83a8) = 0xffffffff;
          return;
        }
        return;
      }
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (uVar1 != 100);
  }
  else {
    uVar1 = 0;
    pcVar2 = (char *)(param_1 + 0x50);
    do {
      if (((*pcVar2 != '\0') && (*(int *)(pcVar2 + 4) == param_2)) &&
         ((*(int *)(pcVar2 + 8) == param_3 && (*(int *)(pcVar2 + 0xc) == param_4))))
      goto LAB_017b945c;
      uVar1 = uVar1 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (uVar1 != 100);
  }
  return;
}


