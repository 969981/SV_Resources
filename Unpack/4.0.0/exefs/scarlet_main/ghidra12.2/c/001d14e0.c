/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d14e0; name: FUN_001d14e0
 */


void FUN_001d14e0(long param_1,byte param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0xe0);
    if ((lVar1 != 0) || (lVar1 = *(long *)(param_1 + 0xd8), lVar1 != 0)) {
      *(byte *)(lVar1 + 0x1e0) = param_2 & 1;
    }
  }
  return;
}


