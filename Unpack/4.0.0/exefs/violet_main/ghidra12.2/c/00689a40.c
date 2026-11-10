/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00689a40; name: FUN_00689a40
 */


undefined1 * FUN_00689a40(long param_1,undefined1 *param_2,long *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *__src_00;
  size_t sVar6;
  
  pbVar4 = *(byte **)(param_1 + 0x10);
  bVar1 = *pbVar4;
  if ((bVar1 & 1) == 0) {
    if (1 < bVar1) {
      FUN_00532960(pbVar4 + 1,bVar1 >> 1);
      pbVar4 = *(byte **)(param_1 + 0x10);
      bVar1 = *pbVar4;
      if ((bVar1 & 1) != 0) goto LAB_00689a84;
LAB_00689ab0:
      sVar6 = (size_t)(bVar1 >> 1);
LAB_00689ab4:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar6) goto LAB_00689b14;
      *param_2 = 0x12;
      param_2[1] = (char)sVar6;
      __src_00 = *(byte **)(pbVar4 + 0x10);
      if ((*pbVar4 & 1) == 0) {
        __src_00 = pbVar4 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar6);
      param_2 = param_2 + 2 + sVar6;
    }
  }
  else if (*(long *)(pbVar4 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar4 + 0x10));
    pbVar4 = *(byte **)(param_1 + 0x10);
    bVar1 = *pbVar4;
    if ((bVar1 & 1) == 0) goto LAB_00689ab0;
LAB_00689a84:
    sVar6 = *(size_t *)(pbVar4 + 8);
    if ((long)sVar6 < 0x80) goto LAB_00689ab4;
LAB_00689b14:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar4,param_2);
    uVar5 = *(ulong *)(param_1 + 8);
    goto joined_r0x00689afc;
  }
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x00689afc:
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
    sVar6 = (size_t)(int)uVar3;
    if (*param_3 - (long)param_2 < (long)sVar6) {
      puVar2 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar3,param_2);
      return puVar2;
    }
    memcpy(param_2,__src,sVar6);
    param_2 = param_2 + sVar6;
  }
  return param_2;
}


