/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005820a8; name: FUN_005820a8
 */


undefined1 * FUN_005820a8(long param_1,undefined1 *param_2,long *param_3)

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
      if ((bVar1 & 1) != 0) goto LAB_005820ec;
LAB_00582118:
      sVar6 = (size_t)(bVar1 >> 1);
LAB_0058211c:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar6) goto LAB_0058217c;
      *param_2 = 10;
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
    if ((bVar1 & 1) == 0) goto LAB_00582118;
LAB_005820ec:
    sVar6 = *(size_t *)(pbVar4 + 8);
    if ((long)sVar6 < 0x80) goto LAB_0058211c;
LAB_0058217c:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar4,param_2);
    uVar5 = *(ulong *)(param_1 + 8);
    goto joined_r0x00582164;
  }
  uVar5 = *(ulong *)(param_1 + 8);
joined_r0x00582164:
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


