/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0b970; name: FUN_00c0b970
 */


void FUN_00c0b970(int param_1,byte param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  byte *__src;
  byte local_50 [8];
  byte *local_48;
  
  pbVar9 = local_50;
  pbVar7 = local_50;
  __src = local_50;
  piVar11 = (int *)(param_3 + 2);
  uVar4 = param_1 << 3;
  if (*piVar11 < 5) {
    if (0x7f < uVar4) {
      pbVar8 = local_50;
      uVar10 = uVar4;
      do {
        uVar4 = uVar10 >> 7;
        uVar2 = uVar10 >> 0xe;
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar10 | 0x80;
        pbVar8 = pbVar9;
        uVar10 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar9 = (byte)uVar4;
    iVar6 = ((int)pbVar9 - (int)local_50) + 1;
    iVar5 = *(int *)(param_3 + 2);
    pbVar9 = (byte *)param_3[1];
    if (iVar5 < iVar6) {
      pbVar7 = local_50;
      do {
        memcpy(pbVar9,pbVar7,(long)iVar5);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar11);
        if ((uVar3 & 1) == 0) {
          pbVar7 = (byte *)0x0;
          param_3[1] = 0;
          iVar6 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0bac4;
        }
        iVar5 = *(int *)(param_3 + 2);
        iVar6 = iVar6 - iVar1;
        pbVar7 = pbVar7 + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar5;
        pbVar9 = local_48;
      } while (iVar5 < iVar6);
    }
    memcpy(pbVar9,pbVar7,(long)iVar6);
    pbVar7 = (byte *)(param_3[1] + (long)iVar6);
    param_3[1] = pbVar7;
    iVar6 = *(int *)(param_3 + 2) - iVar6;
  }
  else {
    pbVar7 = (byte *)param_3[1];
    if (uVar4 < 0x80) {
      pbVar9 = pbVar7;
    }
    else {
      pbVar8 = pbVar7;
      uVar10 = uVar4;
      do {
        uVar4 = uVar10 >> 7;
        uVar2 = uVar10 >> 0xe;
        pbVar9 = pbVar8 + 1;
        *pbVar8 = (byte)uVar10 | 0x80;
        pbVar8 = pbVar9;
        uVar10 = uVar4;
      } while (uVar2 != 0);
    }
    *pbVar9 = (byte)uVar4;
    iVar6 = ((int)pbVar9 - (int)pbVar7) + 1;
    pbVar7 = (byte *)(param_3[1] + (long)iVar6);
    param_3[1] = pbVar7;
    iVar6 = *(int *)(param_3 + 2) - iVar6;
  }
  *(int *)(param_3 + 2) = iVar6;
LAB_00c0bac4:
  if (iVar6 < 5) {
    local_50[0] = param_2 & 1;
    if (iVar6 < 1) {
      iVar5 = 1;
      __src = local_50;
      do {
        memcpy(pbVar7,__src,(long)iVar6);
        iVar1 = *(int *)(param_3 + 2);
        uVar3 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar11);
        if ((uVar3 & 1) == 0) {
          param_3[1] = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          return;
        }
        iVar6 = *(int *)(param_3 + 2);
        iVar5 = iVar5 - iVar1;
        __src = __src + iVar1;
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar6;
        pbVar7 = local_48;
      } while (iVar6 < iVar5);
    }
    else {
      iVar5 = 1;
      local_48 = pbVar7;
    }
    memcpy(local_48,__src,(long)iVar5);
    param_3[1] = param_3[1] + (long)iVar5;
    iVar5 = *(int *)(param_3 + 2) - iVar5;
  }
  else {
    *pbVar7 = param_2 & 1;
    param_3[1] = param_3[1] + 1;
    iVar5 = *(int *)(param_3 + 2) + -1;
  }
  *(int *)(param_3 + 2) = iVar5;
  return;
}


