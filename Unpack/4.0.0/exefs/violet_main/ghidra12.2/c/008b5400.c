/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008b5400; name: FUN_008b5400
 */


void FUN_008b5400(char *param_1)

{
  size_t sVar1;
  char *__dest;
  
  sVar1 = strlen(param_1);
  __dest = (char *)FUN_00896e78(sVar1 + 1);
  strncpy(__dest,param_1,sVar1 + 1);
  return;
}


