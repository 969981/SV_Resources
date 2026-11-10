/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005fe278; name: FUN_005fe278
 */


undefined1 * FUN_005fe278(long param_1,undefined1 *param_2,long *param_3)

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
  size_t sVar12;
  int iVar13;
  long lVar14;
  
  pbVar9 = *(byte **)(param_1 + 0x58);
  bVar3 = *pbVar9;
  if ((bVar3 & 1) == 0) {
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x58);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) != 0) goto LAB_005fe2c8;
LAB_005fe2f4:
      sVar12 = (size_t)(bVar3 >> 1);
LAB_005fe2f8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_005fe378;
      *param_2 = 10;
      param_2[1] = (char)sVar12;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar12);
      param_2 = param_2 + 2 + sVar12;
    }
LAB_005fe33c:
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) goto LAB_005fe348;
LAB_005fe398:
    if (*(long *)(pbVar9 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
      pbVar9 = *(byte **)(param_1 + 0x60);
      bVar3 = *pbVar9;
      goto joined_r0x005fe364;
    }
  }
  else {
    if (*(long *)(pbVar9 + 8) == 0) goto LAB_005fe33c;
    FUN_00532960(*(undefined8 *)(pbVar9 + 0x10));
    pbVar9 = *(byte **)(param_1 + 0x58);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) == 0) goto LAB_005fe2f4;
LAB_005fe2c8:
    sVar12 = *(size_t *)(pbVar9 + 8);
    if ((long)sVar12 < 0x80) goto LAB_005fe2f8;
LAB_005fe378:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar9,param_2);
    pbVar9 = *(byte **)(param_1 + 0x60);
    bVar3 = *pbVar9;
    if ((bVar3 & 1) != 0) goto LAB_005fe398;
LAB_005fe348:
    if (1 < bVar3) {
      FUN_00532960(pbVar9 + 1,bVar3 >> 1);
      pbVar9 = *(byte **)(param_1 + 0x60);
      bVar3 = *pbVar9;
joined_r0x005fe364:
      if ((bVar3 & 1) == 0) {
        sVar12 = (size_t)(bVar3 >> 1);
LAB_005fe3b8:
        if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (char)sVar12;
          pbVar11 = *(byte **)(pbVar9 + 0x10);
          if ((*pbVar9 & 1) == 0) {
            pbVar11 = pbVar9 + 1;
          }
          memcpy(param_2 + 2,pbVar11,sVar12);
          param_2 = param_2 + 2 + sVar12;
          goto LAB_005fe3fc;
        }
      }
      else {
        sVar12 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar12 < 0x80) goto LAB_005fe3b8;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar9,param_2);
      iVar1 = *(int *)(param_1 + 0x18);
      goto joined_r0x005fe4cc;
    }
  }
LAB_005fe3fc:
  iVar1 = *(int *)(param_1 + 0x18);
joined_r0x005fe4cc:
  if (iVar1 != 0) {
    iVar13 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar13 * 8 + 8);
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
      iVar13 = iVar13 + 1;
    } while (iVar13 != iVar1);
  }
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    lVar6 = 0;
    lVar14 = (ulong)*(uint *)(param_1 + 0x30) * 8;
    do {
      while( true ) {
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x38) + lVar6 + 8);
        if ((*pbVar9 & 1) == 0) break;
        FUN_00532960(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
        bVar3 = *pbVar9;
        if ((bVar3 & 1) == 0) goto LAB_005fe530;
LAB_005fe510:
        sVar12 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar12 < 0x80) goto LAB_005fe534;
LAB_005fe584:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,4,pbVar9,param_2);
        lVar6 = lVar6 + 8;
        if (lVar14 == lVar6) goto LAB_005fe5a8;
      }
      FUN_00532960(pbVar9 + 1,*pbVar9 >> 1);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) != 0) goto LAB_005fe510;
LAB_005fe530:
      sVar12 = (size_t)(bVar3 >> 1);
LAB_005fe534:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_005fe584;
      *param_2 = 0x22;
      param_2[1] = (char)sVar12;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar12);
      param_2 = param_2 + 2 + sVar12;
      lVar6 = lVar6 + 8;
    } while (lVar14 != lVar6);
  }
LAB_005fe5a8:
  if (0 < (int)*(uint *)(param_1 + 0x48)) {
    lVar6 = 0;
    lVar14 = (ulong)*(uint *)(param_1 + 0x48) * 8;
    do {
      while( true ) {
        pbVar9 = *(byte **)(*(long *)(param_1 + 0x50) + lVar6 + 8);
        if ((*pbVar9 & 1) == 0) break;
        FUN_00532960(*(undefined8 *)(pbVar9 + 0x10),*(undefined8 *)(pbVar9 + 8));
        bVar3 = *pbVar9;
        if ((bVar3 & 1) == 0) goto LAB_005fe60c;
LAB_005fe5ec:
        sVar12 = *(size_t *)(pbVar9 + 8);
        if ((long)sVar12 < 0x80) goto LAB_005fe610;
LAB_005fe660:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,5,pbVar9,param_2);
        lVar6 = lVar6 + 8;
        if (lVar14 == lVar6) goto LAB_005fe684;
      }
      FUN_00532960(pbVar9 + 1,*pbVar9 >> 1);
      bVar3 = *pbVar9;
      if ((bVar3 & 1) != 0) goto LAB_005fe5ec;
LAB_005fe60c:
      sVar12 = (size_t)(bVar3 >> 1);
LAB_005fe610:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_005fe660;
      *param_2 = 0x2a;
      param_2[1] = (char)sVar12;
      pbVar11 = *(byte **)(pbVar9 + 0x10);
      if ((*pbVar9 & 1) == 0) {
        pbVar11 = pbVar9 + 1;
      }
      memcpy(param_2 + 2,pbVar11,sVar12);
      param_2 = param_2 + 2 + sVar12;
      lVar6 = lVar6 + 8;
    } while (lVar14 != lVar6);
  }
LAB_005fe684:
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
    sVar12 = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)sVar12) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,sVar12);
    param_2 = param_2 + sVar12;
  }
  return param_2;
}


