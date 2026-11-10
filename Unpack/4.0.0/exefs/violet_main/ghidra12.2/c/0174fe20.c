/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0174fe20; name: FUN_0174fe20
 */


bool FUN_0174fe20(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x70) + 8) == 0) {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_00ddf348();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}


