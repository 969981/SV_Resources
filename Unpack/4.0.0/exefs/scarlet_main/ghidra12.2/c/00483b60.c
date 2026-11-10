/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00483b60; name: FUN_00483b60
 */


int FUN_00483b60(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  size_t __n;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == param_2) {
    return 0;
  }
  FUN_00498e10(param_1,0xffffffff,0);
  FUN_00498e10(param_2,0xffffffff,0);
  if (((*(byte *)(param_1 + 0xe2) >> 4 & 1) != 0) || ((*(byte *)(param_2 + 0xe2) >> 4 & 1) != 0))
  goto LAB_00483c14;
  uVar4 = (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_1 + 0x130) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
  uVar4 = (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x130) & 0xff00ff00ff00ff) << 8;
  uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
  uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
  if (uVar3 == uVar4) {
    uVar4 = (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar3 = uVar4 >> 0x20 | uVar4 << 0x20;
    uVar4 = (*(ulong *)(param_2 + 0x138) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x138) & 0xff00ff00ff00ff) << 8;
    uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
    uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
    if (uVar3 != uVar4) goto LAB_00483c08;
    uVar1 = (*(uint *)(param_1 + 0x140) & 0xff00ff00) >> 8 |
            (*(uint *)(param_1 + 0x140) & 0xff00ff) << 8;
    uVar3 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    uVar1 = (*(uint *)(param_2 + 0x140) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x140) & 0xff00ff) << 8;
    uVar4 = (ulong)(uVar1 >> 0x10 | uVar1 << 0x10);
    if (uVar3 != uVar4) goto LAB_00483c08;
    iVar2 = 0;
  }
  else {
LAB_00483c08:
    iVar2 = 1;
    if (uVar3 < uVar4) {
      iVar2 = -1;
    }
  }
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_00483c14:
  if (*(int *)(param_1 + 0x80) != 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x80) != 0) {
    return 0;
  }
  __n = *(size_t *)(param_1 + 0x78);
  if ((long)__n < *(long *)(param_2 + 0x78)) {
    return -1;
  }
  if (*(long *)(param_2 + 0x78) < (long)__n) {
    return 1;
  }
  iVar2 = memcmp(*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),__n);
  return iVar2;
}


