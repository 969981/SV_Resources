/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0068b280; name: FUN_0068b280
 */


undefined1 * FUN_0068b280(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  size_t __n;
  int iVar11;
  
  puVar5 = PTR_DAT_047cf548;
  if ((param_1 != PTR_DAT_047cf548) && (lVar6 = *(long *)(param_1 + 0x40), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x40);
    }
    *param_2 = 10;
    uVar1 = *(uint *)(lVar6 + 0x28);
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
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_0068a094(lVar6,param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar11 * 8 + 8);
      *param_2 = 0x12;
      uVar1 = *(uint *)(lVar6 + 0x1c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_006860c0(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  if ((param_1 != puVar5) && (lVar6 = *(long *)(param_1 + 0x48), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x48);
    }
    *param_2 = 0x1a;
    uVar1 = *(uint *)(lVar6 + 0x18);
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
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00686f38(lVar6,param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 0) {
    iVar11 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar6 = *(long *)(*(long *)(param_1 + 0x38) + (long)iVar11 * 8 + 8);
      *param_2 = 0x22;
      uVar1 = *(uint *)(lVar6 + 0x1c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_006892dc(lVar6,param_2,param_3);
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar2);
  }
  if ((param_1 != puVar5) && (lVar6 = *(long *)(param_1 + 0x50), lVar6 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar6 = *(long *)(param_1 + 0x50);
    }
    *param_2 = 0x2a;
    uVar1 = *(uint *)(lVar6 + 0x14);
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
          puVar7 = param_2;
          uVar3 = uVar1 >> 7;
          puVar7[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar1 >> 0xe;
          uVar1 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_005368dc(lVar6,param_2,param_3);
  }
  uVar1 = *(uint *)(param_1 + 0x68);
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x30;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x68);
      *param_2 = 0x30;
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
          puVar7 = param_2;
          uVar8 = uVar9 >> 7;
          puVar7[-1] = (byte)uVar9 | 0x80;
          param_2 = puVar7 + 1;
          uVar10 = uVar9 >> 0xe;
          uVar9 = uVar8;
        } while (uVar10 != 0);
        *puVar7 = (char)uVar8;
      }
    }
  }
  if (param_1 != puVar5) {
    lVar6 = *(long *)(param_1 + 0x58);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x58);
      }
      *param_2 = 0x3a;
      uVar1 = *(uint *)(lVar6 + 0x2c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_0068c674(lVar6,param_2,param_3);
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (lVar6 != 0) {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
        lVar6 = *(long *)(param_1 + 0x60);
      }
      *param_2 = 0x42;
      uVar1 = *(uint *)(lVar6 + 0x2c);
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
            puVar7 = param_2;
            uVar3 = uVar1 >> 7;
            puVar7[-1] = (byte)uVar1 | 0x80;
            param_2 = puVar7 + 1;
            uVar4 = uVar1 >> 0xe;
            uVar1 = uVar3;
          } while (uVar4 != 0);
          *puVar7 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_0068c674(lVar6,param_2,param_3);
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar9 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar9 + 8) & 1) == 0) {
      __src = (void *)(uVar9 + 9);
      uVar8 = (ulong)(*(byte *)(uVar9 + 8) >> 1);
    }
    else {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      __src = *(void **)(uVar9 + 0x18);
    }
    __n = (size_t)(int)uVar8;
    if (*param_3 - (long)param_2 < (long)__n) {
      puVar7 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar8,param_2);
      return puVar7;
    }
    memcpy(param_2,__src,__n);
    param_2 = param_2 + __n;
  }
  return param_2;
}


