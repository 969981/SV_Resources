/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034c8260; name: FUN_034c8260
 */


undefined8 FUN_034c8260(long *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  
  iVar3 = (int)param_1[1];
  if ((uint)(iVar3 - *(int *)((long)param_1 + 0xc)) <= (uint)(iVar3 * 5) >> 4) {
    iVar3 = FUN_034c83c0(param_1,iVar3,(int)param_1[2]);
    if (iVar3 == -1) {
      return 0x34;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar4 = *param_1;
  param_2 = param_2 & 0x3fffffff;
  if (lVar4 != 0) {
    uVar5 = iVar3 - 1U & param_2;
    do {
      cVar2 = uVar5 + 1 == iVar3;
      if ((*(uint *)(lVar4 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) &
          0xc0000000) == 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      else {
        cVar2 = '\x02';
      }
    } while (cVar2 == '\0');
    if (cVar2 == '\x02' && uVar5 != 0xffffffff) goto LAB_034c8380;
  }
  do {
    iVar3 = FUN_034c83c0(param_1,iVar3,(int)param_1[2]);
    if (iVar3 == -1) {
      return 0x34;
    }
    lVar4 = *param_1;
    *(int *)(param_1 + 1) = iVar3;
    if (lVar4 == 0) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = iVar3 - 1U & param_2;
      do {
        cVar2 = uVar5 + 1 == iVar3;
        if ((*(uint *)(lVar4 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) &
            0xc0000000) == 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        else {
          cVar2 = '\x02';
        }
      } while (cVar2 == '\0');
      if (cVar2 != '\x02') {
        uVar5 = 0xffffffff;
      }
    }
  } while (uVar5 == 0xffffffff);
LAB_034c8380:
  puVar1 = (uint *)(lVar4 + (long)(int)uVar5 * 8);
  *puVar1 = param_2 | 0x80000000;
  puVar1[1] = param_3;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  return 1;
}


