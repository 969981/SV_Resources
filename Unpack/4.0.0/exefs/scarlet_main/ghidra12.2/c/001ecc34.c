/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001ecc34; name: FUN_001ecc34
 */


bool FUN_001ecc34(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetModule(param_2);
  if (iVar2 == iVar3) {
    iVar2 = nnResultGetDescription(param_1);
    iVar3 = nnResultGetDescription(param_2);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


