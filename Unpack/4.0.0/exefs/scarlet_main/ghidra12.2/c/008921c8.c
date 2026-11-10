/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 008921c8; name: FUN_008921c8
 */


long FUN_008921c8(long param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((int)param_3 < 0) || (*(int *)(param_1 + 0x20) <= (int)param_3)) {
    return 0;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 0x10 + 8);
  uVar3 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar3 = uVar1;
  }
  if (param_2 != (uint *)0x0) {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_3 * 0x10 + 0xc);
    uVar1 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = uVar2;
    }
    if (uVar1 < uVar3) {
      return 0;
    }
    *param_2 = uVar3;
    param_2[1] = uVar1 - uVar3;
  }
  return *(long *)(param_1 + 0x28) + (ulong)uVar3;
}


