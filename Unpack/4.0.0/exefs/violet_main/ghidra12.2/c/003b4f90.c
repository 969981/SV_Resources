/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003b4f90; name: FUN_003b4f90
 */


void FUN_003b4f90(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  time_t tVar4;
  long lVar5;
  
  if (*(long *)(*(long *)(param_1 + 0x5d0) + 0x150) == 0) {
    return;
  }
  if (((*(int *)(param_1 + 0x38) != 0) && (*(long *)(*(long *)(param_1 + 0x5d0) + 0x178) == 0)) &&
     ((*(byte *)(param_1 + 0x620) & 1) != 0)) {
    return;
  }
  lVar3 = *(long *)(param_1 + 0x878);
  uVar1 = *(uint *)(lVar3 + 0x48);
  if (((uVar1 & param_2) != 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0 &&
        (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)))))) {
    if (((uVar1 >> 9 & 1) == 0) &&
       ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0 ||
         (*(int *)(param_1 + 0x38) == 0)) ||
        (((iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304 || (iVar2 == 0x10000)) ||
         ((((*(int *)(param_1 + 0x1928) != 0 && ((*(byte *)(param_1 + 0x697) & 1) == 0)) ||
           (*(long *)(lVar3 + 0x60) != 0)) || ((*(byte *)(param_1 + 0x695) >> 6 & 1) != 0)))))))) {
      FUN_003b9570();
      lVar3 = *(long *)(param_1 + 0x878);
    }
    if (*(long *)(lVar3 + 0x58) != 0) {
      FUN_003b8ad0(*(undefined8 *)(param_1 + 0x5d0));
      iVar2 = (**(code **)(*(long *)(param_1 + 0x878) + 0x58))
                        (param_1,*(undefined8 *)(param_1 + 0x5d0));
      if (iVar2 == 0) {
        FUN_003b8e30(*(undefined8 *)(param_1 + 0x5d0));
      }
    }
  }
  if (((uVar1 >> 7 & 1) == 0) && ((uVar1 & param_2) == param_2)) {
    lVar5 = *(long *)(param_1 + 0x878);
    lVar3 = 0x84;
    if ((param_2 & 1) != 0) {
      lVar3 = 0x78;
    }
    if ((~*(uint *)(lVar5 + lVar3) & 0xff) == 0) {
      tVar4 = time((time_t *)0x0);
      FUN_003b9d80(lVar5,tVar4);
      return;
    }
  }
  return;
}


