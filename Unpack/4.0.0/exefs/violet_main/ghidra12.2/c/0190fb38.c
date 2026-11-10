/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0190fb38; name: FUN_0190fb38
 */


void FUN_0190fb38(long param_1,undefined8 param_2)

{
  void *__src;
  long lVar1;
  size_t __n;
  void *__dest;
  
  __dest = (void *)FUN_0190fba0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0),
                                param_2);
  lVar1 = *(long *)(param_1 + 0xb0) - (long)__dest;
  if (lVar1 != 0) {
    __src = (void *)((long)__dest + lVar1);
    __n = *(long *)(param_1 + 0xb0) - (long)__src;
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    *(size_t *)(param_1 + 0xb0) = (long)__dest + __n;
  }
  return;
}


