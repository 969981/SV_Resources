/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0346a09c; name: FUN_0346a09c
 */


void FUN_0346a09c(undefined8 *param_1)

{
  param_1[-4] = &PTR_LAB_047c1478;
  param_1[-3] = &PTR_LAB_047c16f0;
  *param_1 = &PTR_LAB_047c1730;
  param_1[3] = &PTR_FUN_047c17c8;
  if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    if (param_1 + 0x1b != (undefined8 *)param_1[0x1c]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x1c] = 0;
    *(undefined4 *)((long)param_1 + 0xec) = 0;
  }
  FUN_034a68b4(param_1 + -4);
  return;
}


