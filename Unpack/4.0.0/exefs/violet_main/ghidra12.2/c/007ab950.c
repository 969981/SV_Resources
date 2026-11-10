/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


