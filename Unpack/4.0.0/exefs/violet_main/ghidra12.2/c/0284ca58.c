/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0284ca58; name: FUN_0284ca58
 */


void FUN_0284ca58(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0xb];
  *param_1 = &PTR_FUN_045e3e38;
  param_1[4] = &PTR_LAB_045e3eb8;
  param_1[5] = &PTR_LAB_045e3f08;
  param_1[0xb] = 0;
  if (lVar1 != 0) {
    FUN_027e5e74(param_1 + 0xc);
  }
  FUN_016c9dc0(param_1);
  return;
}


