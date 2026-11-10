/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0040c2f0; name: FUN_0040c2f0
 */


void FUN_0040c2f0(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & (param_2 ^ 0xffffffff);
  return;
}


