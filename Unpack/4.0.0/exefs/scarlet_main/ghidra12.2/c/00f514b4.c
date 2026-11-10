/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00f514b4; name: FUN_00f514b4
 */


void FUN_00f514b4(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(param_1 + 0x170);
  while ((iVar1 != 4 && (uVar2 = FUN_00f514f4(param_1), (uVar2 & 1) != 0))) {
    iVar1 = *(int *)(param_1 + 0x170);
  }
  return;
}


