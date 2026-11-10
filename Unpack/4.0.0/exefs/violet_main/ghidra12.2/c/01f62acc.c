/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f62acc; name: FUN_01f62acc
 */


void FUN_01f62acc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[8];
  *param_1 = &DAT_045587f0;
  param_1[6] = &PTR_LAB_04558870;
  param_1[4] = &PTR_LAB_04558838;
  param_1[5] = &PTR_LAB_04558858;
  param_1[8] = 0;
  if (lVar1 != 0) {
    FUN_01f5f434(param_1 + 9);
  }
  FUN_01f5f8cc(param_1 + 7);
  return;
}


