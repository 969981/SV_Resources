/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069ac64; name: FUN_0069ac64
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0069ac64(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *__src_00;
  ulong uVar11;
  size_t sVar12;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto LAB_0069ad1c;
    FUN_00532960(pbVar9 + 1,bVar2 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) goto LAB_0069acd4;
LAB_0069aca8:
    sVar12 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar12 < 0x80) goto LAB_0069acd8;
LAB_0069ae60:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  else {
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) != 0) goto LAB_0069aca8;
LAB_0069acd4:
      sVar12 = (size_t)(bVar2 >> 1);
LAB_0069acd8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_0069ae60;
      *param_2 = 10;
      param_2[1] = (char)sVar12;
      __src_00 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        __src_00 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar12);
      param_2 = param_2 + 2 + sVar12;
    }
LAB_0069ad1c:
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (iVar1 == 2) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x24) == 2)) {
      uVar8 = *(uint *)(param_1 + 0x18);
      *param_2 = 0x10;
      if (0x7f < uVar8) {
        param_2[1] = (byte)uVar8 | 0x80;
        uVar10 = (ulong)(long)(int)uVar8 >> 7;
        if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) == 0) {
          param_2[2] = (char)uVar10;
          param_2 = param_2 + 3;
          iVar1 = *(int *)(param_1 + 0x24);
        }
        else {
          param_2 = param_2 + 3;
          do {
            puVar6 = param_2;
            uVar7 = uVar10 >> 7;
            puVar6[-1] = (byte)uVar10 | 0x80;
            param_2 = puVar6 + 1;
            uVar11 = uVar10 >> 0xe;
            uVar10 = uVar7;
          } while (uVar11 != 0);
          *puVar6 = (char)uVar7;
          iVar1 = *(int *)(param_1 + 0x24);
        }
        goto joined_r0x0069ad58;
      }
    }
    else {
      uVar8 = 0;
      *param_2 = 0x10;
    }
    param_2[1] = (char)uVar8;
    param_2 = param_2 + 2;
    iVar1 = *(int *)(param_1 + 0x24);
  }
joined_r0x0069ad58:
  if (iVar1 == 3) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x18);
    *param_2 = 0x1a;
    uVar8 = *(uint *)(lVar5 + 0x18);
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)(uVar8 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar8 >> 0xe;
          uVar8 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar5,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (iVar1 == 4) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x18);
    *param_2 = 0x22;
    uVar8 = *(uint *)(lVar5 + 0x18);
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)(uVar8 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar8 >> 0xe;
          uVar8 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar5,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x24);
  }
  if (iVar1 == 5) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x18);
    *param_2 = 0x2a;
    uVar8 = *(uint *)(lVar5 + 0x18);
    if (uVar8 < 0x80) {
      param_2[1] = (byte)uVar8;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        param_2[2] = (char)(uVar8 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar8 >> 0xe;
          uVar8 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00268924(lVar5,param_2,param_3);
    uVar10 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar10 = *(ulong *)(param_1 + 8);
  }
  if ((uVar10 & 1) != 0) {
    uVar10 = uVar10 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar12 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar12) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar12);
    param_2 = param_2 + sVar12;
  }
  return param_2;
}


