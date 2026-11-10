/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 022524a4; name: FUN_022524a4
 */


void FUN_022524a4(long *param_1)

{
  long lVar1;
  
  FUN_02252c74(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_01311e90(param_1 + 1);
  return;
}


