/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00612a64; name: FUN_00612a64
 */


undefined1 * FUN_00612a64(undefined *param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
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
  byte *__src_00;
  size_t sVar12;
  int iVar13;
  
  pbVar10 = *(byte **)(param_1 + 0x28);
  bVar3 = *pbVar10;
  puVar6 = PTR_DAT_047ceda8;
  if ((bVar3 & 1) == 0) {
    if (bVar3 < 2) goto joined_r0x00612e6c;
    FUN_00532960(pbVar10 + 1,bVar3 >> 1);
    pbVar10 = *(byte **)(param_1 + 0x28);
    bVar3 = *pbVar10;
    if ((bVar3 & 1) == 0) goto LAB_00612ad8;
LAB_00612aac:
    sVar12 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar12 < 0x80) goto LAB_00612adc;
  }
  else {
    if (*(long *)(pbVar10 + 8) == 0) goto joined_r0x00612e6c;
    FUN_00532960(*(undefined8 *)(pbVar10 + 0x10));
    pbVar10 = *(byte **)(param_1 + 0x28);
    bVar3 = *pbVar10;
    if ((bVar3 & 1) != 0) goto LAB_00612aac;
LAB_00612ad8:
    sVar12 = (size_t)(bVar3 >> 1);
LAB_00612adc:
    if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)sVar12;
      __src_00 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        __src_00 = pbVar10 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar12);
      param_2 = param_2 + 2 + sVar12;
      puVar6 = PTR_DAT_047ceda8;
      goto joined_r0x00612e6c;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar10,param_2);
  puVar6 = PTR_DAT_047ceda8;
joined_r0x00612e6c:
  PTR_DAT_047ceda8 = puVar6;
  if ((param_1 != puVar6) && (lVar7 = *(long *)(param_1 + 0x30), lVar7 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar7 = *(long *)(param_1 + 0x30);
    }
    *param_2 = 0x12;
    uVar2 = *(uint *)(lVar7 + 0x20);
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
          puVar8 = param_2;
          uVar4 = uVar2 >> 7;
          puVar8[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar8 + 1;
          uVar5 = uVar2 >> 0xe;
          uVar2 = uVar4;
        } while (uVar5 != 0);
        *puVar8 = (char)uVar4;
      }
    }
    param_2 = (undefined1 *)FUN_00613a8c(lVar7,param_2,param_3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar13 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar7 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar13 * 8 + 8);
      *param_2 = 0x1a;
      uVar2 = *(uint *)(lVar7 + 0x30);
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
            puVar8 = param_2;
            uVar4 = uVar2 >> 7;
            puVar8[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_006144c8(lVar7,param_2,param_3);
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
  }
  if (param_1 != puVar6) {
    lVar7 = *(long *)(param_1 + 0x38);
    if (lVar7 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x38);
      }
      *param_2 = 0x22;
      uVar2 = *(uint *)(lVar7 + 0x1c);
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
            puVar8 = param_2;
            uVar4 = uVar2 >> 7;
            puVar8[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004eb338(lVar7,param_2,param_3);
    }
    lVar7 = *(long *)(param_1 + 0x40);
    if (lVar7 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x40);
      }
      *param_2 = 0x2a;
      uVar2 = *(uint *)(lVar7 + 0x1c);
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
            puVar8 = param_2;
            uVar4 = uVar2 >> 7;
            puVar8[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_00513f18(lVar7,param_2,param_3);
    }
    lVar7 = *(long *)(param_1 + 0x48);
    if (lVar7 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar7 = *(long *)(param_1 + 0x48);
      }
      *param_2 = 0x32;
      uVar2 = *(uint *)(lVar7 + 0x1c);
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
            puVar8 = param_2;
            uVar4 = uVar2 >> 7;
            puVar8[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar8 + 1;
            uVar5 = uVar2 >> 0xe;
            uVar2 = uVar4;
          } while (uVar5 != 0);
          *puVar8 = (char)uVar4;
        }
      }
      param_2 = (undefined1 *)FUN_004eb338(lVar7,param_2,param_3);
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
    sVar12 = (size_t)(int)uVar9;
    if (*param_3 - (long)param_2 < (long)sVar12) {
      puVar8 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar9,param_2);
      return puVar8;
    }
    memcpy(param_2,__src,sVar12);
    param_2 = param_2 + sVar12;
  }
  return param_2;
}


