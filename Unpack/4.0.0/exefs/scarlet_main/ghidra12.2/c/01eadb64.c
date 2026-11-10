/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01eadb64; name: FUN_01eadb64
 */


void FUN_01eadb64(long param_1,long param_2)

{
  size_t __n;
  long *plVar1;
  long lVar2;
  long *__dest;
  long *__src;
  
  __dest = *(long **)(param_1 + 0x90);
  plVar1 = *(long **)(param_1 + 0x98);
  if (__dest != plVar1) {
    do {
      __src = __dest + 2;
      lVar2 = *__dest;
      while (lVar2 == param_2) {
        __n = (long)plVar1 - (long)__src;
        if (__n == 0) {
          *(long **)(param_1 + 0x98) = __dest;
          return;
        }
        memmove(__dest,__src,__n);
        plVar1 = (long *)((long)__dest + __n);
        *(long **)(param_1 + 0x98) = plVar1;
        lVar2 = *__dest;
      }
      __dest = __src;
    } while (__src != plVar1);
  }
  return;
}


