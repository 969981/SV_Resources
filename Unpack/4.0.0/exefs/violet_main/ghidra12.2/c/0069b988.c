/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0069b988; name: FUN_0069b988
 */


undefined1 * FUN_0069b988(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  ulong uVar8;
  size_t __n;
  int iVar9;
  
  if ((param_1 != PTR_DAT_047cf810) && (lVar5 = *(long *)(param_1 + 0x28), lVar5 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar5 = *(long *)(param_1 + 0x28);
    }
    *param_2 = 10;
    uVar1 = *(uint *)(lVar5 + 0x1c);
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
    param_2 = (undefined1 *)FUN_00513f18(lVar5,param_2,param_3);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar9 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar9 * 8 + 8);
      *param_2 = 0x12;
      uVar1 = *(uint *)(lVar5 + 0x18);
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
      param_2 = (undefined1 *)FUN_00268924(lVar5,param_2,param_3);
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if ((*(byte *)(uVar8 + 8) & 1) == 0) {
      __src = (void *)(uVar8 + 9);
      uVar7 = (ulong)(*(byte *)(uVar8 + 8) >> 1);
    }
    else {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      __src = *(void **)(uVar8 + 0x18);
    }
    __n = (size_t)(int)uVar7;
    if (*param_3 - (long)param_2 < (long)__n) {
      puVar6 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar7,param_2);
      return puVar6;
    }
    memcpy(param_2,__src,__n);
    param_2 = param_2 + __n;
  }
  return param_2;
}


