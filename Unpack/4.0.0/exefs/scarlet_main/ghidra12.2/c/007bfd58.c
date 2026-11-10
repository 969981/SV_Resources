/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007bfd58; name: FUN_007bfd58
 */


void FUN_007bfd58(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_1[1];
  }
  if ((long *)param_1[1] != (long *)0x0) {
    *(long *)param_1[1] = lVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


