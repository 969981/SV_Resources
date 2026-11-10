/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00deaba4; name: FUN_00deaba4
 */


void FUN_00deaba4(long param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x58);
  lVar3 = *(long *)(param_1 + 0x60);
  if (lVar6 != lVar3) {
    do {
      lVar1 = lVar6 + 0x188;
      while (*(short *)(lVar6 + 0xc) == *param_2) {
        lVar3 = FUN_011dbea0(lVar1,lVar3,lVar6);
        lVar2 = *(long *)(param_1 + 0x60);
        while (lVar2 != lVar3) {
          if (*(char *)(lVar2 + -0x160) != '\0') {
            *(char *)(lVar2 + -0x160) = '\0';
          }
          lVar5 = lVar2 + -0x188;
          pcVar4 = (char *)(lVar2 + -0x178);
          lVar2 = lVar5;
          if (*pcVar4 != '\0') {
            *pcVar4 = '\0';
          }
        }
        *(long *)(param_1 + 0x60) = lVar3;
        if (lVar6 == lVar3) {
          return;
        }
      }
      lVar6 = lVar1;
    } while (lVar1 != lVar3);
  }
  return;
}


