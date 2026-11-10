/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017cf2f0; name: FUN_017cf2f0
 */


void FUN_017cf2f0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_017cf338();
  *param_1 = &PTR_LAB_045cf700;
  param_1[4] = &PTR_LAB_045cf730;
  uVar1 = FUN_017cf404();
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 5) = uVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


