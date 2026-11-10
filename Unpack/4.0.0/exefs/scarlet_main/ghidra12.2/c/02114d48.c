/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02114d48; name: FUN_02114d48
 */


void FUN_02114d48(long param_1,void *param_2,undefined8 param_3,void *param_4,undefined8 param_5)

{
  size_t __n;
  void *pvVar1;
  void *__src;
  
  __src = *(void **)(param_1 + 0x20);
  if (__src == (void *)0x0) {
    FUN_015ab310(param_1,param_2,param_5);
    pvVar1 = (void *)((long)param_2 + 0x18);
  }
  else {
    pvVar1 = param_2;
    if (__src != param_4) {
      memmove(param_2,__src,(long)param_4 - (long)__src);
      pvVar1 = (void *)((long)param_2 + ((long)param_4 - (long)__src));
    }
    FUN_015ab310(param_1,pvVar1,param_5);
    pvVar1 = (void *)((long)pvVar1 + 0x18);
    __n = (long)__src + (*(long *)(param_1 + 0x28) * 0x18 - (long)param_4);
    if (__n != 0) {
      memmove(pvVar1,param_4,__n);
      pvVar1 = (void *)((long)pvVar1 + __n);
    }
    FUN_01792114(param_1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(void **)(param_1 + 0x20) = param_2;
  *(long *)(param_1 + 0x28) = ((long)pvVar1 - (long)param_2 >> 3) * -0x5555555555555555;
  return;
}


