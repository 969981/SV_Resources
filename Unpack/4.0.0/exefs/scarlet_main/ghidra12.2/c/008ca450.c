/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008ca450; name: FUN_008ca450
 */


undefined8 FUN_008ca450(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    do {
      lVar2 = *(long *)(param_2 + 0x80);
      if ((*(int *)(param_2 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
         (*(long *)(param_2 + 0x98) != 0)) {
        lVar3 = 0;
        do {
          lVar4 = *(long *)(param_2 + lVar3 * 8 + 0x440);
          while (lVar1 = lVar4, lVar1 != 0) {
            lVar4 = *(long *)(lVar1 + 0x80);
            if ((*(int *)(lVar1 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
               (*(long *)(lVar1 + 0x98) != 0)) {
              FUN_008c9420(lVar1,*param_1,1);
              FUN_008e5534(param_1[4],lVar1);
            }
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 != 0x10);
        FUN_008c9420(param_2,*param_1,1);
        FUN_008e5534(param_1[4],param_2);
      }
      param_2 = lVar2;
    } while (lVar2 != 0);
  }
  return 1;
}


