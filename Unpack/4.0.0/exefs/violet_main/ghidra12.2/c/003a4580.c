/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


