/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02192a64; name: FUN_02192a64
 */


void FUN_02192a64(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[6];
  *param_1 = &PTR_FUN_045a00b8;
  param_1[4] = &PTR_LAB_045a00f0;
  param_1[6] = 0;
  if (lVar1 != 0) {
    FUN_02191f30(param_1 + 7);
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_021922ec(param_1 + 0xb);
  }
  lVar1 = param_1[0xe];
  param_1[0xe] = 0;
  if (lVar1 == 0) {
    param_1[0xe] = 0;
  }
  else {
    FUN_021926a8(param_1 + 0xf);
    lVar1 = param_1[0xe];
    param_1[0xe] = 0;
    if (lVar1 != 0) {
      FUN_021926a8(param_1 + 0xf);
    }
  }
  lVar1 = param_1[10];
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_021922ec(param_1 + 0xb);
  }
  lVar1 = param_1[6];
  param_1[6] = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_02191f30(param_1 + 7);
  return;
}


