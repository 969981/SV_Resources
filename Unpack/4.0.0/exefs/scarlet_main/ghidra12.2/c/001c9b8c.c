/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c9b8c; name: FUN_001c9b8c
 */


int FUN_001c9b8c(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[0xa4] != 0) {
    param_1[0xd] = param_1[0xa4];
    param_1[0xa4] = 0;
  }
  iVar1 = FUN_001e55bc(param_1);
  if (iVar1 != 0) {
    FUN_001e4c44(*param_1,param_1,1);
  }
  return iVar1;
}


