/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02986014; name: FUN_02986014
 */


bool FUN_02986014(undefined8 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 1) != 0) {
    return true;
  }
  iVar2 = FUN_01243680();
  iVar3 = FUN_0123ee04(param_1);
  if ((iVar2 == 2) || (iVar2 == 0)) {
    bVar1 = iVar3 != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}


