/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0101ae08; name: FUN_0101ae08
 */


void FUN_0101ae08(undefined8 *param_1)

{
  FUN_0101ae58();
  *param_1 = &PTR_FUN_04563410;
  param_1[0x18] = 0;
  param_1[4] = &PTR_LAB_04563488;
  param_1[5] = &DAT_045634d8;
  *(undefined4 *)((long)param_1 + 0xd4) = 1;
  nn::os::InitializeLightEvent(param_1 + 0x19,0,1);
  return;
}


