/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0154b684; name: FUN_0154b684
 */


bool FUN_0154b684(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  
  FUN_0154b6d4(param_2);
  uVar3 = FUN_0154b6dc();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_0154b6c8(param_1);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}


