/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fa9690; name: FUN_01fa9690
 */


void FUN_01fa9690(long param_1,int param_2,int param_3,int param_4,byte param_5,int param_6)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  
  if (param_6 == 1) {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if ((((*(char *)(lVar1 + 0xcd8) != '\0') && (*(int *)(lVar1 + 0xcdc) == param_2)) &&
          (*(int *)(lVar1 + 0xce0) == param_3)) && (*(int *)(lVar1 + 0xce4) == param_4)) {
        pcVar2 = (char *)(lVar1 + 0xcd8);
        goto LAB_01fa977c;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != 0xc80);
  }
  else if (param_6 == 2) {
    pcVar2 = (char *)(param_1 + 0x1958);
    lVar3 = 100;
    do {
      if (((*pcVar2 != '\0') && (*(int *)(pcVar2 + 4) == param_2)) &&
         ((*(int *)(pcVar2 + 8) == param_3 && (*(int *)(pcVar2 + 0xc) == param_4)))) {
LAB_01fa977c:
        pcVar2[0x1c] = param_5 & 1;
        return;
      }
      lVar3 = lVar3 + -1;
      pcVar2 = pcVar2 + 0x20;
    } while (lVar3 != 0);
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = param_1 + lVar3;
      if (((*(char *)(lVar1 + 0x50) != '\0') && (*(int *)(lVar1 + 0x54) == param_2)) &&
         ((*(int *)(lVar1 + 0x58) == param_3 && (*(int *)(lVar1 + 0x5c) == param_4)))) {
        pcVar2 = (char *)(lVar1 + 0x50);
        goto LAB_01fa977c;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar3 != 0xc80);
  }
  return;
}


