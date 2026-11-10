/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c0987c; name: FUN_00c0987c
 */


void FUN_00c0987c(undefined8 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte abStack_48 [8];
  void *local_28;
  
  pbVar7 = abStack_48;
  pbVar8 = pbVar7;
  uVar5 = param_2;
  if (0x7f < param_2) {
    do {
      param_2 = uVar5 >> 7;
      uVar2 = uVar5 >> 0xe;
      pbVar8 = pbVar7 + 1;
      *pbVar7 = (byte)uVar5 | 0x80;
      pbVar7 = pbVar8;
      uVar5 = param_2;
    } while (uVar2 != 0);
  }
  pbVar7 = abStack_48;
  *pbVar8 = (byte)param_2;
  iVar6 = *(int *)(param_1 + 2);
  iVar9 = ((int)pbVar8 - (int)pbVar7) + 1;
  pvVar4 = (void *)param_1[1];
  if (iVar6 < iVar9) {
    pbVar7 = abStack_48;
    do {
      memcpy(pvVar4,pbVar7,(long)iVar6);
      iVar1 = *(int *)(param_1 + 2);
      uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_28,param_1 + 2);
      if ((uVar3 & 1) == 0) {
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 1;
        return;
      }
      iVar6 = *(int *)(param_1 + 2);
      iVar9 = iVar9 - iVar1;
      pbVar7 = pbVar7 + iVar1;
      param_1[1] = local_28;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + iVar6;
      pvVar4 = local_28;
    } while (iVar6 < iVar9);
  }
  memcpy(pvVar4,pbVar7,(long)iVar9);
  param_1[1] = param_1[1] + (long)iVar9;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - iVar9;
  return;
}


