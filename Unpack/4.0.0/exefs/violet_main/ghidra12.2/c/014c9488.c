/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 014c9488; name: FUN_014c9488
 */


void FUN_014c9488(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_014c95a4();
  param_1[8] = 0;
  *param_1 = &PTR_LAB_0456ff30;
  param_1[4] = &PTR_LAB_0456ff60;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_014c9518();
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],(long)param_2 * 0x30,0x10);
  param_1[6] = uVar1;
  *(int *)(param_1 + 7) = param_2;
  return;
}


