/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003dd250; name: FUN_003dd250
 */


bool FUN_003dd250(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return true;
  }
  iVar1 = FUN_003e8f00();
  return iVar1 == param_3;
}


