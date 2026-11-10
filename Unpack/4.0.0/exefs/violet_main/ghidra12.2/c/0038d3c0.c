/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0038d3c0; name: FUN_0038d3c0
 */


void * FUN_0038d3c0(char *param_1,int param_2,ulong param_3)

{
  size_t sVar1;
  size_t __n;
  void *__s;
  
  __n = strlen(param_1);
  sVar1 = __n;
  if (__n <= param_3) {
    sVar1 = param_3;
  }
  __s = (void *)FUN_0038c780(sVar1 + 1);
  memset(__s,param_2,sVar1 - __n);
  memcpy((undefined1 *)((long)__s + sVar1) + -__n,param_1,__n);
  *(undefined1 *)((long)__s + sVar1) = 0;
  return __s;
}


