/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b5f684; name: FUN_02b5f684
 */


void FUN_02b5f684(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x2e];
  *param_1 = &PTR_FUN_045a4790;
  param_1[4] = &PTR_LAB_045a4840;
  param_1[5] = &DAT_045a4890;
  param_1[0x2e] = 0;
  if (lVar1 != 0) {
    FUN_01529014(param_1 + 0x2f);
  }
  FUN_017bf0e0(param_1);
  return;
}


