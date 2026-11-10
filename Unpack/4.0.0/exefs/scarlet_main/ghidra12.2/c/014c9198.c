/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014c9198; name: FUN_014c9198
 */


void FUN_014c9198(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  FUN_014c92ec();
  param_1[8] = 0;
  *param_1 = &PTR_LAB_0456fe28;
  param_1[4] = &PTR_LAB_0456fe58;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_014c9228();
  uVar1 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],(long)param_2 * 0x30,0x10);
  param_1[6] = uVar1;
  *(int *)(param_1 + 7) = param_2;
  return;
}


