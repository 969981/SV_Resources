/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01777644; name: FUN_01777644
 */


bool FUN_01777644(long param_1)

{
  bool bVar1;
  short sVar2;
  
  if ((*(byte *)(*(long *)(*(long *)(param_1 + 0x70) + 0x10) + 4) >> 2 & 1) == 0) {
    sVar2 = FUN_00cf44f4();
    bVar1 = sVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


