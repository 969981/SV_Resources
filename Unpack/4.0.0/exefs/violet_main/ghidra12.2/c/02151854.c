/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02151854; name: FUN_02151854
 */


void FUN_02151854(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0xd0) = *(ulong *)(param_1 + 0xd0) & 0xfffffffffffffffe | param_2 & 1;
  return;
}


