/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b0884; name: FUN_012b0884
 */


void FUN_012b0884(undefined8 *param_1)

{
  FUN_012b100c();
  *param_1 = &PTR_FUN_045ac088;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = &PTR_LAB_045ac0b8;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0xa00000000;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  return;
}


