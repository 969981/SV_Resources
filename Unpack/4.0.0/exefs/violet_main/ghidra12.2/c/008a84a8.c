/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008a84a8; name: FUN_008a84a8
 */


int FUN_008a84a8(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return 0;
  }
  return (uint)*(ushort *)(*(long *)(param_1 + 0xa8) + 8) - (uint)(*(int *)(param_1 + 0x60) != 0);
}


