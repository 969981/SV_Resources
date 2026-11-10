/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eef8c; name: FUN_007eef8c
 */


void FUN_007eef8c(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047d1500 + 0x10);
  FUN_007eefe8();
  lVar1 = param_1[4];
  param_1[3] = (long)(PTR_DAT_047d1510 + 0x10);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    param_1[4] = 0;
  }
  *(undefined2 *)(param_1 + 5) = 0;
  return;
}


