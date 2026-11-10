/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00719f90; name: FUN_00719f90
 */


undefined2 * FUN_00719f90(undefined *param_1,undefined2 *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined2 *puVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
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
      if ((bVar1 & 1) != 0) goto LAB_00719fd8;
LAB_0071a004:
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a008:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_0071a088;
      *(undefined1 *)param_2 = 10;
      *(char *)((long)param_2 + 1) = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 1,pbVar11,sVar13);
      param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
    }
LAB_0071a04c:
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a0a8;
LAB_0071a058:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar9;
      goto joined_r0x0071a074;
    }
LAB_0071a10c:
    uVar8 = *(uint *)(param_1 + 0x78);
    if (uVar8 == 0) goto LAB_0071a1cc;
LAB_0071a114:
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x78);
      *(undefined1 *)param_2 = 0x18;
      if (0x7f < uVar8) goto LAB_0071a1ac;
LAB_0071a130:
      *(char *)((long)param_2 + 1) = (char)uVar8;
      param_2 = param_2 + 1;
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar9;
      goto joined_r0x0071a140;
    }
    *(undefined1 *)param_2 = 0x18;
    if (uVar8 < 0x80) goto LAB_0071a130;
LAB_0071a1ac:
    *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
    if (uVar8 >> 0xe == 0) {
      *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
      param_2 = (undefined2 *)((long)param_2 + 3);
      goto LAB_0071a1cc;
    }
    uVar10 = (ulong)(long)(int)uVar8 >> 7;
    param_2 = (undefined2 *)((long)param_2 + 3);
    do {
      puVar6 = param_2;
      uVar7 = uVar10 >> 7;
      *(byte *)((long)puVar6 + -1) = (byte)uVar10 | 0x80;
      param_2 = (undefined2 *)((long)puVar6 + 1);
      uVar12 = uVar10 >> 0xe;
      uVar10 = uVar7;
    } while (uVar12 != 0);
    *(char *)puVar6 = (char)uVar7;
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a1d8;
LAB_0071a144:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a248;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
joined_r0x0071a1f4:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a204:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x22;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a248;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a204;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,4,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a2d8;
LAB_0071a254:
    if (bVar1 < 2) goto LAB_0071a33c;
    FUN_00532960(pbVar9 + 1,bVar1 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar9;
joined_r0x0071a2f0:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a2f8:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x2a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a33c;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a2f8;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,5,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x30);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a348;
LAB_0071a398:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a3fc;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x30);
    bVar1 = *pbVar9;
joined_r0x0071a364:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a3b8:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x32;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a3fc;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a3b8;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,6,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x38);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a458;
LAB_0071a408:
    if (bVar1 < 2) goto LAB_0071a4bc;
    FUN_00532960(pbVar9 + 1,bVar1 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x38);
    bVar1 = *pbVar9;
joined_r0x0071a470:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a478:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x3a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a4bc;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a478;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,7,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x40);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a4c8;
LAB_0071a518:
    puVar4 = PTR_DAT_047d00b8;
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x40);
      bVar1 = *pbVar9;
joined_r0x0071a4e4:
      if ((bVar1 & 1) == 0) {
        sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a538:
        if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
          *(undefined1 *)param_2 = 0x42;
          *(char *)((long)param_2 + 1) = (char)sVar13;
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
          memcpy(param_2 + 1,pbVar11,sVar13);
          param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
          puVar4 = PTR_DAT_047d00b8;
          goto joined_r0x0071a68c;
        }
      }
      else {
        sVar13 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar13 < 0x80) goto LAB_0071a538;
      }
      param_2 = (undefined2 *)FUN_0052c95c(param_3,8,pbVar9,param_2);
      puVar4 = PTR_DAT_047d00b8;
    }
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a04c;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a004;
LAB_00719fd8:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_0071a008;
LAB_0071a088:
    param_2 = (undefined2 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a058;
LAB_0071a0a8:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a10c;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar9;
joined_r0x0071a074:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a0c8:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x12;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a10c;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a0c8;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,2,pbVar9,param_2);
    uVar8 = *(uint *)(param_1 + 0x78);
    if (uVar8 != 0) goto LAB_0071a114;
LAB_0071a1cc:
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar9;
joined_r0x0071a140:
    if ((bVar1 & 1) != 0) goto LAB_0071a144;
LAB_0071a1d8:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar9;
      goto joined_r0x0071a1f4;
    }
LAB_0071a248:
    pbVar9 = *(byte **)(param_1 + 0x28);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a254;
LAB_0071a2d8:
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x28);
      bVar1 = *pbVar9;
      goto joined_r0x0071a2f0;
    }
LAB_0071a33c:
    pbVar9 = *(byte **)(param_1 + 0x30);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a398;
LAB_0071a348:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x30);
      bVar1 = *pbVar9;
      goto joined_r0x0071a364;
    }
LAB_0071a3fc:
    pbVar9 = *(byte **)(param_1 + 0x38);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a408;
LAB_0071a458:
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x38);
      bVar1 = *pbVar9;
      goto joined_r0x0071a470;
    }
LAB_0071a4bc:
    pbVar9 = *(byte **)(param_1 + 0x40);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a518;
LAB_0071a4c8:
    puVar4 = PTR_DAT_047d00b8;
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x40);
      bVar1 = *pbVar9;
      goto joined_r0x0071a4e4;
    }
  }
joined_r0x0071a68c:
  PTR_DAT_047d00b8 = puVar4;
  if ((param_1 != puVar4) && (lVar5 = *(long *)(param_1 + 0x68), lVar5 != 0)) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x68);
    }
    *(undefined1 *)param_2 = 0x6a;
    uVar8 = *(uint *)(lVar5 + 0x18);
    if (uVar8 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar8;
      param_2 = param_2 + 1;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)(uVar8 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      else {
        param_2 = (undefined2 *)((long)param_2 + 3);
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar2 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = (byte)uVar8 | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *(char *)puVar6 = (char)uVar2;
      }
    }
    param_2 = (undefined2 *)FUN_00718c64(lVar5,param_2,param_3);
  }
  uVar8 = *(uint *)(param_1 + 0x7c);
  if (uVar8 == 0) {
LAB_0071a6d8:
    pbVar9 = *(byte **)(param_1 + 0x48);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a6e4;
LAB_0071a648:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a754;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x48);
    bVar1 = *pbVar9;
joined_r0x0071a660:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a710:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
        *(undefined1 *)param_2 = 0x7a;
        *(char *)((long)param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy(param_2 + 1,pbVar11,sVar13);
        param_2 = (undefined2 *)((long)(param_2 + 1) + sVar13);
        goto LAB_0071a754;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a710;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0xf,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x50);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a7e4;
LAB_0071a760:
    if (bVar1 < 2) goto LAB_0071a848;
    FUN_00532960(pbVar9 + 1,bVar1 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x50);
    bVar1 = *pbVar9;
joined_r0x0071a77c:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a804:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x182;
        *(char *)(param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar13);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar13);
        goto LAB_0071a848;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a804;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x10,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x58);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a854;
LAB_0071a8a4:
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_0071a908;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x58);
    bVar1 = *pbVar9;
joined_r0x0071a8bc:
    if ((bVar1 & 1) == 0) {
      sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a8c4:
      if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
        *param_2 = 0x18a;
        *(char *)(param_2 + 1) = (char)sVar13;
        pbVar11 = *(byte **)(pbVar9 + 0x10);
        if ((*pbVar9 & 1) == 0) {
          pbVar11 = pbVar9 + 1;
        }
        memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar13);
        param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar13);
        goto LAB_0071a908;
      }
    }
    else {
      sVar13 = *(size_t *)(pbVar9 + 8);
      if ((long)sVar13 < 0x80) goto LAB_0071a8c4;
    }
    param_2 = (undefined2 *)FUN_0052c95c(param_3,0x11,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a964;
LAB_0071a914:
    if (bVar1 < 2) goto joined_r0x0071a9cc;
    FUN_00532960(pbVar9 + 1,bVar1 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar1 = *pbVar9;
  }
  else {
    if (param_2 < (undefined2 *)*param_3) {
      *(undefined1 *)param_2 = 0x70;
    }
    else {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(uint *)(param_1 + 0x7c);
      *(undefined1 *)param_2 = 0x70;
    }
    if (uVar8 < 0x80) {
      *(byte *)((long)param_2 + 1) = (byte)uVar8;
      param_2 = param_2 + 1;
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar1 = *pbVar9;
    }
    else {
      *(byte *)((long)param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)(param_2 + 1) = (char)((ulong)(long)(int)uVar8 >> 7);
        param_2 = (undefined2 *)((long)param_2 + 3);
        goto LAB_0071a6d8;
      }
      uVar10 = (ulong)(long)(int)uVar8 >> 7;
      param_2 = (undefined2 *)((long)param_2 + 3);
      do {
        puVar6 = param_2;
        uVar7 = uVar10 >> 7;
        *(byte *)((long)puVar6 + -1) = (byte)uVar10 | 0x80;
        param_2 = (undefined2 *)((long)puVar6 + 1);
        uVar12 = uVar10 >> 0xe;
        uVar10 = uVar7;
      } while (uVar12 != 0);
      *(char *)puVar6 = (char)uVar7;
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar1 = *pbVar9;
    }
    if ((bVar1 & 1) != 0) goto LAB_0071a648;
LAB_0071a6e4:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x48);
      bVar1 = *pbVar9;
      goto joined_r0x0071a660;
    }
LAB_0071a754:
    pbVar9 = *(byte **)(param_1 + 0x50);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a760;
LAB_0071a7e4:
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x50);
      bVar1 = *pbVar9;
      goto joined_r0x0071a77c;
    }
LAB_0071a848:
    pbVar9 = *(byte **)(param_1 + 0x58);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) != 0) goto LAB_0071a8a4;
LAB_0071a854:
    if (1 < bVar1) {
      FUN_00532960(pbVar9 + 1,bVar1 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x58);
      bVar1 = *pbVar9;
      goto joined_r0x0071a8bc;
    }
LAB_0071a908:
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar1 = *pbVar9;
    if ((bVar1 & 1) == 0) goto LAB_0071a914;
LAB_0071a964:
    if (*(long *)(pbVar9 + 8) == 0) goto joined_r0x0071a9cc;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar1 = *pbVar9;
  }
  if ((bVar1 & 1) == 0) {
    sVar13 = (size_t)(bVar1 >> 1);
LAB_0071a984:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xd) {
      *param_2 = 0x192;
      *(char *)(param_2 + 1) = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy((undefined1 *)((long)param_2 + 3),pbVar11,sVar13);
      param_2 = (undefined2 *)((undefined1 *)((long)param_2 + 3) + sVar13);
      goto joined_r0x0071a9cc;
    }
  }
  else {
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_0071a984;
  }
  param_2 = (undefined2 *)FUN_0052c95c(param_3,0x12,pbVar9,param_2);
joined_r0x0071a9cc:
  if ((param_1 != puVar4) && (lVar5 = *(long *)(param_1 + 0x70), lVar5 != 0)) {
    if ((undefined2 *)*param_3 <= param_2) {
      param_2 = (undefined2 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x70);
    }
    *param_2 = 0x19a;
    uVar8 = *(uint *)(lVar5 + 0x1c);
    if (uVar8 < 0x80) {
      *(byte *)(param_2 + 1) = (byte)uVar8;
      param_2 = (undefined2 *)((long)param_2 + 3);
    }
    else {
      *(byte *)(param_2 + 1) = (byte)uVar8 | 0x80;
      if (uVar8 >> 0xe == 0) {
        *(char *)((long)param_2 + 3) = (char)(uVar8 >> 7);
        param_2 = param_2 + 2;
      }
      else {
        param_2 = param_2 + 2;
        uVar8 = uVar8 >> 7;
        do {
          puVar6 = param_2;
          uVar2 = uVar8 >> 7;
          *(byte *)((long)puVar6 + -1) = (byte)uVar8 | 0x80;
          param_2 = (undefined2 *)((long)puVar6 + 1);
          uVar3 = uVar8 >> 0xe;
          uVar8 = uVar2;
        } while (uVar3 != 0);
        *(char *)puVar6 = (char)uVar2;
      }
    }
    param_2 = (undefined2 *)FUN_00513f18(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar10 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar10 + 8) & 1) == 0) {
      __src = (void *)(uVar10 + 9);
      uVar7 = (ulong)(*(byte *)(uVar10 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar10 + 0x10);
      __src = *(void **)(uVar10 + 0x18);
    }
    sVar13 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar13) {
      puVar6 = (undefined2 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar13);
    param_2 = (undefined2 *)((long)param_2 + sVar13);
  }
  return param_2;
}


