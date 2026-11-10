/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012ea3bc; name: FUN_012ea3bc
 */


void FUN_012ea3bc(undefined8 *param_1,undefined8 param_2)

{
  FUN_00da3348(param_1,*(undefined8 *)PTR_DAT_047d8d98);
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *param_1 = &PTR_FUN_045a1ad0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[4] = &PTR_LAB_045a1b80;
  param_1[5] = &DAT_045a1bd0;
  FUN_012ea458(param_1 + 0x83);
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x87),1,1);
  param_1[0x8d] = 0;
  FUN_012ea954(param_1,param_2);
  return;
}


