/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005f9a4c; name: FUN_005f9a4c
 */


undefined1 * FUN_005f9a4c(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  undefined1 uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  size_t sVar11;
  long lVar12;
  long lVar13;
  
  pbVar8 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto joined_r0x005f9d00;
    FUN_00532960(pbVar8 + 1,bVar2 >> 1);
    pbVar8 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) == 0) goto LAB_005f9ac4;
LAB_005f9a98:
    sVar11 = *(size_t *)(pbVar8 + 8);
    if ((long)sVar11 < 0x80) goto LAB_005f9ac8;
  }
  else {
    if (*(long *)(pbVar8 + 8) == 0) goto joined_r0x005f9d00;
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_005f9a98;
LAB_005f9ac4:
    sVar11 = (size_t)(bVar2 >> 1);
LAB_005f9ac8:
    if ((long)sVar11 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)sVar11;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar11);
      param_2 = param_2 + 2 + sVar11;
      goto joined_r0x005f9d00;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
joined_r0x005f9d00:
  if ((param_1 != PTR_DAT_047cebe0) && (lVar12 = *(long *)(param_1 + 0x30), lVar12 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar12 = *(long *)(param_1 + 0x30);
    }
    *param_2 = 0x12;
    uVar1 = *(uint *)(lVar12 + 0x5c);
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
          puVar5 = param_2;
          uVar3 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar5 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00607984(lVar12,param_2,param_3);
  }
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar12 = 0;
    lVar13 = (ulong)*(uint *)(param_1 + 0x18) * 8;
    do {
      while( true ) {
        pbVar8 = *(byte **)(*(long *)(param_1 + 0x20) + lVar12 + 8);
        if ((*pbVar8 & 1) != 0) break;
        FUN_00532960(pbVar8 + 1,*pbVar8 >> 1);
        bVar2 = *pbVar8;
        if ((bVar2 & 1) == 0) goto LAB_005f9c00;
LAB_005f9be0:
        sVar11 = *(size_t *)(pbVar8 + 8);
        if ((long)sVar11 < 0x80) goto LAB_005f9c04;
LAB_005f9c54:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,3,pbVar8,param_2);
        lVar12 = lVar12 + 8;
        if (lVar13 == lVar12) goto LAB_005f9c78;
      }
      FUN_00532960(*(undefined8 *)(pbVar8 + 0x10),*(undefined8 *)(pbVar8 + 8));
      bVar2 = *pbVar8;
      if ((bVar2 & 1) != 0) goto LAB_005f9be0;
LAB_005f9c00:
      sVar11 = (size_t)(bVar2 >> 1);
LAB_005f9c04:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_005f9c54;
      *param_2 = 0x1a;
      param_2[1] = (char)sVar11;
      pbVar10 = *(byte **)(pbVar8 + 0x10);
      if ((*pbVar8 & 1) == 0) {
        pbVar10 = pbVar8 + 1;
      }
      memcpy(param_2 + 2,pbVar10,sVar11);
      param_2 = param_2 + 2 + sVar11;
      lVar12 = lVar12 + 8;
    } while (lVar13 != lVar12);
  }
LAB_005f9c78:
  if (param_1[0x38] != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar7 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar7 = param_1[0x38];
    }
    *param_2 = 0x20;
    param_2[1] = uVar7;
    param_2 = param_2 + 2;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar6 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar11 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar5 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


