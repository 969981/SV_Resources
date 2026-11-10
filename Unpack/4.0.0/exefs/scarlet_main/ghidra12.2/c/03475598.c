/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03475598; name: FUN_03475598
 */


void FUN_03475598(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_047c1ff0;
  param_1[1] = &PTR_LAB_047c2250;
  param_1[4] = &PTR_LAB_047c2290;
  param_1[7] = &PTR_FUN_047c2328;
  if ((undefined8 *)param_1[0x1d] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x1e) = 0;
    if (param_1 + 0x1c != (undefined8 *)param_1[0x1d]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1d] = 0;
    *(undefined4 *)((long)param_1 + 0xf4) = 0;
  }
  FUN_034aa790(param_1);
  return;
}


