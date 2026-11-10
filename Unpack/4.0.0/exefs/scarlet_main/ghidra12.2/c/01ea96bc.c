/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01ea96bc; name: FUN_01ea96bc
 */


void FUN_01ea96bc(long param_1,short *param_2)

{
  void *__src;
  size_t __n;
  void *pvVar1;
  short sVar2;
  void *__dest;
  
  pvVar1 = *(void **)(param_1 + 0x68);
  if (*(void **)(param_1 + 0x60) != pvVar1) {
    sVar2 = *param_2;
    __dest = *(void **)(param_1 + 0x60);
    do {
      __src = (void *)((long)__dest + 0x10);
      if (*(short *)((long)__dest + 8) == sVar2) {
        do {
          __n = (long)pvVar1 - (long)__src;
          if (__n == 0) {
            *(void **)(param_1 + 0x68) = __dest;
            return;
          }
          memmove(__dest,__src,__n);
          pvVar1 = (void *)((long)__dest + __n);
          *(void **)(param_1 + 0x68) = pvVar1;
          sVar2 = *param_2;
        } while (*(short *)((long)__dest + 8) == sVar2);
      }
      __dest = __src;
    } while (__src != pvVar1);
  }
  return;
}


