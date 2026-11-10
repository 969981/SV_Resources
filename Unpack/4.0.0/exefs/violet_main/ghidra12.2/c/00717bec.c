/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00717bec; name: FUN_00717bec
 */


undefined2 * FUN_00717bec(undefined *param_1,undefined2 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  void *pvVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  byte *pbVar12;
  size_t sVar13;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) goto LAB_00717c5c;
LAB_00717c30:
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00717c60;
LAB_00718068:
      param_2 = (undefined2 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_00717c30;
LAB_00717c5c:
    sVar13 = (size_t)(bVar2 >> 1);
LAB_00717c60:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00718068;
    *(undefined1 *)param_2 = 10;
    *(char *)((long)param_2 + 1) = (char)sVar13;
    pbVar12 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar12 = pbVar8 + 1;
    }
    memcpy(param_2 + 1,pbVar12,sVar13);
    param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
  }
  if ((param_1 != PTR_DAT_047d01f8) && (lVar9 = *(long *)(param_1 + 0x20), lVar9 != 0)) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      lVar9 = *(long *)(param_1 + 0x20);
    }
    *(undefined1 *)param_2 = 0x12;
    uVar11 = *(uint *)(lVar9 + 0x1c);
    if (uVar11 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar11;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar11 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar11 = uVar11 >> 7;
        do {
          puVar5 = param_2;
          uVar3 = uVar11 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar11 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar4 = uVar11 >> 0xe;
          uVar11 = uVar3;
        } while (uVar4 != 0);
        *(char *)puVar5 = (char)uVar3;
      }
    }
    param_2 = (undefined2 *)FUN_00513f18(lVar9,param_2,param_3);
  }
  if (*(int *)(param_1 + 0x34) == 3) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar9 = *(long *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x1a;
    uVar11 = *(uint *)(lVar9 + 0x10);
    if (uVar11 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar11;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar11 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar11 = uVar11 >> 7;
        do {
          puVar5 = param_2;
          uVar3 = uVar11 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar11 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar4 = uVar11 >> 0xe;
          uVar11 = uVar3;
        } while (uVar4 != 0);
        *(char *)puVar5 = (char)uVar3;
      }
    }
    uVar10 = *(ulong *)(lVar9 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = uVar10 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar10 + 8) & 1) == 0) {
        pvVar6 = (void *)(uVar10 + 9);
        uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
      }
      else {
        uVar7 = *(ulong *)(uVar10 + 0x10);
        pvVar6 = *(void **)(uVar10 + 0x18);
      }
      sVar13 = (size_t)(int)uVar7;
      if (*param_3 - (long)param_2 < (long)sVar13) {
        param_2 = (undefined2 *)FUN_0052c7dc(param_3,pvVar6,uVar7,param_2);
      }
      else {
        memcpy(param_2,pvVar6,sVar13);
        param_2 = (undefined2 *)((long)param_2 + sVar13);
      }
    }
    if (*(int *)(param_1 + 0x34) == 4) goto LAB_00717d7c;
LAB_00717e98:
    iVar1 = *(int *)(param_1 + 0x34);
  }
  else {
    if (*(int *)(param_1 + 0x34) != 4) goto LAB_00717e98;
LAB_00717d7c:
    pbVar8 = *(byte **)(param_1 + 0x28);
    if ((*pbVar8 & 1) == 0) {
      FUN_00532960(pbVar8 + 1,*pbVar8 >> 1);
      if (*(int *)(param_1 + 0x34) == 4) goto LAB_00717df4;
LAB_00717da0:
      bVar2 = *PTR_DAT_047cba80;
      pbVar8 = PTR_DAT_047cba80;
      if ((bVar2 & 1) == 0) goto LAB_00717e00;
LAB_00717db0:
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00717e04;
    }
    else {
      FUN_00532960(*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
      if (*(int *)(param_1 + 0x34) != 4) goto LAB_00717da0;
LAB_00717df4:
      pbVar8 = *(byte **)(param_1 + 0x28);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) != 0) goto LAB_00717db0;
LAB_00717e00:
      sVar13 = (size_t)(bVar2 >> 1);
LAB_00717e04:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x22;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar12 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar12 = pbVar8 + 1;
        }
        memcpy(param_2 + 1,pbVar12,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        iVar1 = *(int *)(param_1 + 0x34);
        goto joined_r0x00717ea0;
      }
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,4,pbVar8,param_2);
    iVar1 = *(int *)(param_1 + 0x34);
  }
joined_r0x00717ea0:
  if (iVar1 == 5) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar9 = *(long *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x2a;
    uVar11 = *(uint *)(lVar9 + 0x18);
    if (uVar11 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar11;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar11 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar11 = uVar11 >> 7;
        do {
          puVar5 = param_2;
          uVar3 = uVar11 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar11 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar4 = uVar11 >> 0xe;
          uVar11 = uVar3;
        } while (uVar4 != 0);
        *(char *)puVar5 = (char)uVar3;
      }
    }
    param_2 = (undefined2 *)FUN_00716a38(lVar9,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x34);
  }
  if (iVar1 == 6) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar9 = *(long *)(param_1 + 0x28);
    *(undefined1 *)param_2 = 0x32;
    uVar11 = *(uint *)(lVar9 + 0x10);
    if (uVar11 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar11;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar11 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar11 = uVar11 >> 7;
        do {
          puVar5 = param_2;
          uVar3 = uVar11 >> 7;
          *(byte *)((long)puVar5 + -1) = (byte)uVar11 | 0x80;
          param_2 = (undefined2 *)((long)puVar5 + 1);
          uVar4 = uVar11 >> 0xe;
          uVar11 = uVar3;
        } while (uVar4 != 0);
        *(char *)puVar5 = (char)uVar3;
      }
    }
    uVar10 = *(ulong *)(lVar9 + 8);
    if ((uVar10 & 1) != 0) {
      uVar10 = uVar10 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar10 + 8) & 1) == 0) {
        pvVar6 = (void *)(uVar10 + 9);
        uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
      }
      else {
        uVar7 = *(ulong *)(uVar10 + 0x10);
        pvVar6 = *(void **)(uVar10 + 0x18);
      }
      sVar13 = (size_t)(int)uVar7;
      if (*param_3 - (long)param_2 < (long)sVar13) {
        param_2 = (undefined2 *)FUN_0052c7dc(param_3,pvVar6,uVar7,param_2);
      }
      else {
        memcpy(param_2,pvVar6,sVar13);
        param_2 = (undefined2 *)((long)param_2 + sVar13);
      }
    }
  }
  pbVar8 = *(byte **)(param_1 + 0x18);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) goto LAB_00718004;
LAB_00717fd8:
      sVar13 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00718008;
LAB_00718090:
      param_2 = (undefined2 *)FUN_0052c95c(param_3,99,pbVar8,param_2);
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x00718050;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_00717fd8;
LAB_00718004:
    sVar13 = (size_t)(bVar2 >> 1);
LAB_00718008:
    if ((*param_3 - (long)param_2) + 0xd < (long)sVar13) goto LAB_00718090;
    *param_2 = 0x69a;
    *(char *)(param_2 + 1) = (char)sVar13;
    pbVar12 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      pbVar12 = pbVar8 + 1;
    }
    memcpy((undefined1 *)((long)param_2 + 3),pbVar12,sVar13);
    param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar13);
  }
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00718050:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      pvVar6 = (void *)(uVar10 + 9);
      uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar10 + 0x10);
      pvVar6 = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar5 = (undefined2 *)FUN_0052c7dc(param_3,pvVar6,uVar7,param_2);
      return puVar5;
    }
    memcpy(param_2,pvVar6,sVar13);
    param_2 = (undefined2 *)((long)param_2 + sVar13);
  }
  return param_2;
}


