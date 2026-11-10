/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007c3b34; name: FUN_007c3b34
 */


void FUN_007c3b34(long *param_1)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_047d1070 + 0x10);
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      return;
    }
    FUN_007c2c10(lVar1,param_1);
  }
  param_1[1] = 1;
  return;
}


