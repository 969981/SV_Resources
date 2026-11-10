/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00531f9c; name: FUN_00531f9c
 */


void FUN_00531f9c(long param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 8);
  uVar3 = -(param_2 >> 0x1f & 1) & 0xfffffffc00000000 | (param_2 & 0xffffffff) << 2;
  uVar4 = -(param_3 >> 0x1f & 1) & 0xfffffffc00000000 | (param_3 & 0xffffffff) << 2;
  uVar1 = *(undefined4 *)(lVar2 + uVar3);
  *(undefined4 *)(lVar2 + uVar3) = *(undefined4 *)(lVar2 + uVar4);
  *(undefined4 *)(lVar2 + uVar4) = uVar1;
  return;
}


