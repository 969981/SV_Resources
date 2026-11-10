/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028baaf0; name: FUN_028baaf0
 */


void FUN_028baaf0(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_047d1f48;
  *param_1 = (long)(PTR_DAT_047d1fb8 + 0x10);
  param_1[0x3d5] = (long)(puVar1 + 0x10);
  FUN_008874d4(param_1 + 0x3d5,0,0xc,0,0,0,1);
  param_1[0x3d9] = -1;
  *(undefined1 *)(param_1 + 0x3d8) = 0;
  FUN_01327a58(param_1 + 0x3af);
  FUN_011949cc(param_1 + 0x3a6);
  FUN_011949c8(param_1 + 0x38b);
  return;
}


