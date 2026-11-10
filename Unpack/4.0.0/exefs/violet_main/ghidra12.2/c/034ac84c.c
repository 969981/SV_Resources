/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac84c; name: FUN_034ac84c
 */


int FUN_034ac84c(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  if ((*(byte *)(param_1 + 0xdc) >> 1 & 1) == 0) {
    lVar5 = 0;
    do {
      lVar3 = param_1;
      if (lVar5 == 0) {
        lVar5 = *(long *)(lVar3 + 0xa0);
      }
    } while (((*(byte *)(lVar3 + 0xbd) >> 2 & 1) == 0) &&
            (param_1 = *(long *)(lVar3 + 0x98), *(long *)(lVar3 + 0x98) != 0));
    if (*(long *)(lVar3 + 0x80) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(*(long *)(lVar3 + 0x80) + 0x10);
    }
    if (lVar5 == 0) {
      do {
        plVar1 = (long *)(lVar3 + 0x98);
        lVar5 = *(long *)(lVar3 + 0xa0);
        lVar3 = *plVar1;
      } while (lVar5 == 0 && *plVar1 != 0);
      if (lVar5 == 0) {
        param_1 = 0;
        goto LAB_034ac8d0;
      }
    }
    uVar2 = FUN_03471aac(lVar5);
    param_1 = 0;
    if ((uVar2 & 1) == 0) {
      param_1 = lVar5;
    }
  }
  else {
    iVar4 = 0;
  }
LAB_034ac8d0:
  while( true ) {
    if (param_1 == 0) {
      return iVar4;
    }
    if (*(long *)(param_1 + 0x80) != 0) {
      iVar4 = *(int *)(*(long *)(param_1 + 0x80) + 0x10) + iVar4;
    }
    param_1 = *(long *)(param_1 + 0xa0);
    if (param_1 == 0) break;
    uVar2 = FUN_03471aac(param_1);
    if ((uVar2 & 1) != 0) {
      return iVar4;
    }
  }
  return iVar4;
}


