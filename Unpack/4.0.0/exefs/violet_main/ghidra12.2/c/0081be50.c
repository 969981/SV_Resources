/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0081be50; name: FUN_0081be50
 */


void FUN_0081be50(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  *param_1 = (long)(PTR_DAT_047d1928 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_0049e800(lVar1);
  FUN_0049e7e0(PTR_LAB_047cba48,lVar1);
  return;
}


