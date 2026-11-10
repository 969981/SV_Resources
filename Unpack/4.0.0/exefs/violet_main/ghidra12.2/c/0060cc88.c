/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0060cc88; name: FUN_0060cc88
 */


undefined1 * FUN_0060cc88(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined1 *puVar3;
  void *__src;
  ulong uVar4;
  byte *pbVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  size_t sVar9;
  
  pbVar5 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar5;
  if ((bVar2 & 1) == 0) {
    if (bVar2 < 2) goto LAB_0060cd40;
    FUN_00532960(pbVar5 + 1,bVar2 >> 1);
    pbVar5 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) goto LAB_0060ccf8;
LAB_0060cccc:
    sVar9 = *(size_t *)(pbVar5 + 8);
    if ((long)sVar9 < 0x80) goto LAB_0060ccfc;
LAB_0060cd7c:
    param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar5,param_2);
    pbVar5 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) == 0) goto LAB_0060cd4c;
LAB_0060cd9c:
    if (*(long *)(pbVar5 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar5;
joined_r0x0060cd68:
      if ((bVar2 & 1) == 0) {
        sVar9 = (size_t)(bVar2 >> 1);
LAB_0060cdbc:
        if ((long)sVar9 <= (*param_3 - (long)param_2) + 0xe) {
          *param_2 = 0x12;
          param_2[1] = (char)sVar9;
          pbVar7 = *(byte **)(pbVar5 + 0x10);
          if ((*pbVar5 & 1) == 0) {
            pbVar7 = pbVar5 + 1;
          }
          memcpy(param_2 + 2,pbVar7,sVar9);
          param_2 = param_2 + 2 + sVar9;
          goto LAB_0060ce00;
        }
      }
      else {
        sVar9 = *(size_t *)(pbVar5 + 8);
        if ((long)sVar9 < 0x80) goto LAB_0060cdbc;
      }
      param_2 = (undefined1 *)FUN_0052c95c(param_3,2,pbVar5,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      goto joined_r0x0060ce04;
    }
  }
  else {
    if (*(long *)(pbVar5 + 8) != 0) {
      FUN_00532960(*(undefined8 *)(pbVar5 + 0x10));
      pbVar5 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar5;
      if ((bVar2 & 1) != 0) goto LAB_0060cccc;
LAB_0060ccf8:
      sVar9 = (size_t)(bVar2 >> 1);
LAB_0060ccfc:
      if ((*param_3 - (long)param_2) + 0xe < (long)sVar9) goto LAB_0060cd7c;
      *param_2 = 10;
      param_2[1] = (char)sVar9;
      pbVar7 = *(byte **)(pbVar5 + 0x10);
      if ((*pbVar5 & 1) == 0) {
        pbVar7 = pbVar5 + 1;
      }
      memcpy(param_2 + 2,pbVar7,sVar9);
      param_2 = param_2 + 2 + sVar9;
    }
LAB_0060cd40:
    pbVar5 = *(byte **)(param_1 + 0x18);
    bVar2 = *pbVar5;
    if ((bVar2 & 1) != 0) goto LAB_0060cd9c;
LAB_0060cd4c:
    if (1 < bVar2) {
      FUN_00532960(pbVar5 + 1,bVar2 >> 1);
      pbVar5 = *(byte **)(param_1 + 0x18);
      bVar2 = *pbVar5;
      goto joined_r0x0060cd68;
    }
  }
LAB_0060ce00:
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x0060ce04:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x18;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
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
          uVar8 = uVar6 >> 0xe;
          uVar6 = uVar4;
        } while (uVar8 != 0);
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


