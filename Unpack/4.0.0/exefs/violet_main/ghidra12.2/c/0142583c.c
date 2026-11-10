/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0142583c; name: FUN_0142583c
 */


void FUN_0142583c(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1[0x42];
  *param_1 = (long)&DAT_045a1428;
  param_1[4] = (long)&PTR_LAB_045a14c0;
  param_1[5] = (long)&DAT_045a1510;
  param_1[0x42] = 0;
  if (lVar2 != 0) {
    FUN_01425954(param_1 + 0x43);
  }
  puVar1 = PTR_DAT_047d9260;
  *param_1 = (long)(PTR_DAT_047d9260 + 0x10);
  param_1[4] = (long)(puVar1 + 0xa8);
  param_1[5] = (long)(puVar1 + 0xf8);
  FUN_014258b4(param_1 + 0x3e,0);
  FUN_00db9ce0(param_1);
  return;
}


