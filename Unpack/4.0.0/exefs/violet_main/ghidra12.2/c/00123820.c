/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


