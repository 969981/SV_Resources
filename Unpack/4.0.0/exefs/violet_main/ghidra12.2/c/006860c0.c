/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006860c0; name: FUN_006860c0
 */


undefined1 * FUN_006860c0(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  undefined1 uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *__src_00;
  size_t sVar8;
  
  pbVar6 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar6;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      FUN_00532960(pbVar6 + 1,bVar1 >> 1);
      pbVar6 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar6;
      if ((bVar1 & 1) != 0) goto LAB_00686104;
LAB_00686130:
      sVar8 = (size_t)(bVar1 >> 1);
LAB_00686134:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar8) goto LAB_006861d8;
      *param_2 = 0x12;
      param_2[1] = (char)sVar8;
      __src_00 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        __src_00 = pbVar6 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar8);
      param_2 = param_2 + 2 + sVar8;
    }
  }
  else if (*(long *)(pbVar6 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar6 + 0x10));
    pbVar6 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar6;
    if ((bVar1 & 1) == 0) goto LAB_00686130;
LAB_00686104:
    sVar8 = *(size_t *)(pbVar6 + 8);
    if ((long)sVar8 < 0x80) goto LAB_00686134;
LAB_006861d8:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar6,param_2);
    cVar2 = *(char *)(param_1 + 0x18);
    goto joined_r0x006861f0;
  }
  cVar2 = *(char *)(param_1 + 0x18);
joined_r0x006861f0:
  if (cVar2 != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar5 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar5 = *(undefined1 *)(param_1 + 0x18);
    }
    *param_2 = 0x18;
    param_2[1] = uVar5;
    param_2 = param_2 + 2;
  }
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


