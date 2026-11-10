/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069d454; name: FUN_0069d454
 */


undefined1 * FUN_0069d454(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  size_t sVar7;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      FUN_00532960(pbVar4 + 1,bVar1 >> 1);
      pbVar4 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar4;
      if ((bVar1 & 1) != 0) goto LAB_0069d498;
LAB_0069d4c4:
      sVar7 = (size_t)(bVar1 >> 1);
LAB_0069d4c8:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar7) goto LAB_0069d548;
      *param_2 = 10;
      param_2[1] = (char)sVar7;
      pbVar6 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar6 = pbVar4 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar7);
      param_2 = param_2 + 2 + sVar7;
    }
LAB_0069d50c:
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0069d518;
LAB_0069d568:
    if (*(long *)(pbVar4 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
      pbVar4 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar4;
      goto joined_r0x0069d534;
    }
LAB_0069d5cc:
    pbVar4 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_0069d628;
LAB_0069d5d8:
    if (1 < bVar1) {
      FUN_00532960(pbVar4 + 1,bVar1 >> 1);
      pbVar4 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar4;
      goto joined_r0x0069d5f4;
    }
  }
  else {
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_0069d50c;
    FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
    pbVar4 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0069d4c4;
LAB_0069d498:
    sVar7 = *(size_t *)(pbVar4 + 8);
    if ((long)sVar7 < 0x80) goto LAB_0069d4c8;
LAB_0069d548:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar4,param_2);
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_0069d568;
LAB_0069d518:
    if (bVar1 < 2) goto LAB_0069d5cc;
    FUN_00532960(pbVar4 + 1,bVar1 >> 1);
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
joined_r0x0069d534:
    if ((bVar1 & 1) == 0) {
      sVar7 = (size_t)(bVar1 >> 1);
LAB_0069d588:
      if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar7;
        pbVar6 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar6 = pbVar4 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar7);
        param_2 = param_2 + 2 + sVar7;
        goto LAB_0069d5cc;
      }
    }
    else {
      sVar7 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar7 < 0x80) goto LAB_0069d588;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar4,param_2);
    pbVar4 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0069d5d8;
LAB_0069d628:
    if (*(long *)(pbVar4 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
      pbVar4 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar4;
joined_r0x0069d5f4:
      if ((bVar1 & 1) == 0) {
        sVar7 = (size_t)(bVar1 >> 1);
LAB_0069d648:
        if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x1a;
          param_2[1] = (char)sVar7;
          pbVar6 = *(byte **)(pbVar4 + 0x10);
          if ((*pbVar4 & 1) == 0) {
            pbVar6 = pbVar4 + 1;
          }
          memcpy(param_2 + 2,pbVar6,sVar7);
          param_2 = param_2 + 2 + sVar7;
          goto LAB_0069d68c;
        }
      }
      else {
        sVar7 = *(size_t *)(pbVar4 + 8);
        if ((long)sVar7 < 0x80) goto LAB_0069d648;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,3,pbVar4,param_2);
      uVar5 = *(ulong *)(param_1 + 8);
      goto joined_r0x0069d6c0;
    }
  }
LAB_0069d68c:
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x0069d6c0:
  if ((uVar5 & 1) != 0) {
    uVar5 = uVar5 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar5 + 8) & 1) == 0) {
      __src = (void *)(uVar5 + 9);
      uVar3 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    }
    else {
      uVar3 = *(ulong *)(uVar5 + 0x10);
      __src = *(void **)(uVar5 + 0x18);
    }
    sVar7 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar7) {
      puVar2 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar7);
    param_2 = param_2 + sVar7;
  }
  return param_2;
}


