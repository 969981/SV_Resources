/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01787874; name: FUN_01787874
 */


void FUN_01787874(long *param_1)

{
  long lVar1;
  
  FUN_01787e00(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_01787ff8(param_1 + 1);
  return;
}


