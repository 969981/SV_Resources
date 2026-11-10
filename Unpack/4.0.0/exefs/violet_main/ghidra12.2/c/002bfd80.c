/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002bfd80; name: FUN_002bfd80
 */


void FUN_002bfd80(long param_1)

{
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_0036f390(*(undefined8 *)(*(long *)(param_1 + 0xa0) + 0x18));
  return;
}


