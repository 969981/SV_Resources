/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038ccb0; name: FUN_0038ccb0
 */


void * FUN_0038ccb0(char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  if (param_1 == (char *)0x0) {
    return (void *)0x0;
  }
  sVar1 = strlen(param_1);
  __dest = (void *)FUN_0038c780(sVar1 + 1);
  memcpy(__dest,param_1,sVar1 + 1);
  return __dest;
}


