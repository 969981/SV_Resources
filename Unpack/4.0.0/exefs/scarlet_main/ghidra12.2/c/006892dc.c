/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006892dc; name: FUN_006892dc
 */


undefined1 * FUN_006892dc(undefined *param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined1 *puVar5;
  void *__src;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  size_t __n;
  
  if ((param_1 != PTR_DAT_047cf5d8) && (lVar4 = *(long *)(param_1 + 0x10), lVar4 != 0)) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      lVar4 = *(long *)(param_1 + 0x10);
    }
    *param_2 = 10;
    uVar1 = *(uint *)(lVar4 + 0x18);
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
          puVar5 = param_2;
          uVar2 = uVar1 >> 7;
          puVar5[-1] = (byte)uVar1 | 0x80;
          param_2 = puVar5 + 1;
          uVar3 = uVar1 >> 0xe;
          uVar1 = uVar2;
        } while (uVar3 != 0);
        *puVar5 = (char)uVar2;
      }
    }
    param_2 = (undefined1 *)FUN_00689a40(lVar4,param_2,param_3);
  }
  uVar1 = *(uint *)(param_1 + 0x18);
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
    }
    else {
      param_2[1] = (byte)uVar1 | 0x80;
      if (uVar1 >> 0xe == 0) {
        param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
        param_2 = param_2 + 3;
      }
      else {
        uVar7 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar5 = param_2;
          uVar6 = uVar7 >> 7;
          puVar5[-1] = (byte)uVar7 | 0x80;
          param_2 = puVar5 + 1;
          uVar8 = uVar7 >> 0xe;
          uVar7 = uVar6;
        } while (uVar8 != 0);
        *puVar5 = (char)uVar6;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar7 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar7 + 8) & 1) == 0) {
    __src = (void *)(uVar7 + 9);
    uVar6 = (ulong)(*(byte *)(uVar7 + 8) >> 1);
  }
  else {
    uVar6 = *(ulong *)(uVar7 + 0x10);
    __src = *(void **)(uVar7 + 0x18);
  }
  __n = (size_t)(int)uVar6;
  if (*param_3 - (long)param_2 < (long)__n) {
    puVar5 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar6,param_2);
    return puVar5;
  }
  memcpy(param_2,__src,__n);
  return param_2 + __n;
}


