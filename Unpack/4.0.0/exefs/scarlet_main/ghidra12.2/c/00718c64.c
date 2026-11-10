/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00718c64; name: FUN_00718c64
 */


undefined1 * FUN_00718c64(long param_1,undefined1 *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  void *__src;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
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
      uVar1 = *(uint *)(param_1 + 0x14);
      goto joined_r0x00718d4c;
    }
    param_2[1] = (byte)uVar1 | 0x80;
    if (uVar1 >> 0xe != 0) {
      uVar4 = (ulong)(long)(int)uVar1 >> 7;
      param_2 = param_2 + 3;
      do {
        puVar2 = param_2;
        uVar3 = uVar4 >> 7;
        puVar2[-1] = (byte)uVar4 | 0x80;
        param_2 = puVar2 + 1;
        uVar5 = uVar4 >> 0xe;
        uVar4 = uVar3;
      } while (uVar5 != 0);
      *puVar2 = (char)uVar3;
      uVar1 = *(uint *)(param_1 + 0x14);
      goto joined_r0x00718d4c;
    }
    param_2[2] = (char)((ulong)(long)(int)uVar1 >> 7);
    param_2 = param_2 + 3;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
joined_r0x00718d4c:
  if (uVar1 != 0) {
    if (param_2 < (undefined1 *)*param_3) {
      *param_2 = 0x10;
    }
    else {
      param_2 = (undefined1 *)FUN_0052c6d8(param_3,param_2);
      uVar1 = *(uint *)(param_1 + 0x14);
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
        uVar4 = (ulong)(long)(int)uVar1 >> 7;
        param_2 = param_2 + 3;
        do {
          puVar2 = param_2;
          uVar3 = uVar4 >> 7;
          puVar2[-1] = (byte)uVar4 | 0x80;
          param_2 = puVar2 + 1;
          uVar5 = uVar4 >> 0xe;
          uVar4 = uVar3;
        } while (uVar5 != 0);
        *puVar2 = (char)uVar3;
      }
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  if ((*(byte *)(uVar4 + 8) & 1) == 0) {
    __src = (void *)(uVar4 + 9);
    uVar3 = (ulong)(*(byte *)(uVar4 + 8) >> 1);
  }
  else {
    uVar3 = *(ulong *)(uVar4 + 0x10);
    __src = *(void **)(uVar4 + 0x18);
  }
  __n = (size_t)(int)uVar3;
  if (*param_3 - (long)param_2 < (long)__n) {
    puVar2 = (undefined1 *)FUN_0052c7dc(param_3,__src,uVar3,param_2);
    return puVar2;
  }
  memcpy(param_2,__src,__n);
  return param_2 + __n;
}


