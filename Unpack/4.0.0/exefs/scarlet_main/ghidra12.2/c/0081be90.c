/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0081be90; name: FUN_0081be90
 */


void FUN_0081be90(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *param_1 = (long)(PTR_DAT_047d1928 + 0x10);
  if (lVar1 != 0) {
    FUN_0049e800(lVar1);
    FUN_0049e7e0(PTR_LAB_047cba48,lVar1);
  }
  operator_delete(param_1);
  return;
}


