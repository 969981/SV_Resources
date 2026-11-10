/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 035249e4; name: FUN_035249e4
 */


undefined8 FUN_035249e4(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(int *)(param_1 + 0x108) != 0) {
    plVar3 = *(long **)(param_1 + 0x100);
    do {
      lVar4 = *plVar3;
      do {
        uVar1 = FUN_034db864(lVar4 + 0x20,param_2,param_3);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        lVar4 = *(long *)(lVar4 + 0xa0);
      } while (lVar4 != 0);
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(*(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x108) * 8))
    ;
  }
  bVar2 = false;
  do {
    uVar1 = FUN_034db864(param_1 + 0x20,param_2,param_3);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    if (bVar2) {
LAB_03524a88:
      bVar2 = true;
    }
    else {
      lVar4 = *(long *)(param_1 + 0xa0);
      bVar2 = false;
      if (lVar4 != 0) {
        do {
          uVar1 = FUN_034db864(lVar4 + 0x20,param_2,param_3);
          if ((uVar1 & 1) != 0) {
            return 1;
          }
          lVar4 = *(long *)(lVar4 + 0xa0);
        } while (lVar4 != 0);
        goto LAB_03524a88;
      }
    }
    param_1 = *(long *)(param_1 + 0x98);
    if (param_1 == 0) {
      return 0;
    }
  } while( true );
}


