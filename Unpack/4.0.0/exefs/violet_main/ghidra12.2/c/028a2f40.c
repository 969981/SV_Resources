/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a2f40; name: FUN_028a2f40
 */


void FUN_028a2f40(long *param_1)

{
  long lVar1;
  
  FUN_028a3ba8(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_028a3d80(param_1 + 1);
  return;
}


