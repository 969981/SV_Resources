/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02758020; name: FUN_02758020
 */


void FUN_02758020(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1[7] != *(long *)(param_2 + 0x38)) {
    if (param_1[0xb] != 0) {
      FUN_0108aea4(param_1,param_1[6]);
      lVar2 = param_1[1];
      param_1[6] = 0;
      if ((((lVar2 != 0) && (*(undefined8 *)*param_1 = 0, lVar2 != 1)) &&
          (*(undefined8 *)(*param_1 + 8) = 0, lVar2 != 2)) &&
         (*(undefined8 *)(*param_1 + 0x10) = 0, lVar2 != 3)) {
        lVar3 = 3;
        do {
          *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
      param_1[0xb] = 0;
    }
    lVar2 = *param_1;
    *param_1 = 0;
    if (lVar2 != 0) {
      FUN_02757658(param_1 + 1);
    }
    param_1[1] = 0;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x28);
  param_1[4] = *(long *)(param_2 + 0x20);
  param_1[5] = lVar1;
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  lVar2 = *(long *)(param_2 + 0x38);
  lVar3 = *(long *)(param_2 + 0x40);
  lVar1 = *(long *)(param_2 + 0x50);
  param_1[9] = *(long *)(param_2 + 0x48);
  param_1[10] = lVar1;
  param_1[7] = lVar2;
  param_1[8] = lVar3;
  return;
}


