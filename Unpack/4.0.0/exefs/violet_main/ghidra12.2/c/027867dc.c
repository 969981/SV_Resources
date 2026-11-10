/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027867dc; name: FUN_027867dc
 */


void FUN_027867dc(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[0x77];
  *param_1 = &PTR_FUN_045df760;
  param_1[4] = &PTR_LAB_045df810;
  param_1[5] = &DAT_045df860;
  param_1[0x77] = 0;
  if (lVar1 != 0) {
    FUN_02786830(param_1 + 0x78);
  }
  FUN_02782500(param_1 + 0x6c);
  FUN_01a6aa10(param_1);
  return;
}


