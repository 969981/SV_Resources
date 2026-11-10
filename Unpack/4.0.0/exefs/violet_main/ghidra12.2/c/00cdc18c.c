/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cdc18c; name: FUN_00cdc18c
 */


void FUN_00cdc18c(long *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  FUN_0129a6e4();
  puVar1 = PTR_DAT_047e1400;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  auVar2 = NEON_fmov(0x3f800000,4);
  param_1[4] = (long)(puVar1 + 0xd8);
  param_1[5] = (long)(puVar1 + 0x128);
  param_1[0x7b] = auVar2._8_8_;
  param_1[0x7a] = auVar2._0_8_;
  param_1[0x78] = 0x83f800000;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0x3f8000003f800000;
  return;
}


