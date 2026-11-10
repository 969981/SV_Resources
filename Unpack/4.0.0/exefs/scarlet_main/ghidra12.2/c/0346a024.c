/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0346a024; name: FUN_0346a024
 */


void FUN_0346a024(undefined8 *param_1)

{
  param_1[-1] = &PTR_LAB_047c1478;
  *param_1 = &PTR_LAB_047c16f0;
  param_1[3] = &PTR_LAB_047c1730;
  param_1[6] = &PTR_FUN_047c17c8;
  if ((undefined8 *)param_1[0x1f] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (param_1 + 0x1e != (undefined8 *)param_1[0x1f]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1f] = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
  }
  FUN_034a68b4(param_1 + -1);
  return;
}


