/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026eb0c0; name: FUN_026eb0c0
 */


void FUN_026eb0c0(undefined8 *param_1)

{
  FUN_026d505c();
  *param_1 = &PTR_FUN_045cdcd8;
  param_1[4] = &PTR_LAB_045cde78;
  param_1[5] = &DAT_045cdfa0;
  param_1[6] = &PTR_LAB_045cdff8;
  param_1[7] = &PTR_LAB_045ce020;
  memset((void *)((long)param_1 + 0x134),0,0x218);
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0x7ffffffffffffff;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x6d] = param_1[1];
  FUN_00c6a514(param_1 + 7,0x82);
  return;
}


