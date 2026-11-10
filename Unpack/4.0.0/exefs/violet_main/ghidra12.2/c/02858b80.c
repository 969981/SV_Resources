/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02858b80; name: FUN_02858b80
 */


void FUN_02858b80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01870100();
  *param_1 = &PTR_FUN_045e4b50;
  param_1[4] = &PTR_LAB_045e4bd0;
  param_1[5] = &PTR_LAB_045e4c20;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[10] = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[0xb] = param_2[1];
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  *(undefined4 *)(param_1 + 0xe) = 0;
  return;
}


