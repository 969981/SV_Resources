/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0178d8b8; name: FUN_0178d8b8
 */


void FUN_0178d8b8(long param_1,void *param_2,undefined8 param_3,void *param_4)

{
  size_t __n;
  void *__dest;
  void *__src;
  
  __src = *(void **)(param_1 + 0x20);
  __dest = param_2;
  if (__src != (void *)0x0 && __src != param_4) {
    memmove(param_2,__src,(long)param_4 - (long)__src);
    __dest = (void *)((long)param_2 + ((long)param_4 - (long)__src));
  }
  if (__src != (void *)0x0) {
    __n = (long)__src + (*(long *)(param_1 + 0x28) * 0xc - (long)param_4);
    if (__n != 0) {
      memmove(__dest,param_4,__n);
      __dest = (void *)((long)__dest + __n);
    }
    FUN_017921a0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(void **)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = ((long)__dest - (long)param_2 >> 2) * -0x5555555555555555;
  return;
}


