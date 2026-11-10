/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0282e9a8; name: FUN_0282e9a8
 */


void FUN_0282e9a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01870100();
  *param_1 = &PTR_FUN_045e3e38;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[4] = &PTR_LAB_045e3eb8;
  param_1[5] = &PTR_LAB_045e3f08;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[0xb] = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[0xc] = param_2[1];
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  return;
}


