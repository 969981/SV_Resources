/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0b050; name: FUN_00c0b050
 */


void FUN_00c0b050(int param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *__src;
  undefined4 local_50 [2];
  undefined4 *local_48;
  
  pbVar9 = (byte *)local_50;
  puVar5 = local_50;
  __src = local_50;
  piVar13 = (int *)(param_3 + 2);
  uVar6 = param_1 << 3 | 5;
  if (*piVar13 < 5) {
    if (0x7f < uVar6) {
      pbVar11 = (byte *)local_50;
      uVar12 = uVar6;
      do {
        uVar6 = uVar12 >> 7;
        uVar2 = uVar12 >> 0xe;
        pbVar9 = pbVar11 + 1;
        *pbVar11 = (byte)uVar12 | 0x80;
        pbVar11 = pbVar9;
        uVar12 = uVar6;
      } while (uVar2 != 0);
    }
    *pbVar9 = (byte)uVar6;
    iVar8 = ((int)pbVar9 - (int)local_50) + 1;
    iVar7 = *(int *)(param_3 + 2);
    puVar3 = (undefined4 *)param_3[1];
    if (iVar7 < iVar8) {
      puVar5 = local_50;
      do {
        memcpy(puVar3,puVar5,(long)iVar7);
        iVar1 = *(int *)(param_3 + 2);
        uVar4 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar13);
        if ((uVar4 & 1) == 0) {
          puVar5 = (undefined4 *)0x0;
          param_3[1] = 0;
          uVar6 = 0;
          *(undefined4 *)(param_3 + 2) = 0;
          *(undefined1 *)(param_3 + 3) = 1;
          goto LAB_00c0b1a8;
        }
        iVar7 = *(int *)(param_3 + 2);
        iVar8 = iVar8 - iVar1;
        puVar5 = (undefined4 *)((long)puVar5 + (long)iVar1);
        param_3[1] = local_48;
        *(int *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + iVar7;
        puVar3 = local_48;
      } while (iVar7 < iVar8);
    }
    memcpy(puVar3,puVar5,(long)iVar8);
    puVar5 = (undefined4 *)(param_3[1] + (long)iVar8);
    param_3[1] = puVar5;
    uVar6 = *(int *)(param_3 + 2) - iVar8;
  }
  else {
    pbVar9 = (byte *)param_3[1];
    if (uVar6 < 0x80) {
      pbVar11 = pbVar9;
    }
    else {
      pbVar10 = pbVar9;
      uVar12 = uVar6;
      do {
        uVar6 = uVar12 >> 7;
        uVar2 = uVar12 >> 0xe;
        pbVar11 = pbVar10 + 1;
        *pbVar10 = (byte)uVar12 | 0x80;
        pbVar10 = pbVar11;
        uVar12 = uVar6;
      } while (uVar2 != 0);
    }
    *pbVar11 = (byte)uVar6;
    iVar8 = ((int)pbVar11 - (int)pbVar9) + 1;
    puVar5 = (undefined4 *)(param_3[1] + (long)iVar8);
    param_3[1] = puVar5;
    uVar6 = *(int *)(param_3 + 2) - iVar8;
  }
  *(uint *)(param_3 + 2) = uVar6;
LAB_00c0b1a8:
  if (uVar6 < 4) {
    iVar8 = 4;
    local_50[0] = param_2;
    do {
      memcpy(puVar5,__src,(long)(int)uVar6);
      iVar7 = *(int *)(param_3 + 2);
      uVar4 = (**(code **)(*(long *)*param_3 + 0x10))((long *)*param_3,&local_48,piVar13);
      if ((uVar4 & 1) == 0) {
        param_3[1] = 0;
        *(undefined4 *)(param_3 + 2) = 0;
        *(undefined1 *)(param_3 + 3) = 1;
        return;
      }
      uVar6 = *(uint *)(param_3 + 2);
      iVar8 = iVar8 - iVar7;
      __src = (undefined4 *)((long)__src + (long)iVar7);
      param_3[1] = local_48;
      *(uint *)((long)param_3 + 0x14) = *(int *)((long)param_3 + 0x14) + uVar6;
      puVar5 = local_48;
    } while ((int)uVar6 < iVar8);
    memcpy(local_48,__src,(long)iVar8);
    param_3[1] = param_3[1] + (long)iVar8;
    iVar8 = *(int *)(param_3 + 2) - iVar8;
  }
  else {
    *puVar5 = param_2;
    param_3[1] = param_3[1] + 4;
    iVar8 = *(int *)(param_3 + 2) + -4;
  }
  *(int *)(param_3 + 2) = iVar8;
  return;
}


