/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0322b50c; name: FUN_0322b50c
 */


long FUN_0322b50c(long param_1,void *param_2,size_t param_3)

{
  char cVar1;
  void *__dest;
  long lVar2;
  void *__src;
  long lVar3;
  size_t __n;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(param_1 + 0x30);
  __n = *(long *)(param_1 + 0x38) - *plVar6;
  __src = (void *)(*(long *)(param_1 + 0x28) + *plVar6);
  if ((long)__n < (long)param_3) {
    lVar3 = 0;
    __dest = param_2;
    do {
      memcpy(__dest,__src,__n);
      *plVar6 = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      plVar4 = *(long **)(param_1 + 0x18);
      lVar7 = *(long *)(param_1 + 0x28);
      lVar5 = *(long *)(param_1 + 0x40);
      lVar3 = lVar3 + __n;
      cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (lVar5 == 0) {
        return lVar3;
      }
      if (cVar1 == '\0') {
        return lVar3;
      }
      param_3 = param_3 - __n;
      __n = 0;
      do {
        lVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,__n + lVar7,lVar5);
        if (lVar2 == 0) break;
        lVar5 = lVar5 - lVar2;
        __n = lVar2 + __n;
      } while (lVar5 != 0);
      if (__n == 0) {
        return lVar3;
      }
      __dest = (void *)(lVar3 + (long)param_2);
      __src = (void *)(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30));
      *(size_t *)(param_1 + 0x38) = __n;
    } while ((long)__n < (long)param_3);
    param_2 = __dest;
  }
  else {
    lVar3 = 0;
  }
  memcpy(param_2,__src,param_3);
  *plVar6 = *plVar6 + param_3;
  return lVar3 + param_3;
}


