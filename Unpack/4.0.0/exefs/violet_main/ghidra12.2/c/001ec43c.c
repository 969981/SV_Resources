/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001ec43c; name: FUN_001ec43c
 */


long FUN_001ec43c(char *param_1,size_t param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (param_1 != (char *)0x0) {
    iVar1 = snprintf(param_1,param_2,"nn::ssl");
    lVar2 = (long)iVar1;
  }
  return lVar2;
}


