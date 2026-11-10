/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0188bc48; name: FUN_0188bc48
 */


undefined1 FUN_0188bc48(long param_1)

{
  if (*(byte *)(param_1 + 0x3a) == 0) {
    return 6;
  }
  return *(undefined1 *)(param_1 + (ulong)(*(byte *)(param_1 + 0x3a) - 1) + 0x1c);
}


