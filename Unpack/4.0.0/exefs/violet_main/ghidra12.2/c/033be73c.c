/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 033be73c; name: FUN_033be73c
 */


int FUN_033be73c(long *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_28;
  
  *(byte *)(param_1 + 4) =
       (byte)(*(uint *)(param_1[3] + 699) >> 0x14) & 2 | *(byte *)(param_1 + 4) & 0xfd;
  iVar6 = (**(code **)(*(long *)param_1[0xb] + 0x88))
                    ((long *)param_1[0xb],&local_28,param_1 + 0xd,*PTR_DAT_047e6980);
  if (iVar6 != 0x11) {
    if (iVar6 == 0x2e) {
      return 0x3f;
    }
    if (iVar6 != 0x2d) {
      return 2;
    }
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    iVar6 = (**(code **)(*param_1 + 0x120))(param_1,local_28);
    if (iVar6 != 1) {
      return iVar6;
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (param_1[3] == 0) {
      uVar8 = 1;
    }
    else {
      uVar8 = *(undefined2 *)(param_1[3] + 0x2b8);
    }
    *(undefined2 *)((long)param_1 + 0x54) = uVar8;
    iVar6 = (**(code **)(*param_1 + 0x130))(param_1,local_28,0);
    if (iVar6 != 1) {
      return iVar6;
    }
    uVar3 = *(uint *)(param_1 + 6);
    param_1[0xc] = param_1[0xc] + (ulong)uVar3;
    *(uint *)(param_1 + 0xd) = (int)param_1[0xd] - uVar3;
    *(uint *)((long)param_1 + 0x6c) = *(int *)((long)param_1 + 0x6c) + uVar3;
  }
  else {
    iVar6 = (**(code **)(*param_1 + 0x130))(param_1,local_28,0);
    if (iVar6 != 1) {
      return iVar6;
    }
  }
  if ((*(int *)((long)param_1 + 0xac) == 0) && (iVar6 = FUN_033bea74(param_1), iVar6 != 1)) {
    return iVar6;
  }
  puVar5 = PTR_DAT_047e6970;
  plVar10 = param_1 + 0x12;
  if (*plVar10 == 0) {
    iVar6 = FUN_0351557c(PTR_DAT_047e6970,*(undefined4 *)((long)param_1 + 0x84),(int)param_1[0x11],
                         (int)param_1[0x13],(long)param_1 + 0x8c,plVar10);
    puVar4 = PTR_DAT_047e2fd0;
    if (iVar6 == 1) {
      lVar9 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(5,(int)param_1[0x13] * (int)param_1[0x11] * 2);
      param_1[0x1a] = lVar9;
      if (lVar9 != 0) {
        *(undefined1 *)(param_1 + 0x17) = 1;
        *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0x84) / 400;
        goto LAB_033be894;
      }
      if (*plVar10 == 0) {
        return 2;
      }
      puVar5[(ulong)*(uint *)((long)param_1 + 0x8c) + 8] = 2;
      param_1[0x12] = 0;
      if (param_1[0x1a] == 0) {
        return 2;
      }
      (**(code **)(puVar4 + 0x30))(5);
      param_1[0x1a] = 0;
    }
    return 2;
  }
LAB_033be894:
  if ((*(byte *)(param_1[3] + 0x2bd) >> 6 & 1) == 0) {
    iVar6 = 1;
  }
  else {
    iVar6 = FUN_034f988c(param_1);
    iVar7 = (**(code **)(*param_1 + 0x138))(param_1,iVar6,param_1 + 5);
    if (iVar7 == 1) {
      lVar9 = param_1[3];
      *(int *)(lVar9 + 0x2b4) = iVar6 - (int)param_1[5];
      puVar1 = (uint *)(lVar9 + 699);
      iVar6 = 1;
      *puVar1 = *puVar1 & 0xfe3fffff;
    }
    else {
      iVar6 = 2;
    }
    if ((int)param_1[0xd] != 0) {
      if ((*(byte *)((long)param_1 + 0x82) >> 1 & 1) == 0) {
        (**(code **)(*(long *)param_1[0xb] + 0x90))();
      }
      else {
        *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) & 0xfd;
      }
      param_1[0xc] = 0;
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x13) != 0) {
      uVar3 = *(uint *)(param_1 + 5) / *(uint *)(param_1 + 0x13);
    }
    uVar2 = (int)param_1[0x16] - 1;
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    lVar9 = param_1[3];
    *(uint *)((long)param_1 + 0xa4) = uVar3;
    if ((*(byte *)(lVar9 + 0x2bd) >> 6 & 1) == 0) {
      iVar7 = *(int *)(lVar9 + 0x2b4);
    }
    else {
      iVar7 = 0;
    }
    *(uint *)(param_1 + 5) = iVar7 + *(uint *)(param_1 + 5);
    *(int *)((long)param_1 + 0xb4) = *(int *)((long)param_1 + 0xb4) + iVar7;
    *(undefined4 *)(lVar9 + 0x2b4) = 0;
    *(uint *)(lVar9 + 699) = *(uint *)(lVar9 + 699) & 0xfe3fffff;
  }
  *(byte *)((long)param_1 + 0x82) = *(byte *)((long)param_1 + 0x82) | 4;
  return iVar6;
}


