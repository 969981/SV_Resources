/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


