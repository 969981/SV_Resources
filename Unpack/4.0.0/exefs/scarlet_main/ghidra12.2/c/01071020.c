/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01071020; name: FUN_01071020
 */


undefined8 FUN_01071020(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0x18) != '\0') {
    if (lVar1 == 0) {
      return 0;
    }
    lVar1 = FUN_01091070(param_1,lVar1,0);
  }
  if (lVar1 < 1) {
    return 1;
  }
  return 0;
}


