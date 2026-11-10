/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00607984; name: FUN_00607984
 */


undefined1 * FUN_00607984(undefined *param_1,undefined1 *param_2,long *param_3)

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
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  int iVar14;
  
  pbVar9 = *(byte **)(param_1 + 0x40);
  bVar3 = *pbVar9;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x40);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) != 0) goto LAB_006079cc;
LAB_006079f8:
      sVar13 = (size_t)(bVar3 >> 1);
LAB_006079fc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00607a7c;
      *param_2 = 10;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
    }
LAB_00607a40:
    pbVar9 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) != 0) goto LAB_00607a9c;
LAB_00607a4c:
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar3 = *pbVar9;
      goto joined_r0x00607a68;
    }
LAB_00607b00:
    iVar1 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00607a40;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x40);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) goto LAB_006079f8;
LAB_006079cc:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_006079fc;
LAB_00607a7c:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) goto LAB_00607a4c;
LAB_00607a9c:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_00607b00;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x48);
    bVar3 = *pbVar9;
joined_r0x00607a68:
    if ((bVar3 & 1) == 0) {
      sVar13 = (size_t)(bVar3 >> 1);
LAB_00607abc:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 2,pbVar11,sVar13);
        param_2 = param_2 + 2 + sVar13;
        goto LAB_00607b00;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_00607abc;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar9,param_2);
    iVar1 = *(int *)(param_1 + 0x18);
  }
  if (iVar1 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar14 * 8 + 8);
      *param_2 = 0x1a;
      uVar2 = *(uint *)(lVar6 + 0x30);
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
      param_2 = (undefined1 *)FUN_0060fe84(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar1);
  }
  uVar2 = *(uint *)(param_1 + 0x58);
  if (uVar2 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x20;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar2 = *(uint *)(param_1 + 0x58);
      *param_2 = 0x20;
    }
    if (uVar2 < 0x80) {
      param_2[1] = (byte)uVar2;
      param_2 = param_2 + 2;
      iVar1 = *(int *)(param_1 + 0x30);
      goto joined_r0x00607c54;
    }
    param_2[1] = (byte)uVar2 | 0x80;
    if (uVar2 >> 0xe != 0) {
      uVar10 = (ulong)(long)(int)uVar2 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar7 = param_2;
        uVar8 = uVar10 >> 7;
        puVar7[-1] = (byte)uVar10 | 0x80;
        param_2 = puVar7 + 1;
        uVar12 = uVar10 >> 0xe;
        uVar10 = uVar8;
      } while (uVar12 != 0);
      *puVar7 = (char)uVar8;
      iVar1 = *(int *)(param_1 + 0x30);
      goto joined_r0x00607c54;
    }
    param_2[2] = (char)((ulong)(long)(int)uVar2 >> 7);
    param_2 = param_2 + 3;
  }
  iVar1 = *(int *)(param_1 + 0x30);
joined_r0x00607c54:
  if (iVar1 != 0) {
    iVar14 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar14 * 8 + 8);
      *param_2 = 0x2a;
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
      param_2 = (undefined1 *)FUN_0060eee0(lVar6,param_2,param_3);
      iVar14 = iVar14 + 1;
    } while (iVar14 != iVar1);
  }
  if ((param_1 != PTR_DAT_047cebf8) && (lVar6 = *(long *)(param_1 + 0x50), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x50);
    }
    *param_2 = 0x32;
    uVar2 = *(uint *)(lVar6 + 100);
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
    param_2 = (undefined1 *)FUN_0060dc84(lVar6,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar8 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar8 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = param_2 + sVar13;
  }
  return param_2;
}


