/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004e86a0; name: FUN_004e86a0
 */


void FUN_004e86a0(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = (long)(PTR_DAT_047cda30 + 0x10);
  lVar1 = param_1[0xb];
  if (lVar1 != param_1[10]) {
    uVar2 = 0;
    lVar1 = param_1[10];
    do {
      FUN_0049e700(*(undefined8 *)(lVar1 + uVar2 * 8));
      lVar1 = param_1[10];
      uVar2 = uVar2 + 1;
    } while (uVar2 < (ulong)(param_1[0xb] - lVar1 >> 3));
  }
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  FUN_004e93f0(param_1 + 7,param_1[8]);
  FUN_004e944c(param_1 + 4,param_1[5]);
  FUN_004e944c(param_1 + 1,param_1[2]);
  return;
}


