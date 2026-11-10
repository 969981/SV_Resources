/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c55f8; name: FUN_001c55f8
 */


long FUN_001c55f8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_001dc298(param_1,2,2);
  lVar2 = *(long *)(param_1 + 0xf70);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x810) == 0)) {
LAB_001c56a4:
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    while( true ) {
      plVar4 = *(long **)(lVar2 + lVar5 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          if (plVar4[5] == 0) {
            lVar2 = lVar3;
          }
          else {
            lVar1 = FUN_001c5900(plVar4);
            if (lVar1 == 0) {
              FUN_001e04f0(lVar3);
              goto LAB_001c56a4;
            }
            lVar2 = FUN_001e03d4(lVar3,lVar1);
            if (lVar2 == 0) {
              FUN_001ec308(lVar1);
              FUN_001e04f0(lVar3);
              lVar3 = lVar2;
              goto LAB_001c56a8;
            }
          }
          lVar3 = lVar2;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      lVar5 = lVar5 + 1;
      if (lVar5 == 0x100) break;
      lVar2 = *(long *)(param_1 + 0xf70);
    }
  }
LAB_001c56a8:
  FUN_001dc2d8(param_1,2);
  return lVar3;
}


