/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040d510; name: FUN_0040d510
 */


bool FUN_0040d510(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return false;
  }
  lVar3 = FUN_003eb8f0(param_2,*(long *)(param_1 + 0x18));
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_003eb480(*(undefined8 *)(param_1 + 0x18));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


