/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c9768; name: FUN_012c9768
 */


void FUN_012c9768(long param_1)

{
  long lVar1;
  
  do {
    lVar1 = param_1;
    param_1 = lVar1;
    if (*(long *)(lVar1 + 0x1a8) != 0) {
      param_1 = *(long *)(lVar1 + 0x1a8);
    }
  } while (param_1 != lVar1);
  if ((*(byte *)(lVar1 + 0x1b8) >> 4 & 1) == 0) {
    return;
  }
  FUN_012c4ab0(lVar1 + 0x1f0);
  return;
}


