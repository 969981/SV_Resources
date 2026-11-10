/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124e550; name: FUN_0124e550
 */


bool FUN_0124e550(long param_1,long param_2)

{
  if ((*(byte *)(*(long *)(param_1 + 0x38) + 0x49b) & 1) == 0) {
    return *(int *)(*(long *)(param_2 + 0x70) + 0xcc) == 0;
  }
  return false;
}


