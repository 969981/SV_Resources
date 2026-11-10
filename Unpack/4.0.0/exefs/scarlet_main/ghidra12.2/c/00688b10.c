/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00688b10; name: FUN_00688b10
 */


undefined1 * FUN_00688b10(long param_1,undefined1 *param_2,long *param_3)

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
  ulong uVar9;
  size_t __n;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 8;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x10);
      *param_2 = 8;
    }
    if (uVar1 < 0x80) {
      param_2[1] = (byte)uVar1;
      param_2 = param_2 + 2;
      iVar2 = *(int *)(param_1 + 0x24);
      goto joined_r0x00688c2c;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe != 0) {
      uVar8 = (ulong)(long)(int)uVar1 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar6 = param_2;
        uVar7 = uVar8 >> 7;
        puVar6[-1] = (byte)uVar8 | 0x80;
        param_2 = puVar6 + 1;
        uVar9 = uVar8 >> 0xe;
        uVar8 = uVar7;
      } while (uVar9 != 0);
      *puVar6 = (char)uVar7;
      iVar2 = *(int *)(param_1 + 0x24);
      goto joined_r0x00688c2c;
    }
    param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
    param_2 = param_2 + 3;
  }
  iVar2 = *(int *)(param_1 + 0x24);
joined_r0x00688c2c:
  if (iVar2 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar5 = *(long *)(param_1 + 0x18);
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
    param_2 = (undefined1 *)FUN_00689a40(lVar5,param_2,param_3);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
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
  return param_2 + __n;
}


