/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029f3b60; name: FUN_029f3b60
 */


void FUN_029f3b60(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = param_1[7];
  *param_1 = &PTR_FUN_0460b4b0;
  param_1[7] = 0;
  if (lVar1 != 0) {
    FUN_029f3ab4(param_1 + 8);
  }
  lVar1 = param_1[3];
  param_1[3] = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_029f3a08(param_1 + 4);
  return;
}


