/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029a5100; name: FUN_029a5100
 */


void FUN_029a5100(undefined8 *param_1)

{
  FUN_00d1a22c(param_1,0xc);
  *param_1 = &PTR_FUN_04601940;
  param_1[4] = &PTR_LAB_04601a88;
  param_1[5] = &DAT_04601bb0;
  param_1[6] = &PTR_LAB_04601c08;
  param_1[7] = &PTR_LAB_04601c30;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x27,0,1);
  *(undefined2 *)(param_1 + 0x29) = 0;
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


