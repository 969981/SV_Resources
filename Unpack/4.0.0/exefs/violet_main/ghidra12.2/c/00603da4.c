/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00603da4; name: FUN_00603da4
 */


undefined1 * FUN_00603da4(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  
  pbVar7 = *(byte **)(param_1 + 0x28);
  bVar2 = *pbVar7;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto joined_r0x00604030;
    FUN_00532960(pbVar7 + 1,bVar2 >> 1);
    pbVar7 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar7;
    if ((bVar2 & 1) == 0) goto LAB_00603e1c;
LAB_00603df0:
    sVar10 = *(size_t *)(pbVar7 + 8);
    if ((long)sVar10 < 0x80) goto LAB_00603e20;
  }
  else {
    if (*(long *)(pbVar7 + 8) == 0) goto joined_r0x00604030;
    FUN_00532960(*(undefined8 *)(pbVar7 + 0x10));
    pbVar7 = *(byte **)(param_1 + 0x28);
    bVar2 = *pbVar7;
    if ((bVar2 & 1) != 0) goto LAB_00603df0;
LAB_00603e1c:
    sVar10 = (size_t)(bVar2 >> 1);
LAB_00603e20:
    if ((long)sVar10 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 10;
      param_2[1] = (char)sVar10;
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar10);
      param_2 = param_2 + 2 + sVar10;
      goto joined_r0x00604030;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar7,param_2);
joined_r0x00604030:
  if ((param_1 != PTR_DAT_047ced18) && (lVar11 = *(long *)(param_1 + 0x30), lVar11 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar11 = *(long *)(param_1 + 0x30);
    }
    *param_2 = 0x12;
    uVar1 = *(uint *)(lVar11 + 0x6c);
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
    param_2 = (undefined1 *)FUN_0060b818(lVar11,param_2,param_3);
  }
  if (0 < (int)*(uint *)(param_1 + 0x18)) {
    lVar11 = 0;
    lVar12 = (ulong)*(uint *)(param_1 + 0x18) * 8;
    do {
      while( true ) {
        pbVar7 = *(byte **)(*(long *)(param_1 + 0x20) + lVar11 + 8);
        if ((*pbVar7 & 1) != 0) break;
        FUN_00532960(pbVar7 + 1,*pbVar7 >> 1);
        bVar2 = *pbVar7;
        if ((bVar2 & 1) == 0) goto LAB_00603f58;
LAB_00603f38:
        sVar10 = *(size_t *)(pbVar7 + 8);
        if ((long)sVar10 < 0x80) goto LAB_00603f5c;
LAB_00603fac:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,3,pbVar7,param_2);
        lVar11 = lVar11 + 8;
        if (lVar12 == lVar11) goto LAB_00603fd0;
      }
      FUN_00532960(*(undefined8 *)(pbVar7 + 0x10),*(undefined8 *)(pbVar7 + 8));
      bVar2 = *pbVar7;
      if ((bVar2 & 1) != 0) goto LAB_00603f38;
LAB_00603f58:
      sVar10 = (size_t)(bVar2 >> 1);
LAB_00603f5c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar10) goto LAB_00603fac;
      *param_2 = 0x1a;
      param_2[1] = (char)sVar10;
      pbVar9 = *(byte **)(pbVar7 + 0x10);
      if ((*pbVar7 & 1) == 0) {
        pbVar9 = pbVar7 + 1;
      }
      memcpy(param_2 + 2,pbVar9,sVar10);
      param_2 = param_2 + 2 + sVar10;
      lVar11 = lVar11 + 8;
    } while (lVar12 != lVar11);
  }
LAB_00603fd0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      __src = (void *)(uVar8 + 9);
      uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar8 + 0x10);
      __src = *(void **)(uVar8 + 0x18);
    }
    sVar10 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar10) {
      puVar5 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar6,param_2);
      return puVar5;
    }
    memcpy(param_2,__src,sVar10);
    param_2 = param_2 + sVar10;
  }
  return param_2;
}


