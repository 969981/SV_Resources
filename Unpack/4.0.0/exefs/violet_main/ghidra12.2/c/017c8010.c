/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017c8010; name: FUN_017c8010
 */


void FUN_017c8010(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  param_1[5] = 0;
  param_1[4] = 0;
  FUN_01365a38();
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[6] = *(undefined8 *)(param_2 + 0x10);
  param_1[7] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0;
  param_1[8] = uVar1;
  *param_1 = &LAB_01864fb4;
  param_1[1] = FUN_028fd210;
  param_1[2] = FUN_028fd380;
  param_1[3] = FUN_028fd460;
  return;
}


