/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ab544; name: FUN_007ab544
 */


void FUN_007ab544(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x14];
  *param_1 = (long)(PTR_DAT_047d0ca0 + 0x10);
  if (lVar1 != 0) {
    FUN_007bfae0(lVar1);
    FUN_007bfaa0(lVar1);
    param_1[0x14] = 0;
  }
  if (param_1[0x13] != 0) {
    FUN_007bfaa0();
    param_1[0x13] = 0;
  }
  param_1[0x15] = 0;
  thunk_FUN_0078ccbc(param_1);
  operator_delete(param_1);
  return;
}


