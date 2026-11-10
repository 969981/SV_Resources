/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cf2ba8; name: FUN_00cf2ba8
 */


bool FUN_00cf2ba8(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = FUN_00cf2c34();
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar3 + (ulong)*(uint *)(param_1 + 0x60));
  if (lVar4 == 0x137e8707be8470ef) {
    bVar1 = iVar2 == *(int *)(lVar3 + (ulong)*(uint *)(param_1 + 100));
  }
  else if (lVar4 == 0x133a8707be4aa423) {
    bVar1 = iVar2 != *(int *)(lVar3 + (ulong)*(uint *)(param_1 + 100));
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


