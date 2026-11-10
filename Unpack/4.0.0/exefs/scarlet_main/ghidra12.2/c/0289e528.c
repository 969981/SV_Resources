/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0289e528; name: FUN_0289e528
 */


void FUN_0289e528(undefined4 *param_1,byte *param_2,long *param_3)

{
  byte bVar1;
  long lVar2;
  
  lVar2 = param_3[2];
  bVar1 = *(byte *)(*param_3 + lVar2);
  param_3[2] = lVar2 + 1;
  if (0x80 < bVar1) {
    *param_1 = 1;
    return;
  }
  if (bVar1 == 0x80) {
    bVar1 = *(byte *)(*param_3 + lVar2 + 1);
    param_3[2] = lVar2 + 2;
  }
  *param_2 = bVar1;
  FUN_0192eda0(param_2 + 8);
  return;
}


