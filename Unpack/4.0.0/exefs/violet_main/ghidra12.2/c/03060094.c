/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03060094; name: FUN_03060094
 */


void FUN_03060094(int *param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  
  iVar7 = *(int *)(param_2 + 200);
  if (param_3 <= iVar7) {
    if (iVar7 <= param_3) {
      iVar7 = param_3;
    }
    puVar5 = (uint *)(*(long *)(param_2 + 0xc0) + (long)(param_3 + -1) * 0x10 + 8);
    iVar6 = 1;
    do {
      uVar2 = *puVar5 - 1;
      if (0 < (int)*puVar5) {
        iVar7 = *(int *)(*(long *)(puVar5 + -2) + (ulong)uVar2 * 4);
        *puVar5 = uVar2;
        if (iVar6 != 1) {
          plVar1 = (long *)(*(long *)(param_2 + 0xc0) + (long)-iVar6 * 0x10);
          plVar8 = plVar1 + 1;
          iVar6 = (int)*plVar8;
          lVar4 = (long)iVar6;
          if ((int)(*(uint *)((long)plVar1 + 0xc) & 0x7fffffff) <= iVar6) {
            FUN_0133bb88(plVar1,PTR_PTR_047d1a50,lVar4 + 1);
            iVar6 = (int)*plVar8;
          }
          *(int *)(*plVar1 + (long)iVar6 * 4) = iVar7 + param_3;
          *(int *)plVar8 = (int)(lVar4 + 1);
        }
        if (iVar7 != -1) goto LAB_03060278;
        break;
      }
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 4;
    } while (param_3 - iVar7 != iVar6);
  }
  uVar2 = *(uint *)(param_2 + 0xb8);
  iVar7 = uVar2 + param_3;
  uVar3 = uVar2;
  if ((int)(*(uint *)(param_2 + 0xbc) & 0x7fffffff) < iVar7) {
    FUN_02e9b320(param_2 + 0xb0,PTR_PTR_047d1a50,(long)iVar7);
    uVar3 = *(uint *)(param_2 + 0xb8);
  }
  if ((int)uVar3 < iVar7) {
    *(int *)(param_2 + 0xb8) = iVar7;
    memset((void *)(*(long *)(param_2 + 0xb0) + (long)(int)uVar3 * 4),0,
           (ulong)(iVar7 + ~uVar3) * 4 + 4);
  }
  else if (iVar7 < (int)uVar3) {
    *(int *)(param_2 + 0xb8) = iVar7;
  }
  lVar4 = (long)*(int *)(param_2 + 0x98) + (long)param_3;
  iVar6 = (int)lVar4;
  if ((int)(*(uint *)(param_2 + 0x9c) & 0x7fffffff) < iVar6) {
    FUN_03060c58(param_2 + 0x90,PTR_PTR_047d1a50,lVar4);
  }
  *(int *)(param_2 + 0x98) = iVar6;
  iVar7 = *(int *)(param_2 + 0x58) * iVar7;
  if ((int)(*(uint *)(param_2 + 0xac) & 0x7fffffff) < iVar7) {
    FUN_02eb1f88(param_2 + 0xa0,PTR_PTR_047d1a50,(long)iVar7);
  }
  uVar3 = *(uint *)(param_2 + 0xa8);
  if ((int)uVar3 < iVar7) {
    *(int *)(param_2 + 0xa8) = iVar7;
    memset((void *)(*(long *)(param_2 + 0xa0) + (long)(int)uVar3 * 4),0,
           (ulong)(iVar7 + ~uVar3) * 4 + 4);
  }
  else if (iVar7 < (int)uVar3) {
    *(int *)(param_2 + 0xa8) = iVar7;
  }
  iVar7 = *(int *)(param_2 + 0x30) + uVar2;
LAB_03060278:
  *param_1 = iVar7;
  return;
}


