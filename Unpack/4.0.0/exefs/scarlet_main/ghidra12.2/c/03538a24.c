/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03538a24; name: FUN_03538a24
 */


void FUN_03538a24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_047c9838;
  FUN_034e4a84(*(undefined8 *)PTR_DAT_047e7098,param_1);
  FUN_034dcf30(*(undefined8 *)PTR_DAT_047e7050,param_1);
  if (param_1[3] != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    param_1[3] = 0;
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  (**(code **)(*(long *)param_1[2] + 0x30))();
  param_1[2] = 0;
  return;
}


