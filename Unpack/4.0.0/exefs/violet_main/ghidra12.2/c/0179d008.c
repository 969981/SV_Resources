/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0179d008; name: FUN_0179d008
 */


long * FUN_0179d008(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    FUN_0179e40c(param_1);
    lVar1 = *param_1;
  }
  *param_1 = *param_2;
  *param_2 = lVar1;
  return param_1;
}


