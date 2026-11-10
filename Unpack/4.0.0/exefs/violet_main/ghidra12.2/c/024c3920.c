/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024c3920; name: FUN_024c3920
 */


void FUN_024c3920(long *param_1)

{
  long lVar1;
  
  FUN_024c3960(param_1,param_1[6]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_024c3a10(param_1 + 1);
  return;
}


