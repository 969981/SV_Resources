/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c01404; name: FUN_00c01404
 */


void FUN_00c01404(long param_1,undefined8 *param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  void *pvVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  byte *pbVar14;
  byte abStack_50 [8];
  void *local_48;
  
  pbVar8 = abStack_50;
  pbVar10 = abStack_50;
  pbVar14 = *(byte **)(param_1 + 8);
  if ((*pbVar14 & 1) == 0) {
    uVar6 = (ulong)(*pbVar14 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar14 + 8);
  }
  uVar5 = (uint)uVar6;
  piVar12 = (int *)(param_2 + 2);
  if (*piVar12 < 5) {
    if (0x7f < uVar5) {
      pbVar9 = abStack_50;
      uVar11 = uVar6 & 0xffffffff;
      do {
        bVar3 = (byte)uVar6;
        uVar6 = uVar11 >> 7;
        uVar5 = (uint)uVar6;
        uVar2 = uVar11 >> 0xe;
        pbVar8 = pbVar9 + 1;
        *pbVar9 = bVar3 | 0x80;
        pbVar9 = pbVar8;
        uVar11 = uVar6;
      } while (uVar2 != 0);
    }
    *pbVar8 = (byte)uVar5;
    iVar7 = ((int)pbVar8 - (int)abStack_50) + 1;
    iVar13 = *(int *)(param_2 + 2);
    pvVar4 = (void *)param_2[1];
    if (iVar13 < iVar7) {
      pbVar10 = abStack_50;
      do {
        memcpy(pvVar4,pbVar10,(long)iVar13);
        iVar1 = *(int *)(param_2 + 2);
        uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_48,piVar12);
        if ((uVar6 & 1) == 0) {
          pvVar4 = (void *)0x0;
          param_2[1] = 0;
          iVar7 = 0;
          *(undefined4 *)(param_2 + 2) = 0;
          *(undefined1 *)(param_2 + 3) = 1;
          goto LAB_00c01558;
        }
        iVar13 = *(int *)(param_2 + 2);
        iVar7 = iVar7 - iVar1;
        pbVar10 = pbVar10 + iVar1;
        param_2[1] = local_48;
        *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar13;
        pvVar4 = local_48;
      } while (iVar13 < iVar7);
    }
    memcpy(pvVar4,pbVar10,(long)iVar7);
    pvVar4 = (void *)(param_2[1] + (long)iVar7);
    param_2[1] = pvVar4;
    iVar7 = *(int *)(param_2 + 2) - iVar7;
  }
  else {
    pbVar8 = (byte *)param_2[1];
    pbVar10 = pbVar8;
    if (0x7f < uVar5) {
      pbVar9 = pbVar8;
      uVar11 = uVar6 & 0xffffffff;
      do {
        bVar3 = (byte)uVar6;
        uVar6 = uVar11 >> 7;
        uVar5 = (uint)uVar6;
        uVar2 = uVar11 >> 0xe;
        pbVar10 = pbVar9 + 1;
        *pbVar9 = bVar3 | 0x80;
        pbVar9 = pbVar10;
        uVar11 = uVar6;
      } while (uVar2 != 0);
    }
    *pbVar10 = (byte)uVar5;
    iVar7 = ((int)pbVar10 - (int)pbVar8) + 1;
    pvVar4 = (void *)(param_2[1] + (long)iVar7);
    param_2[1] = pvVar4;
    iVar7 = *(int *)(param_2 + 2) - iVar7;
  }
  *(int *)(param_2 + 2) = iVar7;
LAB_00c01558:
  if ((*pbVar14 & 1) == 0) {
    pbVar10 = pbVar14 + 1;
    uVar6 = (ulong)(*pbVar14 >> 1);
  }
  else {
    uVar6 = *(ulong *)(pbVar14 + 8);
    pbVar10 = *(byte **)(pbVar14 + 0x10);
  }
  iVar13 = (int)uVar6;
  if (*(char *)((long)param_2 + 0x19) == '\0') {
    while (iVar13 = (int)uVar6, iVar7 < iVar13) {
      memcpy(pvVar4,pbVar10,(long)iVar7);
      iVar1 = *(int *)(param_2 + 2);
      uVar6 = (**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,&local_48,piVar12);
      if ((uVar6 & 1) == 0) {
        bVar3 = 1;
        param_2[1] = 0;
        *(undefined4 *)(param_2 + 2) = 0;
        goto LAB_00c01684;
      }
      iVar7 = *(int *)(param_2 + 2);
      pbVar10 = pbVar10 + iVar1;
      param_2[1] = local_48;
      *(int *)((long)param_2 + 0x14) = *(int *)((long)param_2 + 0x14) + iVar7;
      pvVar4 = local_48;
      uVar6 = (ulong)(uint)(iVar13 - iVar1);
    }
  }
  else if (iVar7 <= iVar13) {
    if (iVar7 < 1) {
      iVar7 = *(int *)((long)param_2 + 0x14);
    }
    else {
      (**(code **)(*(long *)*param_2 + 0x18))();
      iVar7 = *(int *)((long)param_2 + 0x14) - *(int *)(param_2 + 2);
      *(undefined4 *)(param_2 + 2) = 0;
      *(int *)((long)param_2 + 0x14) = iVar7;
      param_2[1] = 0;
    }
    *(int *)((long)param_2 + 0x14) = iVar7 + iVar13;
    bVar3 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,pbVar10,uVar6 & 0xffffffff);
    bVar3 = *(byte *)(param_2 + 3) | ~bVar3 & 1;
LAB_00c01684:
    *(byte *)(param_2 + 3) = bVar3;
    return;
  }
  memcpy(pvVar4,pbVar10,(long)iVar13);
  param_2[1] = param_2[1] + (long)iVar13;
  *(int *)(param_2 + 2) = *(int *)(param_2 + 2) - iVar13;
  return;
}


