/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00123820; name: FUN_00123820
 */


void FUN_00123820(long param_1,char *param_2)

{
  size_t __n;
  void *__dest;
  
  __n = strlen(param_2);
  if (__n != 0) {
    __dest = (void *)FUN_00124470(param_1,__n,0xffffffff);
    memcpy(__dest,param_2,__n);
    *(size_t *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + __n;
  }
  return;
}


