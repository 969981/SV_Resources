/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0069c4e8; name: FUN_0069c4e8
 */


undefined1 * FUN_0069c4e8(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  bool bVar3;
  undefined1 *puVar4;
  void *__src;
  ulong uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  size_t sVar9;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto LAB_0069c5a0;
    FUN_00532960(pbVar6 + 1,bVar2 >> 1);
    pbVar6 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) == 0) goto LAB_0069c558;
LAB_0069c52c:
    sVar9 = *(size_t *)(pbVar6 + 8);
    if ((long)sVar9 < 0x80) goto LAB_0069c55c;
LAB_0069c5bc:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar6,param_2);
    pbVar6 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) == 0) goto LAB_0069c5ac;
LAB_0069c5dc:
    sVar9 = *(size_t *)(pbVar6 + 8);
    if (sVar9 == 0) goto LAB_0069c630;
    if ((long)sVar9 < 0x80) {
LAB_0069c5ec:
      if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
        *param_2 = 0x12;
        param_2[1] = (char)sVar9;
        pbVar8 = *(byte **)(pbVar6 + 0x10);
        if ((*pbVar6 & 1) == 0) {
          pbVar8 = pbVar6 + 1;
        }
        memcpy(param_2 + 2,pbVar8,sVar9);
        param_2 = param_2 + 2 + sVar9;
        goto LAB_0069c630;
      }
    }
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar6,param_2);
    iVar1 = *(int *)(param_1 + 0x30);
  }
  else {
    if (*(long *)(pbVar6 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar6 + 0x10));
      pbVar6 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) != 0) goto LAB_0069c52c;
LAB_0069c558:
      sVar9 = (size_t)(bVar2 >> 1);
LAB_0069c55c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_0069c5bc;
      *param_2 = 10;
      param_2[1] = (char)sVar9;
      pbVar8 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar8 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,pbVar8,sVar9);
      param_2 = param_2 + 2 + sVar9;
    }
LAB_0069c5a0:
    pbVar6 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) != 0) goto LAB_0069c5dc;
LAB_0069c5ac:
    if (1 < bVar2) {
      sVar9 = (size_t)(bVar2 >> 1);
      goto LAB_0069c5ec;
    }
LAB_0069c630:
    iVar1 = *(int *)(param_1 + 0x30);
  }
  if (iVar1 == 3) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x30) == 3)) {
      bVar3 = *(char *)(param_1 + 0x28) != '\0';
    }
    else {
      bVar3 = false;
    }
    *param_2 = 0x18;
    param_2[1] = bVar3;
    param_2 = param_2 + 2;
  }
  pbVar6 = *(byte **)(param_1 + 0x20);
  bVar2 = *pbVar6;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar6 + 1,bVar2 >> 1);
      pbVar6 = *(byte **)(param_1 + 0x20);
      bVar2 = *pbVar6;
      if ((bVar2 & 1) == 0) goto LAB_0069c6bc;
LAB_0069c690:
      sVar9 = *(size_t *)(pbVar6 + 8);
      if ((long)sVar9 < 0x80) goto LAB_0069c6c0;
LAB_0069c744:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,4,pbVar6,param_2);
      uVar7 = *(ulong *)(param_1 + 8);
      goto joined_r0x0069c708;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar6 + 0x10));
    pbVar6 = *(byte **)(param_1 + 0x20);
    bVar2 = *pbVar6;
    if ((bVar2 & 1) != 0) goto LAB_0069c690;
LAB_0069c6bc:
    sVar9 = (size_t)(bVar2 >> 1);
LAB_0069c6c0:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_0069c744;
    *param_2 = 0x22;
    param_2[1] = (char)sVar9;
    pbVar8 = *(byte **)(pbVar6 + 0x10);
    if ((*pbVar6 & 1) == 0) {
      pbVar8 = pbVar6 + 1;
    }
    memcpy(param_2 + 2,pbVar8,sVar9);
    param_2 = param_2 + 2 + sVar9;
  }
  uVar7 = *(ulong *)(param_1 + 8);
joined_r0x0069c708:
  if ((uVar7 & 1) != 0) {
    uVar7 = uVar7 & 0xfffffffffffffffe;
    if ((*(byte *)(uVar7 + 8) & 1) == 0) {
      __src = (void *)(uVar7 + 9);
      uVar5 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
    }
    else {
      uVar5 = *(ulong *)(uVar7 + 0x10);
      __src = *(void **)(uVar7 + 0x18);
    }
    sVar9 = (size_t)(int)uVar5;
    if (*param_3 - (long)param_2 < (long)sVar9) {
      puVar4 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar5,param_2);
      return puVar4;
    }
    memcpy(param_2,__src,sVar9);
    param_2 = param_2 + sVar9;
  }
  return param_2;
}


