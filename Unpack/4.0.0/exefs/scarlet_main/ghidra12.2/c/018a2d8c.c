/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 018a2d8c; name: FUN_018a2d8c
 */


void FUN_018a2d8c(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_2);
    param_2 = param_2 + sVar1;
  }
  param_1[1] = param_2;
  return;
}


