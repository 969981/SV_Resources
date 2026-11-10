/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03469fb0; name: FUN_03469fb0
 */


void FUN_03469fb0(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_047c1478;
  param_1[1] = &PTR_LAB_047c16f0;
  param_1[4] = &PTR_LAB_047c1730;
  param_1[7] = &PTR_FUN_047c17c8;
  if ((undefined8 *)param_1[0x20] != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (param_1 + 0x1f != (undefined8 *)param_1[0x20]) {
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    }
    param_1[0x20] = 0;
    *(undefined4 *)((long)param_1 + 0x10c) = 0;
  }
  FUN_034a68b4(param_1);
  return;
}


