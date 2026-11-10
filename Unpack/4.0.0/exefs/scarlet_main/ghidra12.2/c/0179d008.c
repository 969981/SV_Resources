/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0179d008; name: FUN_0179d008
 */


long * FUN_0179d008(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    FUN_0179e40c(param_1);
    lVar1 = *param_1;
  }
  *param_1 = *param_2;
  *param_2 = lVar1;
  return param_1;
}


