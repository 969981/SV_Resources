/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00584010; name: FUN_00584010
 */


undefined1 * FUN_00584010(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *__src_00;
  ulong uVar10;
  size_t sVar11;
  
  pbVar8 = *(byte **)(param_1 + 0x10);
  bVar2 = *pbVar8;
  if ((bVar2 & 1) == 0) {
    if (1 < bVar2) {
      FUN_00532960(pbVar8 + 1,bVar2 >> 1);
      pbVar8 = *(byte **)(param_1 + 0x10);
      bVar2 = *pbVar8;
      if ((bVar2 & 1) == 0) goto LAB_00584080;
LAB_00584054:
      sVar11 = *(size_t *)(pbVar8 + 8);
      if ((long)sVar11 < 0x80) goto LAB_00584084;
LAB_00584108:
      param_2 = (undefined1 *)FUN_0052c95c(param_3,1,pbVar8,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      goto joined_r0x005840cc;
    }
  }
  else if (*(long *)(pbVar8 + 8) != 0) {
    FUN_00532960(*(undefined8 *)(pbVar8 + 0x10));
    pbVar8 = *(byte **)(param_1 + 0x10);
    bVar2 = *pbVar8;
    if ((bVar2 & 1) != 0) goto LAB_00584054;
LAB_00584080:
    sVar11 = (size_t)(bVar2 >> 1);
LAB_00584084:
    if ((*param_3 - (long)param_2) + 0xe < (long)sVar11) goto LAB_00584108;
    *param_2 = 10;
    param_2[1] = (char)sVar11;
    __src_00 = *(byte **)(pbVar8 + 0x10);
    if ((*pbVar8 & 1) == 0) {
      __src_00 = pbVar8 + 1;
    }
    memcpy(param_2 + 2,__src_00,sVar11);
    param_2 = param_2 + 2 + sVar11;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
joined_r0x005840cc:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x20);
      *param_2 = 0x10;
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
        uVar9 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar6 = param_2;
          uVar7 = uVar9 >> 7;
          puVar6[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar6 + 1;
          uVar10 = uVar9 >> 0xe;
          uVar9 = uVar7;
        } while (uVar10 != 0);
        *puVar6 = (char)uVar7;
      }
    }
  }
  if ((param_1 != PTR_DAT_047ce1e8) && (lVar5 = *(long *)(param_1 + 0x18), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x18);
    }
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar5 + 0x34);
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)(uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar1 = uVar1 >> 7;
        do {
          puVar6 = param_2;
          uVar3 = uVar1 >> 7;
          puVar6[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar6 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar6 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00264608(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar7 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    sVar11 = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)sVar11) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,sVar11);
    param_2 = param_2 + sVar11;
  }
  return param_2;
}


