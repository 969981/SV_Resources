/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00613a8c; name: FUN_00613a8c
 */


undefined1 * FUN_00613a8c(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *__src_00;
  ulong uVar7;
  size_t sVar8;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar5 + 1,bVar2 >> 1);
      pbVar5 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar5;
      if ((bVar2 & 1) != 0) goto LAB_00613ad0;
LAB_00613afc:
      sVar8 = (size_t)(bVar2 >> 1);
LAB_00613b00:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar8) goto LAB_00613b7c;
      *param_2 = 10;
      param_2[1] = (char)sVar8;
      __src_00 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        __src_00 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,__src_00,sVar8);
      param_2 = param_2 + 2 + sVar8;
    }
LAB_00613b44:
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  else {
    if (*(long *)(pbVar5 + 8) == 0) goto LAB_00613b44;
    FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
    pbVar5 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) goto LAB_00613afc;
LAB_00613ad0:
    sVar8 = *(size_t *)(pbVar5 + 8);
    if ((long)sVar8 < 0x80) goto LAB_00613b00;
LAB_00613b7c:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar5,param_2);
    uVar1 = *(uint *)(param_1 + 0x18);
  }
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x18);
      *param_2 = 0x10;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      uVar1 = *(uint *)(param_1 + 0x1c);
      goto joined_r0x00613b74;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe != 0) {
      uVar6 = (ulong)(long)(int)uVar1 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar3 = param_2;
        uVar4 = uVar6 >> 7;
        puVar3[-1] = (byte)uVar6 | 0x80;
        param_2 = puVar3 + 1;
        uVar7 = uVar6 >> 0xe;
        uVar6 = uVar4;
      } while (uVar7 != 0);
      *puVar3 = (char)uVar4;
      uVar1 = *(uint *)(param_1 + 0x1c);
      goto joined_r0x00613b74;
    }
    param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
    param_2 = param_2 + 3;
  }
  uVar1 = *(uint *)(param_1 + 0x1c);
joined_r0x00613b74:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x1c);
      *param_2 = 0x18;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar6 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar3 = param_2;
          uVar4 = uVar6 >> 7;
          puVar3[-1] = (byte)uVar6 | 0x80;
          param_2 = puVar3 + 1;
          uVar7 = uVar6 >> 0xe;
          uVar6 = uVar4;
        } while (uVar7 != 0);
        *puVar3 = (char)uVar4;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar6 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
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


