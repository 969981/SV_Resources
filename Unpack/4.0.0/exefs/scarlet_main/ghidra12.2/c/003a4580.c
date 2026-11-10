/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a4580; name: FUN_003a4580
 */


bool FUN_003a4580(long param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if (uVar3 == 0) {
    return false;
  }
  if (*(int *)(param_1 + 0x580) == 0) {
    return true;
  }
  piVar4 = (int *)(param_1 + 0x5d0);
  uVar2 = 1;
  do {
    uVar5 = uVar2;
    if (uVar3 == uVar5) break;
    iVar1 = *piVar4;
    piVar4 = piVar4 + 0x14;
    uVar2 = uVar5 + 1;
  } while (iVar1 != 0);
  return uVar5 < uVar3;
}


