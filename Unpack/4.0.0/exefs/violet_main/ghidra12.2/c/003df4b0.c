/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003df4b0; name: FUN_003df4b0
 */


int FUN_003df4b0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1 - *param_2;
  if ((iVar1 == 0) &&
     (iVar1 = memcmp(*(void **)(param_1 + 2),*(void **)(param_2 + 2),(long)*param_1), iVar1 == 0)) {
    return param_1[1] - param_2[1];
  }
  return iVar1;
}


