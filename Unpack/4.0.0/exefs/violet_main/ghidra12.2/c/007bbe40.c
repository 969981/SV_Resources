/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007bbe40; name: FUN_007bbe40
 */


void FUN_007bbe40(long *param_1)

{
  FUN_007a5da0();
  *param_1 = (long)(PTR_DAT_047d0f30 + 0x10);
  FUN_02858900(param_1 + 0x1a);
  FUN_028588d8(param_1 + 0x61);
  param_1[0x61] = (long)(PTR_DAT_047d0f00 + 0x10);
  FUN_02899764(param_1 + 100);
  param_1[100] = (long)(PTR_DAT_047d0f38 + 0x10);
  FUN_0284f648(param_1 + 0x68);
  param_1[0x65] = (long)(param_1 + 0x68);
  FUN_0285893c(param_1 + 0xc3);
  param_1[0x107] = 0;
  return;
}


