/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00609308; name: FUN_00609308
 */


undefined1 * FUN_00609308(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  size_t sVar13;
  
  pbVar9 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar9;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar9 + 1,bVar2 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar9;
      if ((bVar2 & 1) != 0) goto LAB_00609350;
LAB_0060937c:
      sVar13 = (size_t)(bVar2 >> 1);
LAB_00609380:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar13) goto LAB_00609400;
      *param_2 = 10;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
    }
LAB_006093c4:
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar9;
    if ((bVar2 & 1) != 0) goto LAB_00609420;
LAB_006093d0:
    puVar5 = PTR_DAT_047cee58;
    if (1 < bVar2) {
      FUN_00532960(pbVar9 + 1,bVar2 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar9;
      goto joined_r0x006093ec;
    }
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_006093c4;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) goto LAB_0060937c;
LAB_00609350:
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_00609380;
LAB_00609400:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) goto LAB_006093d0;
LAB_00609420:
    puVar5 = PTR_DAT_047cee58;
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar9;
joined_r0x006093ec:
      if ((bVar2 & 1) == 0) {
        sVar13 = (size_t)(bVar2 >> 1);
LAB_00609440:
        if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (char)sVar13;
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
          memcpy(param_2 + 2,pbVar11,sVar13);
          param_2 = param_2 + 2 + sVar13;
          puVar5 = PTR_DAT_047cee58;
          goto joined_r0x00609490;
        }
      }
      else {
        sVar13 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar13 < 0x80) goto LAB_00609440;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar9,param_2);
      puVar5 = PTR_DAT_047cee58;
    }
  }
joined_r0x00609490:
  PTR_DAT_047cee58 = puVar5;
  if (param_1 != puVar5) {
    lVar6 = *(long *)(param_1 + 0x28);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x28);
      }
      *param_2 = 0x1a;
      uVar1 = *(uint *)(lVar6 + 0x28);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_00610968(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x30);
      }
      *param_2 = 0x22;
      uVar1 = *(uint *)(lVar6 + 0x1c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_00513f18(lVar6,param_2,param_3);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  if (uVar1 == 0) {
LAB_0060966c:
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar9;
    if ((bVar2 & 1) == 0) goto LAB_00609678;
LAB_006095dc:
    if (*(long *)(pbVar9 + 8) == 0) goto joined_r0x006096ec;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar9;
  }
  else {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x28;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x40);
      *param_2 = 0x28;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar9;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
        goto LAB_0060966c;
      }
      uVar10 = (ulong)(long)(int)uVar1 >> 7;
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
      pbVar9 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar9;
    }
    if ((bVar2 & 1) != 0) goto LAB_006095dc;
LAB_00609678:
    if (bVar2 < 2) goto joined_r0x006096ec;
    FUN_00532960(pbVar9 + 1,bVar2 >> 1);
    pbVar9 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar9;
  }
  if ((bVar2 & 1) == 0) {
    sVar13 = (size_t)(bVar2 >> 1);
LAB_006096a4:
    if ((long)sVar13 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x32;
      param_2[1] = (char)sVar13;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar13);
      param_2 = param_2 + 2 + sVar13;
      goto joined_r0x006096ec;
    }
  }
  else {
    sVar13 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar13 < 0x80) goto LAB_006096a4;
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,6,pbVar9,param_2);
joined_r0x006096ec:
  if ((param_1 != puVar5) && (lVar6 = *(long *)(param_1 + 0x38), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x38);
    }
    *param_2 = 0x3a;
    uVar1 = *(uint *)(lVar6 + 0x28);
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
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_0026a5b8(lVar6,param_2,param_3);
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


