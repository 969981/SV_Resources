/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0275943c; name: FUN_0275943c
 */


void FUN_0275943c(undefined8 *param_1,long *param_2)

{
  FUN_00d1a240(param_1,0x80098080);
  *param_1 = &PTR_FUN_045db540;
  param_1[0x26] = 0;
  param_1[4] = &PTR_LAB_045db680;
  param_1[5] = &DAT_045db7a8;
  param_1[6] = &PTR_LAB_045db800;
  param_1[7] = &PTR_LAB_045db828;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_027594b8(param_1 + 0x27);
  param_1[0x2b] = param_2;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x58))(param_2);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


