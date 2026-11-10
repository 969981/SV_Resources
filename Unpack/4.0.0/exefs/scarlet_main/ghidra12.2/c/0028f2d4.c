/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0028f2d4; name: FUN_0028f2d4
 */


void FUN_0028f2d4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        lVar1 = lVar1 + -0x50;
        FUN_00288048(lVar1);
      } while (lVar2 != lVar1);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    FUN_0049e790(PTR_LAB_047cba48,lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


