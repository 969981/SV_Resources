/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ef63d0; name: FUN_01ef63d0
 */


void FUN_01ef63d0(undefined8 *param_1,byte param_2)

{
  FUN_01870100();
  *param_1 = &PTR_LAB_045e02c0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = &PTR_LAB_045e0340;
  param_1[5] = &PTR_LAB_045e0390;
  *(byte *)((long)param_1 + 0x54) = param_2 & 1;
  return;
}


