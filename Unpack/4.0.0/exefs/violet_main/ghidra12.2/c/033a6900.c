/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033a6900; name: FUN_033a6900
 */


void FUN_033a6900(long *param_1,undefined4 param_2,void *param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong *puVar9;
  uint local_38 [2];
  
  FUN_033a67a0(param_1,1,param_2);
  puVar9 = (ulong *)param_1[0x22];
  pvVar4 = (void *)*puVar9;
  if (puVar9[1] < (ulong)((long)pvVar4 + (long)param_4)) {
    plVar7 = (long *)puVar9[6];
    if (plVar7 == (long *)0x0) {
      memcpy(pvVar4,param_3,puVar9[1] - (long)pvVar4);
      *puVar9 = puVar9[1];
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,puVar9,param_3);
    }
  }
  else {
    memcpy(pvVar4,param_3,(long)param_4);
    *puVar9 = (long)pvVar4 + (long)param_4;
  }
  lVar8 = (long)(int)param_1[1] + -1;
  plVar7 = (long *)param_1[0x22];
  piVar2 = (int *)(*param_1 + lVar8 * 0x10);
  iVar5 = *piVar2;
  lVar6 = *(long *)(piVar2 + 2);
  *(int *)(param_1 + 1) = (int)lVar8;
  uVar1 = ((int)*plVar7 - ((int)plVar7[2] + (int)lVar6)) + (int)plVar7[4];
  lVar8 = lVar6 - plVar7[4];
  uVar1 = (uVar1 & 0xff00ff00 | iVar5 << 0x1e) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_38[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  if ((lVar8 < 0) || (puVar3 = (uint *)(lVar8 + plVar7[2]), (uint *)plVar7[1] < puVar3 + 1)) {
    if ((long *)plVar7[6] == (long *)0x0) {
      pvVar4 = (void *)(*plVar7 + lVar6);
      memcpy(pvVar4,local_38,plVar7[1] - (long)pvVar4);
    }
    else {
      (**(code **)(*(long *)plVar7[6] + 0x38))();
    }
  }
  else {
    *puVar3 = local_38[0];
  }
  return;
}


