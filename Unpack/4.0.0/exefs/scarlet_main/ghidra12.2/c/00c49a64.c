/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00c49a64; name: FUN_00c49a64
 */


void FUN_00c49a64(undefined8 *param_1)

{
  FUN_00da3348();
  *param_1 = &DAT_045ec5d0;
  param_1[0x6c] = 0;
  param_1[4] = &PTR_LAB_045ec680;
  param_1[5] = &DAT_045ec6d0;
  param_1[0x6d] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 1;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  return;
}


