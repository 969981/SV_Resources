/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057fec0; name: FUN_0057fec0
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0057fec0(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar9;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar9;
      if ((bVar1 & 1) != 0) goto LAB_0057ff04;
LAB_0057ff30:
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0057ff34:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00580234;
      *param_2 = 10;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
    }
LAB_0057ff78:
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 2) goto joined_r0x00580038;
LAB_0057ff84:
    if (((undefined1 *)*param_3 <= param_2) &&
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x24) != 2)) {
      uVar7 = 0;
      *param_2 = 0x10;
LAB_0057ffa4:
      param_2[1] = (char)uVar7;
      param_2 = param_2 + 2;
      iVar8 = *(int *)(param_1 + 0x24);
      goto joined_r0x00580038;
    }
    uVar7 = *(uint *)(param_1 + 0x18);
    *param_2 = 0x10;
    if (uVar7 < 0x80) goto LAB_0057ffa4;
    param_2[1] = (byte)uVar7 | 0x80;
    uVar10 = (ulong)(long)(int)uVar7 >> 7;
    if (((ulong)(long)(int)uVar7 >> 0xe & 0x3ffff) == 0) {
      param_2[2] = (char)uVar10;
      param_2 = param_2 + 3;
      iVar8 = *(int *)(param_1 + 0x24);
      goto joined_r0x00580038;
    }
    param_2 = param_2 + 3;
    do {
      puVar5 = param_2;
      uVar6 = uVar10 >> 7;
      puVar5[-1] = (byte)uVar10 | 0x80;
      param_2 = puVar5 + 1;
      uVar12 = uVar10 >> 0xe;
      uVar10 = uVar6;
    } while (uVar12 != 0);
    *puVar5 = (char)uVar6;
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 3) goto LAB_0057ffb8;
LAB_0058025c:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar7 = *(uint *)(lVar4 + 0x18);
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        param_2[2] = (char)(uVar7 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar7 = uVar7 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar7 >> 0xe;
          uVar7 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar4,param_2,param_3);
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 4) goto LAB_005802e8;
LAB_0057ffc0:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x22;
    uVar7 = *(uint *)(lVar4 + 0x18);
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        param_2[2] = (char)(uVar7 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar7 = uVar7 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar7 >> 0xe;
          uVar7 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar4,param_2,param_3);
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 5) goto LAB_0058007c;
LAB_005802f0:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar4 = *(long *)(param_1 + 0x18);
    *param_2 = 0x2a;
    uVar7 = *(uint *)(lVar4 + 0x18);
    if (uVar7 < 0x80) {
      param_2[1] = (byte)uVar7;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar7 | 0x80;
      if (uVar7 >> 0xe == 0) {
        param_2[2] = (char)(uVar7 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar7 = uVar7 >> 7;
        do {
          puVar5 = param_2;
          uVar2 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar7 >> 0xe;
          uVar7 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar4,param_2,param_3);
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 != 6) goto joined_r0x00580380;
LAB_00580084:
    pbVar9 = *(byte **)(param_1 + 0x18);
    if ((*pbVar9 & 1) == 0) {
      FUN_00532960(pbVar9 + 1,*pbVar9 >> 1);
      if (*(int *)(param_1 + 0x24) != 6) goto LAB_005800a8;
LAB_005800dc:
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      if ((bVar1 & 1) == 0) goto LAB_005800e8;
LAB_005800b8:
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_005800ec;
LAB_00580458:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,6,pbVar9,param_2);
      iVar8 = *(int *)(param_1 + 0x24);
      goto joined_r0x00580380;
    }
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
    if (*(int *)(param_1 + 0x24) == 6) goto LAB_005800dc;
LAB_005800a8:
    bVar1 = *PTR_DAT_047cba80;
    pbVar9 = PTR_DAT_047cba80;
    if ((bVar1 & 1) != 0) goto LAB_005800b8;
LAB_005800e8:
    sVar13 = (size_t)(bVar1 >> 1);
LAB_005800ec:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00580458;
    *param_2 = 0x32;
    param_2[1] = (char)sVar13;
    pbVar11 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      pbVar11 = pbVar9 + 1;
    }
    memcpy(param_2 + 2,pbVar11,sVar13);
    param_2 = param_2 + 2 + sVar13;
    if (*(int *)(param_1 + 0x24) != 7) goto LAB_0058013c;
LAB_00580384:
    pbVar9 = *(byte **)(param_1 + 0x18);
    if ((*pbVar9 & 1) == 0) {
      FUN_00532960(pbVar9 + 1,*pbVar9 >> 1);
      if (*(int *)(param_1 + 0x24) != 7) goto LAB_005803a8;
LAB_005803dc:
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      if ((bVar1 & 1) == 0) goto LAB_005803e8;
LAB_005803b8:
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_005803ec;
    }
    else {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
      if (*(int *)(param_1 + 0x24) == 7) goto LAB_005803dc;
LAB_005803a8:
      bVar1 = *PTR_DAT_047cba80;
      pbVar9 = PTR_DAT_047cba80;
      if ((bVar1 & 1) != 0) goto LAB_005803b8;
LAB_005803e8:
      sVar13 = (size_t)(bVar1 >> 1);
LAB_005803ec:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x3a;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        iVar8 = *(int *)(param_1 + 0x24);
        goto joined_r0x005804d0;
      }
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,7,pbVar9,param_2);
    iVar8 = *(int *)(param_1 + 0x24);
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0057ff78;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0057ff30;
LAB_0057ff04:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_0057ff34;
LAB_00580234:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    iVar8 = *(int *)(param_1 + 0x24);
    if (iVar8 == 2) goto LAB_0057ff84;
joined_r0x00580038:
    if (iVar8 == 3) goto LAB_0058025c;
LAB_0057ffb8:
    if (iVar8 == 4) goto LAB_0057ffc0;
LAB_005802e8:
    if (iVar8 == 5) goto LAB_005802f0;
LAB_0058007c:
    if (iVar8 == 6) goto LAB_00580084;
joined_r0x00580380:
    if (iVar8 == 7) goto LAB_00580384;
LAB_0058013c:
    iVar8 = *(int *)(param_1 + 0x24);
  }
joined_r0x005804d0:
  if (iVar8 != 8) {
    uVar10 = *(ulong *)(param_1 + 8);
    goto joined_r0x00580440;
  }
  pbVar9 = *(byte **)(param_1 + 0x18);
  if ((*pbVar9 & 1) == 0) {
    FUN_00532960(pbVar9 + 1,*pbVar9 >> 1);
    if (*(int *)(param_1 + 0x24) != 8) goto LAB_0058016c;
LAB_005801a0:
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_005801ac;
LAB_0058017c:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_005801b0;
  }
  else {
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
    if (*(int *)(param_1 + 0x24) == 8) goto LAB_005801a0;
LAB_0058016c:
    bVar1 = *PTR_DAT_047cba80;
    pbVar9 = PTR_DAT_047cba80;
    if ((bVar1 & 1) != 0) goto LAB_0058017c;
LAB_005801ac:
    sVar13 = (size_t)(bVar1 >> 1);
LAB_005801b0:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x42;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
      uVar10 = *(ulong *)(param_1 + 8);
      goto joined_r0x00580440;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,8,pbVar9,param_2);
  uVar10 = *(ulong *)(param_1 + 8);
joined_r0x00580440:
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar6 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar5 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = param_2 + sVar13;
  }
  return param_2;
}


