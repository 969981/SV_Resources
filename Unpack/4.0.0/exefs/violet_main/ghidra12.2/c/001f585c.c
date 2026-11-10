/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f585c; name: FUN_001f585c
 */


void FUN_001f585c(long param_1)

{
  FUN_001f8300(*(undefined8 *)(param_1 + 0xb0));
  FUN_001f8300(*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  FUN_001f8300(*(undefined8 *)(param_1 + 0xa0));
  FUN_001f8300(*(undefined8 *)(param_1 + 0x98));
  FUN_001f57dc(param_1);
  return;
}


