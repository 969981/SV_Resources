/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018a2d8c; name: FUN_018a2d8c
 */


void FUN_018a2d8c(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    param_2 = (char *)0x0;
  }
  else {
    sVar1 = strlen(param_2);
    param_2 = param_2 + sVar1;
  }
  param_1[1] = param_2;
  return;
}


