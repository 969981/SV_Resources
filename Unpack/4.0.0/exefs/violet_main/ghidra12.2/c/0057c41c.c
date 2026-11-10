/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0057c41c; name: FUN_0057c41c
 */


undefined1 * FUN_0057c41c(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  size_t sVar10;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 10;
    uVar9 = *(uint *)(lVar7 + 0x10);
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)(uVar9 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar9 = uVar9 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar9 >> 7;
          puVar4[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar9 >> 0xe;
          uVar9 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
      }
    }
    uVar8 = *(ulong *)(lVar7 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar8 + 8) & 1) == 0) {
        pvVar5 = (void *)(uVar8 + 9);
        uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
      }
      else {
        uVar6 = *(ulong *)(uVar8 + 0x10);
        pvVar5 = *(void **)(uVar8 + 0x18);
      }
      sVar10 = (size_t)(int)uVar6;
      if (*param_3 - (long)param_2 < (long)sVar10) {
        param_2 = (undefined1 *)FUN_0052c7dc(param_3,pvVar5,uVar6,param_2);
      }
      else {
        memcpy(param_2,pvVar5,sVar10);
        param_2 = param_2 + sVar10;
      }
    }
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 0x12;
    uVar9 = *(uint *)(lVar7 + 0x28);
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)(uVar9 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar9 = uVar9 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar9 >> 7;
          puVar4[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar9 >> 0xe;
          uVar9 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_0057ba24(lVar7,param_2,param_3);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 == 3) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *param_2 = 0x1a;
    uVar9 = *(uint *)(lVar7 + 0x10);
    if (uVar9 < 0x80) {
      param_2[1] = (byte)uVar9;
      param_2 = param_2 + 2;
    }
    else {
      param_2[1] = (byte)uVar9 | 0x80;
      if (uVar9 >> 0xe == 0) {
        param_2[2] = (char)(uVar9 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        param_2 = param_2 + 3;
        uVar9 = uVar9 >> 7;
        do {
          puVar4 = param_2;
          uVar2 = uVar9 >> 7;
          puVar4[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar4 + 1;
          uVar3 = uVar9 >> 0xe;
          uVar9 = uVar2;
        } while (uVar3 != 0);
        *puVar4 = (char)uVar2;
      }
    }
    uVar8 = *(ulong *)(lVar7 + 8);
    if ((uVar8 & 1) != 0) {
      uVar8 = uVar8 & 0xfffffffffffffffe;
      if ((*(byte *)(uVar8 + 8) & 1) == 0) {
        pvVar5 = (void *)(uVar8 + 9);
        uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
      }
      else {
        uVar6 = *(ulong *)(uVar8 + 0x10);
        pvVar5 = *(void **)(uVar8 + 0x18);
      }
      sVar10 = (size_t)(int)uVar6;
      if (*param_3 - (long)param_2 < (long)sVar10) {
        param_2 = (undefined1 *)FUN_0052c7dc(param_3,pvVar5,uVar6,param_2);
      }
      else {
        memcpy(param_2,pvVar5,sVar10);
        param_2 = param_2 + sVar10;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      pvVar5 = (void *)(uVar8 + 9);
      uVar6 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    else {
      uVar6 = *(ulong *)(uVar8 + 0x10);
      pvVar5 = *(void **)(uVar8 + 0x18);
    }
    sVar10 = (size_t)(int)uVar6;
    if (*param_3 - (long)param_2 < (long)sVar10) {
      puVar4 = (undefined1 *)FUN_0052c7dc(param_3,pvVar5,uVar6,param_2);
      return puVar4;
    }
    memcpy(param_2,pvVar5,sVar10);
    param_2 = param_2 + sVar10;
  }
  return param_2;
}


