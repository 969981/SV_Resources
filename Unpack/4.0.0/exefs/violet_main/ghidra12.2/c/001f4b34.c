/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f4b34; name: FUN_001f4b34
 */


undefined8 FUN_001f4b34(long param_1)

{
  if ((*(byte *)(param_1 + 0xd) >> 5 & 1) == 0) {
    FUN_001eda20();
  }
  else {
    FUN_001f4af4(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return 0;
}


