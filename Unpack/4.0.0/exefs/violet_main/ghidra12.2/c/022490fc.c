/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022490fc; name: FUN_022490fc
 */


void FUN_022490fc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x11f) = param_2 & 1;
  FUN_01520420();
  return;
}


