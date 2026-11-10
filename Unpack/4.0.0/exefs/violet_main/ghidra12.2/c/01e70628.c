/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e70628; name: FUN_01e70628
 */


undefined1 FUN_01e70628(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 3);
}


