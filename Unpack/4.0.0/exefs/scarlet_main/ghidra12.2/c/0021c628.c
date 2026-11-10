/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0021c628; name: FUN_0021c628
 */


undefined1 * FUN_0021c628(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  size_t sVar8;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    pbVar5 = *(byte **)(param_1 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      FUN_00532960(pbVar5 + 1,*pbVar5 >> 1);
      if (*(int *)(param_1 + 0x1c) == 1) goto LAB_0021c6f0;
LAB_0021c670:
      bVar2 = *PTR_DAT_047cba80;
      pbVar5 = PTR_DAT_047cba80;
      if ((bVar2 & 1) == 0) goto LAB_0021c6fc;
LAB_0021c680:
      sVar8 = *(size_t *)(pbVar5 + 8);
      if ((long)sVar8 < 0x80) goto LAB_0021c700;
    }
    else {
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10),*(undefined8 *)(pbVar5 + 8));
      if (*(int *)(param_1 + 0x1c) != 1) goto LAB_0021c670;
LAB_0021c6f0:
      pbVar5 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar5;
      if ((bVar2 & 1) != 0) goto LAB_0021c680;
LAB_0021c6fc:
      sVar8 = (size_t)(bVar2 >> 1);
LAB_0021c700:
      if ((long)sVar8 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 10;
        param_2[1] = (char)sVar8;
        pbVar7 = *(byte **)(pbVar5 + 0x10);
        if ((*pbVar5 & 1) == 0) {
          pbVar7 = pbVar5 + 1;
        }
        memcpy(param_2 + 2,pbVar7,sVar8);
        param_2 = param_2 + 2 + sVar8;
        iVar1 = *(int *)(param_1 + 0x1c);
        goto joined_r0x0021c694;
      }
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar5,param_2);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
joined_r0x0021c694:
  if (iVar1 != 2) {
    uVar6 = *(ulong *)(param_1 + 8);
    goto joined_r0x0021c754;
  }
  pbVar5 = *(byte **)(param_1 + 0x10);
  if ((*pbVar5 & 1) == 0) {
    FUN_00532960(pbVar5 + 1,*pbVar5 >> 1);
    if (*(int *)(param_1 + 0x1c) == 2) goto LAB_0021c770;
LAB_0021c6bc:
    bVar2 = *PTR_DAT_047cba80;
    pbVar5 = PTR_DAT_047cba80;
    if ((bVar2 & 1) == 0) goto LAB_0021c77c;
LAB_0021c6cc:
    sVar8 = *(size_t *)(pbVar5 + 8);
    if ((long)sVar8 < 0x80) goto LAB_0021c780;
  }
  else {
    FUN_00532960(*(undefined8 *)(pbVar5 + 0x10),*(undefined8 *)(pbVar5 + 8));
    if (*(int *)(param_1 + 0x1c) != 2) goto LAB_0021c6bc;
LAB_0021c770:
    pbVar5 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) != 0) goto LAB_0021c6cc;
LAB_0021c77c:
    sVar8 = (size_t)(bVar2 >> 1);
LAB_0021c780:
    if ((long)sVar8 <= (*param_3 - (long)param_2) + 0xe) {
      *param_2 = 0x12;
      param_2[1] = (char)sVar8;
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar7,sVar8);
      param_2 = param_2 + 2 + sVar8;
      uVar6 = *(ulong *)(param_1 + 8);
      goto joined_r0x0021c754;
    }
  }
  param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar5,param_2);
  uVar6 = *(ulong *)(param_1 + 8);
joined_r0x0021c754:
  if ((uVar6 & 1) != 0) {
    uVar6 = uVar6 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar6 + 8) & 1) == 0) {
      __src = (void *)(uVar6 + 9);
      uVar4 = (ulong)(*(byte *)(uVar6 + 8) >> 1);
    }
    else {
      uVar4 = *(ulong *)(uVar6 + 0x10);
      __src = *(void **)(uVar6 + 0x18);
    }
    sVar8 = (size_t)(int)uVar4;
    if (*param_3 - (long)param_2 < (long)sVar8) {
      puVar3 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar4,param_2);
      return puVar3;
    }
    memcpy(param_2,__src,sVar8);
    param_2 = param_2 + sVar8;
  }
  return param_2;
}


