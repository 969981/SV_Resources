/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaad1c; name: FUN_01eaad1c
 */


void FUN_01eaad1c(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long lVar2;
  long *__dest;
  long *__src;
  
  __dest = *(long **)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x68);
  if (__dest != plVar1) {
    do {
      __src = __dest + 2;
      lVar2 = *__dest;
      while (lVar2 == param_2) {
        __n = (long)plVar1 - (long)__src;
        if (__n == 0) {
          *(long **)(param_1 + 0x68) = __dest;
          return;
        }
        memmove(__dest,__src,__n);
        plVar1 = (long *)((long)__dest + __n);
        *(long **)(param_1 + 0x68) = plVar1;
        lVar2 = *__dest;
      }
      __dest = __src;
    } while (__src != plVar1);
  }
  return;
}


