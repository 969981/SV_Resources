/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00273fd8; name: FUN_00273fd8
 */


void FUN_00273fd8(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[1] - lVar1;
  *param_2 = lVar2 >> 5;
  if (lVar2 != 0) {
    param_2[1] = lVar1;
  }
  return;
}


