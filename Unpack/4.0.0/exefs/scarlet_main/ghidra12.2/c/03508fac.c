/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03508fac; name: FUN_03508fac
 */


void FUN_03508fac(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_047c6690;
  puVar1 = PTR_DAT_047e2fd0;
  if (param_1[2] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
  }
  if (param_1[7] != 0) {
    (**(code **)(puVar1 + 0x30))(5);
  }
  if (param_1[8] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03509070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 0x30))(5);
  return;
}


