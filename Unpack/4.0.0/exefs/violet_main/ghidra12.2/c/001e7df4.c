/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001e7df4; name: FUN_001e7df4
 */


void FUN_001e7df4(long param_1)

{
  size_t sVar1;
  char *__s;
  
  if ((((param_1 != 0) && (__s = *(char **)(param_1 + 0x10), __s != (char *)0x0)) &&
      (sVar1 = strlen(__s), sVar1 != 0)) && (__s[sVar1 - 1] == '.')) {
    __s[sVar1 - 1] = '\0';
  }
  return;
}


