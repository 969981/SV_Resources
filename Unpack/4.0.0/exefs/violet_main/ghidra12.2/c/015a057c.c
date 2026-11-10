/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015a057c; name: FUN_015a057c
 */


void FUN_015a057c(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x130) =
       *(ulong *)(param_1 + 0x130) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  return;
}


