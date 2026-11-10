/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b46b0; name: FUN_003b46b0
 */


long FUN_003b46b0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    if (param_2 != 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      if ((*(int *)(param_1 + 200) != 0) &&
         ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0 ||
           (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)))) {
        return *(long *)(*(long *)(param_1 + 0x5d0) + 0x218);
      }
      goto LAB_003b4790;
    }
  }
  iVar1 = FUN_003c3900(param_1);
  if (iVar1 == 0) {
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
         (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) &&
       ((*(int *)(param_1 + 200) != 0 &&
        (lVar2 = *(long *)(*(long *)(param_1 + 0x5d0) + 0x218), lVar2 != 0)))) {
      return lVar2;
    }
  }
  else if (((*(long *)(param_1 + 0x700) == 0) &&
           (piVar3 = *(int **)(param_1 + 0x5d0), piVar3 != (int *)0x0)) && (*piVar3 != 0x304)) {
    return *(long *)(piVar3 + 0x86);
  }
LAB_003b4790:
  return *(long *)(param_1 + 0x700);
}


