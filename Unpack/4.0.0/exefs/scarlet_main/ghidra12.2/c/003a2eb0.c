/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2eb0; name: FUN_003a2eb0
 */


long FUN_003a2eb0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    lVar2 = *(long *)(lVar2 + 0x10);
    lVar1 = lVar1 + 1;
  } while (lVar2 != 0);
  return lVar1;
}


