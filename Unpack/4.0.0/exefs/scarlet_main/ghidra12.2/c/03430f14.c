/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03430f14; name: FUN_03430f14
 */


void FUN_03430f14(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_047bf6c0;
  if (param_1[7] != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0xb);
    param_1[7] = 0;
    *(undefined4 *)((long)param_1 + 0x44) = 0;
  }
  return;
}


