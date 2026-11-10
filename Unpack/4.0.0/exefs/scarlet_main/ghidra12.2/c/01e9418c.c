/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e9418c; name: FUN_01e9418c
 */


void FUN_01e9418c(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *__dest;
  long lVar3;
  
  __dest = *(long **)(param_1 + 0xa8);
  lVar3 = *(long *)(param_1 + 0xb0);
  plVar1 = __dest + lVar3;
  plVar2 = __dest;
  if (lVar3 != 0) {
    plVar2 = plVar1;
  }
  if ((plVar2 != __dest) && (*__dest != param_2)) {
    do {
      __dest = __dest + 1;
      if (plVar2 == __dest) {
        __dest = plVar2;
        goto LAB_01e941e8;
      }
    } while (*__dest != param_2);
  }
LAB_01e941e8:
  if (plVar2 != __dest) {
    plVar2 = __dest + 1;
    if (plVar2 != plVar1) {
      memmove(__dest,plVar2,(long)plVar1 - (long)plVar2);
      lVar3 = *(long *)(param_1 + 0xb0);
    }
    *(long *)(param_1 + 0xb0) = lVar3 + -1;
  }
  return;
}


