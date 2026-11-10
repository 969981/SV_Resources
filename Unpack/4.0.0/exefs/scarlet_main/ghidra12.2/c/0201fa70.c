/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0201fa70; name: FUN_0201fa70
 */


void FUN_0201fa70(ulong *param_1,ulong *param_2)

{
  char *__s;
  size_t sVar1;
  void *__dest;
  
  *param_1 = 0;
  __s = (char *)(*param_2 & 0xfffffffffffffffe);
  if (__s != (char *)0x0) {
    sVar1 = strlen(__s);
    sVar1 = (size_t)((int)sVar1 + 1);
    __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,sVar1);
    memcpy(__dest,__s,sVar1);
    *param_1 = (ulong)__dest | 1;
  }
  return;
}


