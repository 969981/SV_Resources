/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0071c08c; name: FUN_0071c08c
 */


undefined1 * FUN_0071c08c(undefined *param_1,undefined1 *param_2,long *param_3)

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
  ulong uVar11;
  size_t sVar12;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) != 0) goto LAB_0071c0d0;
LAB_0071c0fc:
      sVar12 = (size_t)(bVar2 >> 1);
LAB_0071c100:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) goto LAB_0071c184;
      *param_2 = 10;
      param_2[1] = (char)sVar12;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar12);
      param_2 = param_2 + 2 + sVar12;
    }
LAB_0071c144:
    uVar1 = *(uint *)(param_1 + 0x30);
    if (uVar1 == 0) goto joined_r0x0071c1f4;
LAB_0071c14c:
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x30);
      *param_2 = 0x10;
    }
    if (0x7f < uVar1) {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar9 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar6 = param_2;
          uVar7 = uVar9 >> 7;
          puVar6[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar6 + 1;
          uVar11 = uVar9 >> 0xe;
          uVar9 = uVar7;
        } while (uVar11 != 0);
        *puVar6 = (char)uVar7;
      }
      goto joined_r0x0071c1f4;
    }
    param_2[1] = (byte)uVar1;
    param_2 = param_2 + 2;
    if (param_1 != PTR_DAT_047cffc8) goto LAB_0071c1f8;
LAB_0071c280:
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_0071c2d8;
LAB_0071c28c:
    if (1 < bVar2) {
      sVar12 = (size_t)(bVar2 >> 1);
      goto LAB_0071c2e8;
    }
LAB_0071c32c:
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_0071c338;
LAB_0071c368:
    sVar12 = *(size_t *)(pbVar8 + 8);
    if (sVar12 != 0) {
      if ((long)sVar12 < 0x80) goto LAB_0071c378;
      goto LAB_0071c3d8;
    }
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto LAB_0071c144;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_0071c0fc;
LAB_0071c0d0:
    sVar12 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar12 < 0x80) goto LAB_0071c100;
LAB_0071c184:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
    uVar1 = *(uint *)(param_1 + 0x30);
    if (uVar1 != 0) goto LAB_0071c14c;
joined_r0x0071c1f4:
    if (param_1 == PTR_DAT_047cffc8) goto LAB_0071c280;
LAB_0071c1f8:
    lVar5 = *(long *)(param_1 + 0x28);
    if (lVar5 == 0) goto LAB_0071c280;
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *param_2 = 0x1a;
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
    param_2 = (undefined1 *)FUN_00513f18(lVar5,param_2,param_3);
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_0071c28c;
LAB_0071c2d8:
    sVar12 = *(size_t *)(pbVar8 + 8);
    if (sVar12 == 0) goto LAB_0071c32c;
    if ((long)sVar12 < 0x80) {
LAB_0071c2e8:
      if ((long)sVar12 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x22;
        param_2[1] = (char)sVar12;
        pbVar10 = *(byte **)(pbVar8 + 0x10);
        if ((*pbVar8 & 1) == 0) {
          pbVar10 = pbVar8 + 1;
        }
        memcpy(param_2 + 2,pbVar10,sVar12);
        param_2 = param_2 + 2 + sVar12;
        goto LAB_0071c32c;
      }
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,4,pbVar8,param_2);
    pbVar8 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_0071c368;
LAB_0071c338:
    if (1 < bVar2) {
      sVar12 = (size_t)(bVar2 >> 1);
LAB_0071c378:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar12) {
LAB_0071c3d8:
        param_2 = (undefined1 *)FUN_0052c95c(param_3,5,pbVar8,param_2);
        uVar9 = *(ulong *)(param_1 + 8);
        goto joined_r0x0071c3f0;
      }
      *param_2 = 0x2a;
      param_2[1] = (char)sVar12;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar12);
      param_2 = param_2 + 2 + sVar12;
    }
  }
  uVar9 = *(ulong *)(param_1 + 8);
joined_r0x0071c3f0:
  if ((uVar9 & 1) != 0) {
    uVar9 = uVar9 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
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


