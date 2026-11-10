/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012c05b8; name: FUN_012c05b8
 */


void FUN_012c05b8(undefined8 *param_1)

{
  FUN_012c0630(param_1,0);
  *param_1 = &PTR_FUN_045ebd38;
  param_1[0x70] = 0;
  param_1[4] = &PTR_LAB_045ebde8;
  param_1[5] = &DAT_045ebe38;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  FUN_012c0688(param_1 + 0x83);
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x87),1,1);
  param_1[0x8d] = 0;
  FUN_012c4cfc(param_1);
  return;
}


