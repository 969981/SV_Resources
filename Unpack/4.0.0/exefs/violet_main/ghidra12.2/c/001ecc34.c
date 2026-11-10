/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
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


