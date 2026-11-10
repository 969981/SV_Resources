/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007ab950; name: FUN_007ab950
 */


void FUN_007ab950(long param_1,uint param_2,int param_3)

{
  if (*(int *)(param_1 + 0x58) == param_3) {
    *(uint *)(param_1 + 0x80) =
         *(uint *)(param_1 + 0x80) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}


