/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007a8bb4; name: FUN_007a8bb4
 */


void FUN_007a8bb4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xf];
  *param_1 = (long)(PTR_DAT_047d0bc0 + 0x10);
  if (lVar1 != 0) {
    FUN_0078cb10(lVar1);
    FUN_007bfaa0(lVar1);
  }
  param_1[0xb] = 0;
  thunk_FUN_0078ccbc(param_1);
  return;
}


