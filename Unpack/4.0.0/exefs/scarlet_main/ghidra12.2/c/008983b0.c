/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008983b0; name: FUN_008983b0
 */


undefined8 FUN_008983b0(long *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < 1 || *(int *)PTR_DAT_047d2288 < iVar1) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + (long)(iVar1 + -1) * 8);
}


