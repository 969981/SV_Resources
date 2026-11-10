/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e42d64; name: FUN_00e42d64
 */


void FUN_00e42d64(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (0 < *(int *)(param_1 + 8)) {
    lVar1 = 0;
    lVar2 = 0x110;
    do {
      FUN_008edc68(*(long *)(param_1 + 0x10) + lVar2);
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x9e8;
    } while (lVar1 < *(int *)(param_1 + 8));
  }
  return;
}


