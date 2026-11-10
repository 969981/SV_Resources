/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052bfc0; name: FUN_0052bfc0
 */


ulong FUN_0052bfc0(long *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  int local_24;
  byte *local_18;
  
  pbVar7 = (byte *)param_1[1];
  pbVar6 = (byte *)*param_1;
  if ((byte *)*param_1 == pbVar7) {
    iVar5 = *(int *)((long)param_1 + 0x2c);
    if (((0 < iVar5) || (0 < *(int *)((long)param_1 + 0x1c))) ||
       ((int)param_1[3] == (int)param_1[5])) {
LAB_0052c0b4:
      if ((int)param_1[3] - iVar5 < (int)param_1[6]) {
        bVar3 = true;
      }
      else {
        bVar3 = (int)param_1[5] == (int)param_1[6];
      }
      *(bool *)((long)param_1 + 0x24) = bVar3;
      return 0;
    }
    plVar8 = (long *)param_1[2];
    do {
      uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,&local_18,&local_24);
      if ((uVar4 & 1) == 0) {
        iVar5 = *(int *)((long)param_1 + 0x2c);
        *param_1 = 0;
        param_1[1] = 0;
        goto LAB_0052c0b4;
      }
    } while (local_24 == 0);
    iVar5 = (int)param_1[3];
    pbVar7 = local_18 + local_24;
    iVar1 = iVar5 - (0x7fffffff - local_24);
    *param_1 = (long)local_18;
    param_1[1] = (long)pbVar7;
    if (iVar1 == 0 || iVar5 < 0x7fffffff - local_24) {
      iVar5 = iVar5 + local_24;
    }
    else {
      pbVar7 = pbVar7 + -(long)iVar1;
      iVar5 = 0x7fffffff;
      *(int *)((long)param_1 + 0x1c) = iVar1;
      param_1[1] = (long)pbVar7;
    }
    pbVar7 = pbVar7 + *(int *)((long)param_1 + 0x2c);
    iVar1 = (int)param_1[6];
    if ((int)param_1[5] <= (int)param_1[6]) {
      iVar1 = (int)param_1[5];
    }
    *(int *)(param_1 + 3) = iVar5;
    iVar2 = iVar5 - iVar1;
    param_1[1] = (long)pbVar7;
    pbVar6 = local_18;
    if (iVar2 == 0 || iVar5 < iVar1) {
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
    }
    else {
      pbVar7 = pbVar7 + -(long)iVar2;
      *(int *)((long)param_1 + 0x2c) = iVar2;
      param_1[1] = (long)pbVar7;
    }
  }
  if ((pbVar6 < pbVar7) && (-1 < (char)*pbVar6)) {
    uVar4 = (ulong)*pbVar6;
    *param_1 = (long)(pbVar6 + 1);
  }
  else {
    auVar9 = FUN_0052bc08(param_1);
    uVar4 = auVar9._0_8_;
    if ((auVar9._8_8_ & 1) == 0) {
      return 0;
    }
  }
  return uVar4;
}


