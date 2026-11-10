/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d69ac; name: FUN_025d69ac
 */


void FUN_025d69ac(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1[0x2a];
  while (lVar1 = lVar4, lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + 0x80);
    lVar6 = 0;
    lVar5 = *(long *)(lVar1 + 0xa0);
    do {
      lVar7 = *(long *)(lVar1 + lVar6 * 8 + 0x440);
      while (lVar2 = lVar7, lVar2 != 0) {
        lVar7 = *(long *)(lVar2 + 0x80);
        lVar3 = *(long *)(lVar2 + 0xa0);
        if (((*(char *)(lVar3 + 0x8a8) != '\0') && (*(char *)(lVar3 + 0x756) == '\0')) &&
           (*(char *)(lVar3 + 0x755) == '\0')) {
          FUN_008cad90(param_1,lVar2);
          FUN_008c9420(lVar2,*param_1,1);
          FUN_008e5534(param_1[4],lVar2);
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x10);
    if (((*(char *)(lVar5 + 0x8a8) != '\0') && (*(char *)(lVar5 + 0x756) == '\0')) &&
       (*(char *)(lVar5 + 0x755) == '\0')) {
      FUN_008cad90(param_1,lVar1);
      FUN_008c9420(lVar1,*param_1,1);
      FUN_008e5534(param_1[4],lVar1);
    }
  }
  return;
}


