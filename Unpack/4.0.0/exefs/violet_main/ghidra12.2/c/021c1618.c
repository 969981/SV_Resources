/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 021c1618; name: FUN_021c1618
 */


void FUN_021c1618(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_045a3800;
  param_1[4] = &PTR_LAB_045a3948;
  param_1[5] = &DAT_045a3a70;
  param_1[6] = &PTR_LAB_045a3ac8;
  param_1[7] = &PTR_LAB_045a3af0;
  if (param_1[0x24] != 0) {
    FUN_012c4338();
  }
  FUN_00e6bfa4(param_1);
  return;
}


