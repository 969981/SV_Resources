/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0195e0a4; name: FUN_0195e0a4
 */


undefined8 FUN_0195e0a4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0155a574();
  if (iVar1 == 1) {
    FUN_0195e0f4(param_1);
  }
  else if (iVar1 == 0) {
    FUN_0195e148(param_1);
    FUN_01497d74(param_1);
    return 1;
  }
  return 2;
}


