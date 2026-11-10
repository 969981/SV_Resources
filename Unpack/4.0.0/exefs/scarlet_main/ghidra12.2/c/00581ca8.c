/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00581ca8; name: FUN_00581ca8
 */


void FUN_00581ca8(undefined *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (param_1 == PTR_DAT_047ce348) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = FUN_00578888();
      iVar3 = uVar2 + (((uint)LZCOUNT(uVar2 | 1) ^ 0x1f) * 9 + 0x49 >> 6) + 1;
    }
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    *(int *)(param_1 + 0x18) = iVar3;
    return;
  }
  uVar4 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
  bVar1 = *(byte *)(uVar4 + 8);
  if ((bVar1 & 1) == 0) {
    uVar2 = (uint)(bVar1 >> 1);
  }
  else {
    uVar2 = (uint)*(undefined8 *)(uVar4 + 0x10);
  }
  *(uint *)(param_1 + 0x18) = uVar2 + iVar3;
  return;
}


