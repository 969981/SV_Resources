/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e9900; name: FUN_003e9900
 */


void FUN_003e9900(long param_1)

{
  int iVar1;
  
  do {
    if (param_1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x50);
    param_1 = *(long *)(param_1 + 0x40);
    FUN_003e8b90();
  } while (iVar1 < 2);
  return;
}


