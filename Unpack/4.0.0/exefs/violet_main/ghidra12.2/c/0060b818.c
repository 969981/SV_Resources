/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060b818; name: FUN_0060b818
 */


undefined1 * FUN_0060b818(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  void *__src;
  ulong uVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  size_t sVar14;
  int iVar15;
  
  pbVar10 = *(byte **)(param_1 + 0x40);
  bVar3 = *pbVar10;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      FUN_00532960(pbVar10 + 1,bVar3 >> 1);
      pbVar10 = *(byte **)(param_1 + 0x40);
      bVar3 = *pbVar10;
      if ((bVar3 & 1) != 0) goto LAB_0060b860;
LAB_0060b88c:
      sVar14 = (size_t)(bVar3 >> 1);
LAB_0060b890:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar14) goto LAB_0060b910;
      *param_2 = 10;
      param_2[1] = (char)sVar14;
      pbVar12 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      memcpy(param_2 + 2,pbVar12,sVar14);
      param_2 = param_2 + 2 + sVar14;
    }
LAB_0060b8d4:
    pbVar10 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar10;
    if ((bVar3 & 1) != 0) goto LAB_0060b930;
LAB_0060b8e0:
    puVar6 = PTR_DAT_047ced30;
    if (1 < bVar3) {
      FUN_00532960(pbVar10 + 1,bVar3 >> 1);
      pbVar10 = *(byte **)(param_1 + 0x48);
      bVar3 = *pbVar10;
      goto joined_r0x0060b8fc;
    }
  }
  else {
    if (*(long *)(pbVar10 + 8) == 0) goto LAB_0060b8d4;
    FUN_00532960(*(undefined8 *)(pbVar10 + 0x10));
    pbVar10 = *(byte **)(param_1 + 0x40);
    bVar3 = *pbVar10;
    if ((bVar3 & 1) == 0) goto LAB_0060b88c;
LAB_0060b860:
    sVar14 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar14 < 0x80) goto LAB_0060b890;
LAB_0060b910:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar10,param_2);
    pbVar10 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar10;
    if ((bVar3 & 1) == 0) goto LAB_0060b8e0;
LAB_0060b930:
    puVar6 = PTR_DAT_047ced30;
    if (*(long *)(pbVar10 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar10 + 0x10));
      pbVar10 = *(byte **)(param_1 + 0x48);
      bVar3 = *pbVar10;
joined_r0x0060b8fc:
      if ((bVar3 & 1) == 0) {
        sVar14 = (size_t)(bVar3 >> 1);
LAB_0060b950:
        if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (char)sVar14;
          pbVar12 = *(byte **)(pbVar10 + 0x10);
          if ((*pbVar10 & 1) == 0) {
            pbVar12 = pbVar10 + 1;
          }
          memcpy(param_2 + 2,pbVar12,sVar14);
          param_2 = param_2 + 2 + sVar14;
          puVar6 = PTR_DAT_047ced30;
          goto joined_r0x0060b9a0;
        }
      }
      else {
        sVar14 = *(size_t *)(pbVar10 + 8);
        if ((long)sVar14 < 0x80) goto LAB_0060b950;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar10,param_2);
      puVar6 = PTR_DAT_047ced30;
    }
  }
joined_r0x0060b9a0:
  PTR_DAT_047ced30 = puVar6;
  if ((param_1 != puVar6) && (lVar7 = *(long *)(param_1 + 0x50), lVar7 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar7 = *(long *)(param_1 + 0x50);
    }
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar7 + 0x24);
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
          puVar8 = param_2;
          uVar4 = uVar1 >> 7;
          puVar8[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar8 + 1;
          uVar5 = uVar1 >> 0xe;
          uVar1 = uVar4;
        } while (uVar5 != 0);
        *puVar8 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_0060cc88(lVar7,param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar15 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar15 * 8 + 8);
      *param_2 = 0x22;
      uVar1 = *(uint *)(lVar7 + 0x30);
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
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            puVar8[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0060fe84(lVar7,param_2,param_3);
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar2);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x28;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x68);
      *param_2 = 0x28;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      iVar2 = *(int *)(param_1 + 0x30);
      goto joined_r0x0060bb88;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe != 0) {
      uVar11 = (ulong)(long)(int)uVar1 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar8 = param_2;
        uVar9 = uVar11 >> 7;
        puVar8[-1] = (byte)uVar11 | 0x80;
        param_2 = puVar8 + 1;
        uVar13 = uVar11 >> 0xe;
        uVar11 = uVar9;
      } while (uVar13 != 0);
      *puVar8 = (char)uVar9;
      iVar2 = *(int *)(param_1 + 0x30);
      goto joined_r0x0060bb88;
    }
    param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
    param_2 = param_2 + 3;
  }
  iVar2 = *(int *)(param_1 + 0x30);
joined_r0x0060bb88:
  if (iVar2 != 0) {
    iVar15 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar15 * 8 + 8);
      *param_2 = 0x32;
      uVar1 = *(uint *)(lVar7 + 0x28);
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
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            puVar8[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0060eee0(lVar7,param_2,param_3);
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar2);
  }
  if (param_1 != puVar6) {
    lVar7 = *(long *)(param_1 + 0x58);
    if (lVar7 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x58);
      }
      *param_2 = 0x3a;
      uVar1 = *(uint *)(lVar7 + 100);
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
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            puVar8[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_0060dc84(lVar7,param_2,param_3);
    }
    lVar7 = *(long *)(param_1 + 0x60);
    if (lVar7 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x60);
      }
      *param_2 = 0x42;
      uVar1 = *(uint *)(lVar7 + 0x34);
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
            puVar8 = param_2;
            uVar4 = uVar1 >> 7;
            puVar8[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar1 >> 0xe;
            uVar1 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_00264608(lVar7,param_2,param_3);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar11 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      __src = (void *)(uVar11 + 9);
      uVar9 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    else {
      uVar9 = *(ulong *)(uVar11 + 0x10);
      __src = *(void **)(uVar11 + 0x18);
    }
    sVar14 = (size_t)(int)uVar9;
    if (*param_3 - (long)param_2 < (long)sVar14) {
      puVar8 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar9,param_2);
      return puVar8;
    }
    memcpy(param_2,__src,sVar14);
    param_2 = param_2 + sVar14;
  }
  return param_2;
}


