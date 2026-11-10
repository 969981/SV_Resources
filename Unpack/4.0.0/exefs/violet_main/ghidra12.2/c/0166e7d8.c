/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0166e7d8; name: FUN_0166e7d8
 */


void FUN_0166e7d8(undefined8 *param_1,undefined8 param_2)

{
  FUN_00da3348(param_1,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *param_1 = &PTR_FUN_045abbc8;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[4] = &PTR_LAB_045abc78;
  param_1[5] = &DAT_045abcc8;
  FUN_0166e868(param_1 + 0x80);
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x87),1,1);
  param_1[0x8d] = 0;
  FUN_0166e9a4(param_1,param_2);
  return;
}


