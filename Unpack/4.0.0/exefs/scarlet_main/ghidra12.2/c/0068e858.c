/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068e858; name: FUN_0068e858
 */


undefined1 * FUN_0068e858(long param_1,undefined1 *param_2,long *param_3)

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
      if ((bVar1 & 1) != 0) goto LAB_0068e89c;
LAB_0068e8c8:
      sVar7 = (size_t)(bVar1 >> 1);
LAB_0068e8cc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar7) goto LAB_0068e94c;
      *param_2 = 10;
      param_2[1] = (char)sVar7;
      pbVar6 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        pbVar6 = pbVar4 + 1;
      }
      memcpy(param_2 + 2,pbVar6,sVar7);
      param_2 = param_2 + 2 + sVar7;
    }
LAB_0068e910:
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0068e91c;
LAB_0068e96c:
    if (*(long *)(pbVar4 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
      pbVar4 = *(byte **)(param_1 + 0x18);
      bVar1 = *pbVar4;
      goto joined_r0x0068e938;
    }
LAB_0068e9d0:
    pbVar4 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_0068ea2c;
LAB_0068e9dc:
    if (1 < bVar1) {
      FUN_00532960(pbVar4 + 1,bVar1 >> 1);
      pbVar4 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar4;
      goto joined_r0x0068e9f8;
    }
  }
  else {
    if (*(long *)(pbVar4 + 8) == 0) goto LAB_0068e910;
    FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
    pbVar4 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0068e8c8;
LAB_0068e89c:
    sVar7 = *(size_t *)(pbVar4 + 8);
    if ((long)sVar7 < 0x80) goto LAB_0068e8cc;
LAB_0068e94c:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar4,param_2);
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) != 0) goto LAB_0068e96c;
LAB_0068e91c:
    if (bVar1 < 2) goto LAB_0068e9d0;
    FUN_00532960(pbVar4 + 1,bVar1 >> 1);
    pbVar4 = *(byte **)(param_1 + 0x18);
    bVar1 = *pbVar4;
joined_r0x0068e938:
    if ((bVar1 & 1) == 0) {
      sVar7 = (size_t)(bVar1 >> 1);
LAB_0068e98c:
      if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar7;
        pbVar6 = *(byte **)(pbVar4 + 0x10);
        if ((*pbVar4 & 1) == 0) {
          pbVar6 = pbVar4 + 1;
        }
        memcpy(param_2 + 2,pbVar6,sVar7);
        param_2 = param_2 + 2 + sVar7;
        goto LAB_0068e9d0;
      }
    }
    else {
      sVar7 = *(size_t *)(pbVar4 + 8);
      if ((long)sVar7 < 0x80) goto LAB_0068e98c;
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar4,param_2);
    pbVar4 = *(byte **)(param_1 + 0x20);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_0068e9dc;
LAB_0068ea2c:
    if (*(long *)(pbVar4 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
      pbVar4 = *(byte **)(param_1 + 0x20);
      bVar1 = *pbVar4;
joined_r0x0068e9f8:
      if ((bVar1 & 1) == 0) {
        sVar7 = (size_t)(bVar1 >> 1);
LAB_0068ea4c:
        if ((long)sVar7 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x1a;
          param_2[1] = (char)sVar7;
          pbVar6 = *(byte **)(pbVar4 + 0x10);
          if ((*pbVar4 & 1) == 0) {
            pbVar6 = pbVar4 + 1;
          }
          memcpy(param_2 + 2,pbVar6,sVar7);
          param_2 = param_2 + 2 + sVar7;
          goto LAB_0068ea90;
        }
      }
      else {
        sVar7 = *(size_t *)(pbVar4 + 8);
        if ((long)sVar7 < 0x80) goto LAB_0068ea4c;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,3,pbVar4,param_2);
      uVar5 = *(ulong *)(param_1 + 8);
      goto joined_r0x0068eac4;
    }
  }
LAB_0068ea90:
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x0068eac4:
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


