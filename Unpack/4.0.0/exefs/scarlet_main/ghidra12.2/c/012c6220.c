/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012c6220; name: FUN_012c6220
 */


void FUN_012c6220(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 1;
  nn::os::InitializeLightEvent(param_1 + 1,0,1);
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  FUN_012c67fc(param_1 + 3);
  return;
}


