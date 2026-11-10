/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003d96b0; name: FUN_003d96b0
 */


bool FUN_003d96b0(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined2 *puVar5;
  long lVar6;
  
  if (param_3 == -1) {
    return true;
  }
  iVar2 = FUN_0048c930(param_2);
  if (param_3 != 0) {
    return iVar2 == param_3;
  }
  if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
       (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
     (*(long *)(*(long *)(param_1 + 0xa8) + 0x2f0) != 0)) {
    lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x300);
    if (lVar6 != 0) {
      puVar5 = *(undefined2 **)(*(long *)(param_1 + 0xa8) + 0x2f0);
      while ((lVar3 = FUN_003d62c0(*puVar5), lVar3 == 0 || (iVar2 != *(int *)(lVar3 + 0x1c)))) {
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 1;
        if (lVar6 == 0) {
          return false;
        }
      }
      return true;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x1988);
    if (lVar6 != 0) {
      plVar4 = *(long **)(param_1 + 0x1980);
      do {
        if ((*plVar4 != 0) && (iVar2 == *(int *)(*plVar4 + 0x1c))) {
          return true;
        }
        lVar6 = lVar6 + -1;
        plVar4 = plVar4 + 1;
      } while (lVar6 != 0);
    }
  }
  return false;
}


