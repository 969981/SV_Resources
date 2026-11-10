/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 012b1c24; name: FUN_012b1c24
 */


void FUN_012b1c24(long param_1,void *param_2,void *param_3)

{
  size_t __n;
  void *__dest;
  void *__src;
  
  __src = *(void **)(param_1 + 0x20);
  __dest = param_2;
  if (__src != (void *)0x0 && __src != param_3) {
    memmove(param_2,__src,(long)param_3 - (long)__src);
    __dest = (void *)((long)param_2 + ((long)param_3 - (long)__src));
  }
  if (__src != (void *)0x0) {
    __n = (long)__src + (*(long *)(param_1 + 0x28) * 8 - (long)param_3);
    if (__n != 0) {
      memmove(__dest,param_3,__n);
      __dest = (void *)((long)__dest + __n);
    }
    FUN_012d49d0(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(void **)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = (long)__dest - (long)param_2 >> 3;
  *(undefined8 *)(param_1 + 0x30) = 0x18;
  return;
}


