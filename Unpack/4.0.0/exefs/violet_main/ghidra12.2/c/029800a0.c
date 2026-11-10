/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029800a0; name: FUN_029800a0
 */


void FUN_029800a0(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x90) = *(ulong *)(param_1 + 0x90) | 1L << (param_2 & 0x3f);
  return;
}


