/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007f72b0; name: FUN_007f72b0
 */


undefined8 FUN_007f72b0(long param_1)

{
  if (*(long *)(param_1 + 0x70) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x70) + 8);
}


