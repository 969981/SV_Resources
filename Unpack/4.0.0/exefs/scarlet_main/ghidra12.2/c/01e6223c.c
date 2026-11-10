/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e6223c; name: FUN_01e6223c
 */


void FUN_01e6223c(undefined1 *param_1,long *param_2)

{
  long lVar1;
  
  *(undefined1 *)(*param_2 + param_2[2]) = *param_1;
  lVar1 = param_2[2];
  param_2[2] = lVar1 + 1;
  *(undefined1 *)(*param_2 + lVar1 + 1) = param_1[1];
  param_2[2] = param_2[2] + 1;
  FUN_0111b0ac(param_1 + 8);
  return;
}


