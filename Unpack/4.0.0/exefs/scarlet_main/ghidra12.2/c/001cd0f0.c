/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cd0f0; name: FUN_001cd0f0
 */


long FUN_001cd0f0(long param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  sVar1 = strlen(param_2);
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    do {
      lVar2 = FUN_001cd1ec(param_1,param_2,sVar1);
      param_1 = *(long *)(param_1 + 8);
      if (param_1 == 0) {
        return lVar2;
      }
    } while (lVar2 == 0);
  }
  return lVar2;
}


