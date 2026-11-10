/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c1b88; name: FUN_017c1b88
 */


undefined1 FUN_017c1b88(long param_1)

{
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x370);
}


