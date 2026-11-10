/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0088b138; name: FUN_0088b138
 */


void FUN_0088b138(long param_1)

{
  FUN_00884254();
  *(undefined8 *)(param_1 + 0x3c) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 4;
  *(undefined **)(param_1 + 0x58) = PTR_DAT_047d2018;
  *(undefined4 *)(param_1 + 0x60) = 0x1000000;
  return;
}


