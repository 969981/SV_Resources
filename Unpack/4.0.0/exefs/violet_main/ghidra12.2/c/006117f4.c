/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006117f4; name: FUN_006117f4
 */


undefined1 * FUN_006117f4(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  size_t sVar9;
  long lVar10;
  long lVar11;
  
  pbVar6 = *(byte **)(param_1 + 0x40);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar6 + 1,bVar2 >> 1);
      pbVar6 = *(byte **)(param_1 + 0x40);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) != 0) goto LAB_00611840;
LAB_0061186c:
      sVar9 = (size_t)(bVar2 >> 1);
LAB_00611870:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00611990;
      *param_2 = 10;
      param_2[1] = (char)sVar9;
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar9);
      param_2 = param_2 + 2 + sVar9;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar6 + 0x10));
    pbVar6 = *(byte **)(param_1 + 0x40);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) == 0) goto LAB_0061186c;
LAB_00611840:
    sVar9 = *(size_t *)(pbVar6 + 8);
    if ((long)sVar9 < 0x80) goto LAB_00611870;
LAB_00611990:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar6,param_2);
    uVar1 = *(uint *)(param_1 + 0x18);
    goto joined_r0x006118bc;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
joined_r0x006118bc:
  if (0 < (int)uVar1) {
    lVar10 = 0;
    do {
      while( true ) {
        pbVar6 = *(byte **)(*(long *)(param_1 + 0x20) + lVar10 + 8);
        if ((*pbVar6 & 1) == 0) break;
        FUN_00532960(*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
        bVar2 = *pbVar6;
        if ((bVar2 & 1) == 0) goto LAB_00611914;
LAB_006118f4:
        sVar9 = *(size_t *)(pbVar6 + 8);
        if ((long)sVar9 < 0x80) goto LAB_00611918;
LAB_00611968:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,2,pbVar6,param_2);
        lVar10 = lVar10 + 8;
        if ((ulong)uVar1 * 8 == lVar10) goto LAB_006119b0;
      }
      FUN_00532960(pbVar6 + 1,*pbVar6 >> 1);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) != 0) goto LAB_006118f4;
LAB_00611914:
      sVar9 = (size_t)(bVar2 >> 1);
LAB_00611918:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00611968;
      *param_2 = 0x12;
      param_2[1] = (char)sVar9;
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar9);
      param_2 = param_2 + 2 + sVar9;
      lVar10 = lVar10 + 8;
    } while ((ulong)uVar1 * 8 != lVar10);
  }
LAB_006119b0:
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar5 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar5 = *(undefined1 *)(param_1 + 0x48);
    }
    *param_2 = 0x18;
    param_2[1] = uVar5;
    param_2 = param_2 + 2;
  }
  if (0 < (int)*(uint *)(param_1 + 0x30)) {
    lVar10 = 0;
    lVar11 = (ulong)*(uint *)(param_1 + 0x30) * 8;
    do {
      while( true ) {
        pbVar6 = *(byte **)(*(long *)(param_1 + 0x38) + lVar10 + 8);
        if ((*pbVar6 & 1) == 0) break;
        FUN_00532960(*(undefined8 *)(pbVar6 + 0x10),*(undefined8 *)(pbVar6 + 8));
        bVar2 = *pbVar6;
        if ((bVar2 & 1) == 0) goto LAB_00611a38;
LAB_00611a18:
        sVar9 = *(size_t *)(pbVar6 + 8);
        if ((long)sVar9 < 0x80) goto LAB_00611a3c;
LAB_00611a8c:
        param_2 = (undefined1 *)FUN_0052cbdc(param_3,4,pbVar6,param_2);
        lVar10 = lVar10 + 8;
        if (lVar11 == lVar10) goto LAB_00611ab0;
      }
      FUN_00532960(pbVar6 + 1,*pbVar6 >> 1);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) != 0) goto LAB_00611a18;
LAB_00611a38:
      sVar9 = (size_t)(bVar2 >> 1);
LAB_00611a3c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_00611a8c;
      *param_2 = 0x22;
      param_2[1] = (char)sVar9;
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar9);
      param_2 = param_2 + 2 + sVar9;
      lVar10 = lVar10 + 8;
    } while (lVar11 != lVar10);
  }
LAB_00611ab0:
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      __src = (void *)(uVar7 + 9);
      uVar4 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar7 + 0x10);
      __src = *(void **)(uVar7 + 0x18);
    }
    sVar9 = (size_t)(int)uVar4;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar3 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar4,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


