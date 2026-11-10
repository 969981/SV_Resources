/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


