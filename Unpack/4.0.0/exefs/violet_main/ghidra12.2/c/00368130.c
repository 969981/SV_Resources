/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368130; name: FUN_00368130
 */


int FUN_00368130(long *param_1,long param_2)

{
  void *__s1;
  size_t __n;
  int iVar1;
  
  __s1 = (void *)((long)param_1 + 9);
  __n = param_1[1] & 0xff;
  if (*param_1 != 0) {
    __s1 = (void *)param_1[2];
    __n = param_1[1];
  }
  if (__n == *(size_t *)(param_2 + 8)) {
    if (__n == 0) {
      return 0;
    }
    if (__s1 != (void *)0x0) {
      iVar1 = memcmp(__s1,*(void **)(param_2 + 0x10),__n);
      return iVar1;
    }
  }
  return 1;
}


