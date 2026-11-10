/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00685334; name: FUN_00685334
 */


undefined1 * FUN_00685334(long param_1,undefined1 *param_2,long *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  void *__src;
  ulong uVar8;
  ulong uVar9;
  size_t __n;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 1) {
    if ((param_2 < (undefined1 *)*param_3) ||
       (param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2), *(int *)(param_1 + 0x1c) == 1)) {
      bVar5 = *(char *)(param_1 + 0x10) != '\0';
    }
    else {
      bVar5 = false;
    }
    *param_2 = 8;
    param_2[1] = bVar5;
    iVar1 = *(int *)(param_1 + 0x1c);
    param_2 = param_2 + 2;
  }
  if (iVar1 == 2) {
    if ((undefined1 *)*param_3 <= param_2) {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
    }
    lVar6 = *(long *)(param_1 + 0x10);
    *param_2 = 0x12;
    uVar2 = *(uint *)(lVar6 + 0x1c);
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
          puVar7 = param_2;
          uVar3 = uVar2 >> 7;
          puVar7[-1] = (byte)uVar2 | 0x80;
          param_2 = puVar7 + 1;
          uVar4 = uVar2 >> 0xe;
          uVar2 = uVar3;
        } while (uVar4 != 0);
        *puVar7 = (char)uVar3;
      }
    }
    param_2 = (undefined1 *)FUN_00513f18(lVar6,param_2,param_3);
    uVar9 = *(ulong *)(param_1 + 8);
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
  }
  if ((uVar9 & 1) == 0) {
    return param_2;
  }
  uVar9 = uVar9 & 0xfffffffffffffffe;
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
  return param_2 + __n;
}


