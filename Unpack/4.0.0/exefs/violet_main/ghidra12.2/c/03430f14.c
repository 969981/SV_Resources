/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


