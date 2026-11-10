/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005792f4; name: FUN_005792f4
 */


undefined1 * FUN_005792f4(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__src_00;
  size_t sVar11;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar3 = *pbVar9;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x10);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) == 0) goto LAB_00579364;
LAB_00579338:
      sVar11 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar11 < 0x80) goto LAB_00579368;
LAB_00579450:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
      iVar1 = *(int *)(param_1 + 0x24);
      goto joined_r0x0057946c;
    }
  }
  else if (*(long *)(pbVar9 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) != 0) goto LAB_00579338;
LAB_00579364:
    sVar11 = (size_t)(bVar3 >> 1);
LAB_00579368:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_00579450;
    *param_2 = 10;
    param_2[1] = (char)sVar11;
    __src_00 = *(byte **)(pbVar9 + 0x10);
    if ((*pbVar9 & 1) == 0) {
      __src_00 = pbVar9 + 1;
    }
    memcpy(param_2 + 2,__src_00,sVar11);
    param_2 = param_2 + 2 + sVar11;
  }
  iVar1 = *(int *)(param_1 + 0x24);
joined_r0x0057946c:
  if (iVar1 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    *param_2 = 0x12;
    uVar2 = *(uint *)(lVar6 + 0x28);
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      if (uVar2 >> 0xe == 0) {
        param_2[2] = (char)(uVar2 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar2 = uVar2 >> 7;
        do {
          puVar7 = param_2;
          uVar4 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_005826a8(lVar6,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (iVar1 == 3) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar2 = *(uint *)(lVar6 + 0x18);
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar2 | 0x80;
      if (uVar2 >> 0xe == 0) {
        param_2[2] = (char)(uVar2 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar2 = uVar2 >> 7;
        do {
          puVar7 = param_2;
          uVar4 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar7 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_00582cb4(lVar6,param_2,param_3);
    uVar10 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 8);
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar8 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar8 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar11 = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


