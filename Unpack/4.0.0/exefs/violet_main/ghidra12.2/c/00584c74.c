/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00584c74; name: FUN_00584c74
 */


undefined1 * FUN_00584c74(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) != 0) goto LAB_00584cb8;
LAB_00584ce4:
      sVar11 = (size_t)(bVar2 >> 1);
LAB_00584ce8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_00584d68;
      *param_2 = 10;
      param_2[1] = (char)sVar11;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar11);
      param_2 = param_2 + 2 + sVar11;
    }
LAB_00584d2c:
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_00584d88;
LAB_00584d38:
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar8;
      goto joined_r0x00584d54;
    }
LAB_00584dec:
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_00584df8;
LAB_00584e48:
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x00584eb8;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00584d2c;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_00584ce4;
LAB_00584cb8:
    sVar11 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar11 < 0x80) goto LAB_00584ce8;
LAB_00584d68:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_00584d38;
LAB_00584d88:
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_00584dec;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
joined_r0x00584d54:
    if ((bVar2 & 1) == 0) {
      sVar11 = (size_t)(bVar2 >> 1);
LAB_00584da8:
      if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar11;
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar10,sVar11);
        param_2 = param_2 + 2 + sVar11;
        goto LAB_00584dec;
      }
    }
    else {
      sVar11 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar11 < 0x80) goto LAB_00584da8;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar8,param_2);
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_00584e48;
LAB_00584df8:
    if (bVar2 < 2) goto joined_r0x00584eb8;
    FUN_00532960(pbVar8 + 1,bVar2 >> 1);
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
  }
  if ((bVar2 & 1) == 0) {
    sVar11 = (size_t)(bVar2 >> 1);
LAB_00584e68:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x1a;
      param_2[1] = (char)sVar11;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar11);
      param_2 = param_2 + 2 + sVar11;
      goto joined_r0x00584eb8;
    }
  }
  else {
    sVar11 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar11 < 0x80) goto LAB_00584e68;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,3,pbVar8,param_2);
joined_r0x00584eb8:
  if ((param_1 != PTR_DAT_047ce030) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *param_2 = 0x22;
    uVar1 = *(uint *)(lVar5 + 0x1c);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar1 >> 7;
          puVar6[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_004eb338(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar11 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


