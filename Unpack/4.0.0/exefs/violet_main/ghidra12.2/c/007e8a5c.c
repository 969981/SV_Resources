/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e8a5c; name: FUN_007e8a5c
 */


void FUN_007e8a5c(long param_1,undefined8 param_2,byte param_3)

{
  *(byte *)(param_1 + 0x38) = param_3 & 1;
  FUN_007e8a68();
  return;
}


