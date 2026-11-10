/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01993584; name: FUN_01993584
 */


void FUN_01993584(long param_1,int *param_2)

{
  int *piVar1;
  int *__dest;
  long lVar2;
  int *piVar3;
  
  __dest = *(int **)(param_1 + 0x98);
  lVar2 = *(long *)(param_1 + 0xa0);
  piVar3 = __dest + lVar2 * 3;
  piVar1 = __dest;
  if (lVar2 != 0) {
    piVar1 = piVar3;
  }
  if (piVar1 != __dest) {
    do {
      if (((*__dest == *param_2) && (__dest[1] == param_2[1])) && (__dest[2] == param_2[2]))
      goto LAB_019935f4;
      __dest = __dest + 3;
    } while (piVar1 != __dest);
    __dest = piVar1;
  }
LAB_019935f4:
  if (piVar1 == __dest) {
    return;
  }
  piVar1 = __dest + 3;
  if (piVar1 != piVar3) {
    memmove(__dest,piVar1,(long)piVar3 - (long)piVar1);
    lVar2 = *(long *)(param_1 + 0xa0);
  }
  *(long *)(param_1 + 0xa0) = lVar2 + -1;
  FUN_018e5fa8(param_1,param_2);
  return;
}


