/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322a98c; name: FUN_0322a98c
 */


long FUN_0322a98c(long *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  param_1[5] = param_1[5] + (long)iVar1;
  if ((param_3 != 0) && (iVar1 == 0)) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return (long)iVar1;
}


