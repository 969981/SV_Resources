/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e21c18; name: FUN_01e21c18
 */


void FUN_01e21c18(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if ((param_3 >> (ulong)((uint)lVar1 & 0x1f) & 1) != 0) {
      *(uint *)(param_1 + 0xa0 + lVar1 * 4) = *(uint *)(param_1 + 0xa0 + lVar1 * 4) & ~param_2;
    }
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x20);
  return;
}


