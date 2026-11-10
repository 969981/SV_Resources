/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0068c674; name: FUN_0068c674
 */


undefined1 * FUN_0068c674(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  void *__src;
  ulong uVar7;
  undefined1 uVar8;
  ulong uVar9;
  size_t __n;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar10 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar10 * 8 + 8);
      *param_2 = 10;
      uVar2 = *(uint *)(lVar5 + 0x18);
      if (uVar2 < 0x80) {
        param_2[1] = (byte)uVar2;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar2 | 0x80;
        if (uVar2 >> 0xe == 0) {
          param_2[2] = (char)(uVar2 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar2 = uVar2 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar2 >> 7;
            puVar6[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar2 >> 0xe;
            uVar2 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_00268924(lVar5,param_2,param_3);
      iVar10 = iVar10 + 1;
    } while (iVar10 != iVar1);
  }
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (param_2 < (undefined1 *)*param_3) {
      uVar8 = 1;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar8 = *(undefined1 *)(param_1 + 0x28);
    }
    *param_2 = 0x10;
    param_2[1] = uVar8;
    param_2 = param_2 + 2;
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


