/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0155ced8; name: FUN_0155ced8
 */


void FUN_0155ced8(long param_1,ulong param_2)

{
  *(ulong *)(*(long *)(param_1 + 0x120) + 0x108) =
       *(ulong *)(*(long *)(param_1 + 0x120) + 0x108) & 0xfffffffffffffffe | param_2 & 1;
  return;
}


