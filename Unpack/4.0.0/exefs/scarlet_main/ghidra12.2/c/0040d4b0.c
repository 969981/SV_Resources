/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0040d4b0; name: FUN_0040d4b0
 */


bool FUN_0040d4b0(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  lVar3 = FUN_003eb8f0(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_003eb480(param_2);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


