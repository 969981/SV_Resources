/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007eeba8; name: FUN_007eeba8
 */


void FUN_007eeba8(long param_1,uint param_2)

{
  if (0xffffffe < param_2) {
    param_2 = 0xfffffff;
  }
  *(uint *)(param_1 + 0x60) = param_2;
  return;
}


