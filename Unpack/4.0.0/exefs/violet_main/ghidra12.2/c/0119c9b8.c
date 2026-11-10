/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119c9b8; name: FUN_0119c9b8
 */


void FUN_0119c9b8(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x139) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x13c) = 1;
  FUN_0119c9d8(param_1,1);
  return;
}


