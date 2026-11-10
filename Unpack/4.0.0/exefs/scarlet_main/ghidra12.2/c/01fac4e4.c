/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01fac4e4; name: FUN_01fac4e4
 */


void FUN_01fac4e4(undefined8 *param_1)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_045692f0;
  param_1[4] = &PTR_LAB_04569370;
  param_1[5] = &DAT_045693c0;
  pcVar1 = (code *)param_1[0x161];
  if (pcVar1 != (code *)0x0) {
    param_1[0x163] = 0;
    param_1[0x162] = 0;
    param_1[0x161] = 0;
    param_1[0x160] = 0;
    (*pcVar1)(param_1 + 0x164);
  }
  FUN_00db239c(param_1 + 0x151);
  FUN_00db239c(param_1 + 0x149);
  FUN_00db239c(param_1 + 0x13e);
  FUN_00db239c(param_1 + 0x136);
  FUN_01922808(param_1 + 0x10);
  FUN_01922a20(param_1);
  return;
}


