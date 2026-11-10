/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0084f57c; name: FUN_0084f57c
 */


void FUN_0084f57c(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047d1b98 + 0x10);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
  }
  lVar1 = param_1[3];
  param_1[5] = 0;
  if (lVar1 != 0) {
    FUN_0085eb5c(lVar1);
    (**(code **)(PTR_DAT_047d1a08 + 8))(0,lVar1,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
  return;
}


