/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028997dc; name: FUN_028997dc
 */


void FUN_028997dc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[10];
  *param_1 = &PTR_FUN_045e4b50;
  param_1[4] = &PTR_LAB_045e4bd0;
  param_1[5] = &PTR_LAB_045e4c20;
  param_1[10] = 0;
  if (lVar1 != 0) {
    FUN_02858bdc(param_1 + 0xb);
  }
  FUN_016c9dc0(param_1);
  return;
}


