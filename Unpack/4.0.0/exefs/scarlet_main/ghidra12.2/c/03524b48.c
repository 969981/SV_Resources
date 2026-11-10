/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03524b48; name: FUN_03524b48
 */


void FUN_03524b48(undefined8 *param_1)

{
  undefined *puVar1;
  
  param_1[-1] = &PTR_FUN_047c81e0;
  *param_1 = &PTR_FUN_047c84a0;
  param_1[3] = &PTR_FUN_047c84e0;
  param_1[6] = &PTR_LAB_047c8578;
  param_1[0x27] = &PTR_LAB_047c85a0;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[0x2e] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2f] != 0) {
    (**(code **)(puVar1 + 0x30))(2);
    param_1[0x2f] = 0;
  }
  if (param_1[0x2b] != 0) {
    (**(code **)(puVar1 + 0x30))(1);
  }
  FUN_0352d2a0(param_1 + -1);
  return;
}


