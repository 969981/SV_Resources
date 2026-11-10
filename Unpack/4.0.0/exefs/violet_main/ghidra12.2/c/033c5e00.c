/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033c5e00; name: FUN_033c5e00
 */


void FUN_033c5e00(long param_1,uint param_2,long param_3,long param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      piVar1 = (int *)(param_3 + lVar5 * 4);
      iVar3 = *(int *)(param_1 + (long)piVar1[1] * 4);
      *piVar1 = *(int *)(param_1 + (long)*piVar1 * 4);
      piVar1[1] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar1[3] * 4);
      piVar1[2] = *(int *)(param_1 + (long)piVar1[2] * 4);
      piVar1[3] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar1[5] * 4);
      piVar1[4] = *(int *)(param_1 + (long)piVar1[4] * 4);
      piVar1[5] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar1[7] * 4);
      piVar2 = (int *)(param_4 + lVar5 * 4);
      lVar5 = lVar5 + 8;
      iVar4 = *piVar2;
      piVar1[6] = *(int *)(param_1 + (long)piVar1[6] * 4);
      piVar1[7] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar2[1] * 4);
      *piVar2 = *(int *)(param_1 + (long)iVar4 * 4);
      piVar2[1] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar2[3] * 4);
      piVar2[2] = *(int *)(param_1 + (long)piVar2[2] * 4);
      piVar2[3] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar2[5] * 4);
      piVar2[4] = *(int *)(param_1 + (long)piVar2[4] * 4);
      piVar2[5] = iVar3;
      iVar3 = *(int *)(param_1 + (long)piVar2[7] * 4);
      piVar2[6] = *(int *)(param_1 + (long)piVar2[6] * 4);
      piVar2[7] = iVar3;
    } while ((uint)lVar5 < param_2);
  }
  return;
}


