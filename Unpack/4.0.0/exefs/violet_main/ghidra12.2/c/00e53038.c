/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e53038; name: FUN_00e53038
 */


void FUN_00e53038(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  
  FUN_00d1a240(param_1,0x800d8080);
  param_1[0x24] = PTR_DAT_047dd5a0 + 0x10;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x26,0,1);
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  FUN_00e53184(param_1 + 0x2a);
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x30,0,1);
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  FUN_00e53240(param_1 + 0x35);
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = &DAT_cbf29ce484222645;
  param_1[0x3e] = &DAT_03c886bc;
  param_1[0x3f] = 0;
  *param_1 = &DAT_045a0758;
  param_1[4] = &PTR_LAB_045a0908;
  param_1[5] = &DAT_045a0a30;
  param_1[0x24] = &PTR_LAB_045a0ae8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[6] = &PTR_LAB_045a0a88;
  param_1[7] = &PTR_LAB_045a0ab0;
  plVar1 = (long *)*param_2;
  param_1[0x42] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x43] = param_2[1];
  param_1[0x44] = param_2[2];
  param_1[0x45] = param_2[3];
  plVar1 = (long *)param_2[4];
  param_1[0x46] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(int *)(param_1 + 0x47) = (int)param_2[5];
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}


