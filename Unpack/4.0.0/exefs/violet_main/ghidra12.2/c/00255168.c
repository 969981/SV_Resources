/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00255168; name: FUN_00255168
 */


void FUN_00255168(long *param_1)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*param_1 + 0x28))((int)param_1,*(undefined8 *)(param_1[3] + 0x10));
  *(byte *)(param_1 + 0xe) = bVar1 & 1;
  return;
}


