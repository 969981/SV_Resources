/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00376730; name: FUN_00376730
 */


void FUN_00376730(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(*param_1 + 0x28);
  uVar3 = FUN_00377f30((ulong)uVar1,*(undefined4 *)(*param_2 + 0x28));
  if (3 < uVar3) {
    return;
  }
  uVar1 = *(uint *)(PTR_DAT_047cc648 + (ulong)uVar1 * 4);
  lVar4 = *param_2;
  if (*(int *)(lVar4 + 8) == 1) {
    uVar2 = *(uint *)(lVar4 + 0x60);
  }
  else if (*(int *)(lVar4 + 8) == 0) {
    uVar2 = *(uint *)(PTR_DAT_047cc648 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
  }
  else {
    uVar2 = FUN_0038cbd0(param_2[2],param_2[1],*(undefined4 *)PTR_DAT_047cc650);
  }
  FUN_00376e50(param_1,param_2,uVar2 ^ (uVar1 >> 0x1e | uVar1 << 2));
  return;
}


