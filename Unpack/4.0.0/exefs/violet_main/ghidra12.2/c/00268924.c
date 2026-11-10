/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00268924; name: FUN_00268924
 */


/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_00268924(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  byte *pbVar12;
  ulong uVar13;
  size_t sVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  
  iVar9 = *(int *)(param_1 + 0x1c);
  if (iVar9 == 1) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 1)) {
      uVar8 = *(uint *)(param_1 + 0x10);
      *param_2 = 8;
      if (uVar8 < 0x80) goto LAB_00268968;
      param_2[1] = (byte)uVar8 | 0x80;
      uVar11 = (ulong)(long)(int)uVar8 >> 7;
      if (((ulong)(long)(int)uVar8 >> 0xe & 0x3ffff) == 0) {
        param_2[2] = (char)uVar11;
        param_2 = param_2 + 3;
        iVar9 = *(int *)(param_1 + 0x1c);
        goto joined_r0x00268a3c;
      }
      param_2 = param_2 + 3;
      do {
        puVar6 = param_2;
        uVar7 = uVar11 >> 7;
        puVar6[-1] = (byte)uVar11 | 0x80;
        param_2 = puVar6 + 1;
        uVar13 = uVar11 >> 0xe;
        uVar11 = uVar7;
      } while (uVar13 != 0);
      *puVar6 = (char)uVar7;
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    else {
      uVar8 = 0;
      *param_2 = 8;
LAB_00268968:
      param_2[1] = (char)uVar8;
      param_2 = param_2 + 2;
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    if (iVar9 == 2) goto LAB_00268a40;
LAB_0026897c:
    if (iVar9 == 3) goto LAB_00268984;
joined_r0x00268a78:
    if (iVar9 == 4) goto LAB_00268a7c;
LAB_002689b8:
    if (iVar9 != 5) goto LAB_00268aa8;
LAB_002689c0:
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 5)) {
      uVar16 = *(undefined8 *)(param_1 + 0x10);
    }
    else {
      uVar16 = 0;
    }
    *param_2 = 0x29;
    *(undefined8 *)(param_2 + 1) = uVar16;
    iVar9 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 9;
    if (iVar9 == 6) goto LAB_00268ab0;
LAB_002689ec:
    if (iVar9 != 7) goto LAB_00268c68;
LAB_002689f4:
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      FUN_00532960(pbVar10 + 1,*pbVar10 >> 1);
      if (*(int *)(param_1 + 0x1c) == 7) goto LAB_00268af4;
LAB_00268a18:
      bVar1 = *PTR_DAT_047cba80;
      pbVar10 = PTR_DAT_047cba80;
      if ((bVar1 & 1) == 0) goto LAB_00268b00;
LAB_00268a28:
      sVar14 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar14 < 0x80) goto LAB_00268b04;
LAB_00268ef4:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,7,pbVar10,param_2);
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    else {
      FUN_00532960(*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
      if (*(int *)(param_1 + 0x1c) != 7) goto LAB_00268a18;
LAB_00268af4:
      pbVar10 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar10;
      if ((bVar1 & 1) != 0) goto LAB_00268a28;
LAB_00268b00:
      sVar14 = (size_t)(bVar1 >> 1);
LAB_00268b04:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar14) goto LAB_00268ef4;
      *param_2 = 0x3a;
      param_2[1] = (char)sVar14;
      pbVar12 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      memcpy(param_2 + 2,pbVar12,sVar14);
      param_2 = param_2 + 2 + sVar14;
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    if (iVar9 == 8) goto LAB_00268c70;
LAB_00268b54:
    iVar9 = *(int *)(param_1 + 0x1c);
  }
  else {
joined_r0x00268a3c:
    if (iVar9 != 2) goto LAB_0026897c;
LAB_00268a40:
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 2)) {
      bVar4 = *(char *)(param_1 + 0x10) != '\0';
    }
    else {
      bVar4 = false;
    }
    *param_2 = 0x10;
    param_2[1] = bVar4;
    iVar9 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 2;
    if (iVar9 != 3) goto joined_r0x00268a78;
LAB_00268984:
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 3)) {
      uVar11 = *(ulong *)(param_1 + 0x10);
      *param_2 = 0x18;
      if (uVar11 < 0x80) goto LAB_002689a4;
      param_2[1] = (byte)uVar11 | 0x80;
      if (uVar11 >> 0xe == 0) {
        param_2[2] = (char)(uVar11 >> 7);
        param_2 = param_2 + 3;
        iVar9 = *(int *)(param_1 + 0x1c);
        goto joined_r0x00268a78;
      }
      uVar11 = uVar11 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar6 = param_2;
        uVar7 = uVar11 >> 7;
        puVar6[-1] = (byte)uVar11 | 0x80;
        param_2 = puVar6 + 1;
        uVar13 = uVar11 >> 0xe;
        uVar11 = uVar7;
      } while (uVar13 != 0);
      *puVar6 = (char)uVar7;
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    else {
      uVar11 = 0;
      *param_2 = 0x18;
LAB_002689a4:
      param_2[1] = (char)uVar11;
      param_2 = param_2 + 2;
      iVar9 = *(int *)(param_1 + 0x1c);
    }
    if (iVar9 != 4) goto LAB_002689b8;
LAB_00268a7c:
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 4)) {
      uVar15 = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      uVar15 = 0;
    }
    *param_2 = 0x25;
    *(undefined4 *)(param_2 + 1) = uVar15;
    iVar9 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 5;
    if (iVar9 == 5) goto LAB_002689c0;
LAB_00268aa8:
    if (iVar9 != 6) goto LAB_002689ec;
LAB_00268ab0:
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    *param_2 = 0x32;
    uVar8 = *(uint *)(lVar5 + 0x1c);
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
          uVar2 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar6 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00513f18(lVar5,param_2,param_3);
    iVar9 = *(int *)(param_1 + 0x1c);
    if (iVar9 == 7) goto LAB_002689f4;
LAB_00268c68:
    if (iVar9 != 8) goto LAB_00268b54;
LAB_00268c70:
    pbVar10 = *(byte **)(param_1 + 0x10);
    if ((*pbVar10 & 1) == 0) {
      sVar14 = (size_t)(*pbVar10 >> 1);
LAB_00268c90:
      if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x42;
        param_2[1] = (char)sVar14;
        pbVar12 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar12 = pbVar10 + 1;
        }
        memcpy(param_2 + 2,pbVar12,sVar14);
        param_2 = param_2 + 2 + sVar14;
        iVar9 = *(int *)(param_1 + 0x1c);
        goto joined_r0x00268b5c;
      }
    }
    else {
      sVar14 = *(size_t *)(pbVar10 + 8);
      if ((long)sVar14 < 0x80) goto LAB_00268c90;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,8,pbVar10,param_2);
    iVar9 = *(int *)(param_1 + 0x1c);
  }
joined_r0x00268b5c:
  if (iVar9 == 9) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    *param_2 = 0x4a;
    uVar8 = *(uint *)(lVar5 + 0x28);
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
          uVar2 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar6 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00269c48(lVar5,param_2,param_3);
    iVar9 = *(int *)(param_1 + 0x1c);
  }
  if (iVar9 == 10) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x10);
    *param_2 = 0x52;
    uVar8 = *(uint *)(lVar5 + 0x28);
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
          uVar2 = uVar8 >> 7;
          puVar6[-1] = (byte)uVar8 | 0x80;
          param_2 = puVar6 + 1;
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *puVar6 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_0026a5b8(lVar5,param_2,param_3);
    iVar9 = *(int *)(param_1 + 0x1c);
  }
  if (iVar9 != 0xb) {
    uVar11 = *(ulong *)(param_1 + 8);
    goto joined_r0x00268e74;
  }
  pbVar10 = *(byte **)(param_1 + 0x10);
  if ((*pbVar10 & 1) == 0) {
    FUN_00532960(pbVar10 + 1,*pbVar10 >> 1);
    if (*(int *)(param_1 + 0x1c) == 0xb) goto LAB_00268dd4;
LAB_00268da0:
    bVar1 = *PTR_DAT_047cba80;
    pbVar10 = PTR_DAT_047cba80;
    if ((bVar1 & 1) == 0) goto LAB_00268de0;
LAB_00268db0:
    sVar14 = *(size_t *)(pbVar10 + 8);
    if ((long)sVar14 < 0x80) goto LAB_00268de4;
  }
  else {
    FUN_00532960(*(undefined8 *)(pbVar10 + 0x10),*(undefined8 *)(pbVar10 + 8));
    if (*(int *)(param_1 + 0x1c) != 0xb) goto LAB_00268da0;
LAB_00268dd4:
    pbVar10 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar10;
    if ((bVar1 & 1) != 0) goto LAB_00268db0;
LAB_00268de0:
    sVar14 = (size_t)(bVar1 >> 1);
LAB_00268de4:
    if ((long)sVar14 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x5a;
      param_2[1] = (char)sVar14;
      pbVar12 = *(byte **)(pbVar10 + 0x10);
      if ((*pbVar10 & 1) == 0) {
        pbVar12 = pbVar10 + 1;
      }
      memcpy(param_2 + 2,pbVar12,sVar14);
      param_2 = param_2 + 2 + sVar14;
      uVar11 = *(ulong *)(param_1 + 8);
      goto joined_r0x00268e74;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,0xb,pbVar10,param_2);
  uVar11 = *(ulong *)(param_1 + 8);
joined_r0x00268e74:
  if ((uVar11 & 1) != 0) {
    uVar11 = uVar11 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar11 + 8) & 1) == 0) {
      __src = (void *)(uVar11 + 9);
      uVar7 = (ulong)(*(byte *)(uVar11 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar11 + 0x10);
      __src = *(void **)(uVar11 + 0x18);
    }
    sVar14 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar14) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar14);
    param_2 = param_2 + sVar14;
  }
  return param_2;
}


