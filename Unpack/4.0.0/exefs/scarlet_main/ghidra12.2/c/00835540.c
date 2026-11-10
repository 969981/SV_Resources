/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00835540; name: FUN_00835540
 */


int FUN_00835540(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  
  uVar2 = *(uint *)(param_1 + 0x2c) & 0x7fffffff;
  if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x28)) {
    uVar2 = *(uint *)(param_1 + 0x28);
  }
  uVar6 = *(uint *)(param_1 + 0x68);
  uVar8 = (ulong)uVar6;
  iVar7 = uVar2 * 5 + 0x30;
  if (0 < (int)uVar6) {
    puVar9 = (uint *)(param_1 + 0x60 + *(long *)(param_1 + 0x60) + 0xc);
    do {
      puVar1 = puVar9 + -1;
      uVar5 = *puVar9;
      puVar9 = puVar9 + 0x18;
      uVar2 = uVar5 & 0x7fffffff;
      if ((int)(uVar5 & 0x7fffffff) <= (int)*puVar1) {
        uVar2 = *puVar1;
      }
      uVar8 = uVar8 - 1;
      iVar7 = iVar7 + uVar2 * 4;
    } while (uVar8 != 0);
  }
  uVar2 = *(uint *)(param_1 + 0xcc) & 0x7fffffff;
  if ((int)uVar2 <= (int)*(uint *)(param_1 + 200)) {
    uVar2 = *(uint *)(param_1 + 200);
  }
  uVar5 = *(uint *)(param_1 + 0xe4) & 0x7fffffff;
  if ((int)uVar5 <= (int)*(uint *)(param_1 + 0xe0)) {
    uVar5 = *(uint *)(param_1 + 0xe0);
  }
  uVar3 = *(uint *)(param_1 + 0xf4) & 0x7fffffff;
  if ((int)uVar3 <= (int)*(uint *)(param_1 + 0xf0)) {
    uVar3 = *(uint *)(param_1 + 0xf0);
  }
  uVar4 = *(uint *)(param_1 + 0x104) & 0x7fffffff;
  if ((int)uVar4 <= (int)*(uint *)(param_1 + 0x100)) {
    uVar4 = *(uint *)(param_1 + 0x100);
  }
  return iVar7 + uVar6 * 0x60 + *(int *)(param_1 + 0x88) * 2 + (uVar2 << 7 | 0x18) + uVar3 +
         (uVar5 + *(int *)(param_1 + 0xa8)) * 8 +
         (*(int *)(param_1 + 0x98) + *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0xb8) + uVar4) *
         4 + 0x58;
}


