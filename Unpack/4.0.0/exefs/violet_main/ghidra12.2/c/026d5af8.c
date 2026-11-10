/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 026d5af8; name: FUN_026d5af8
 */


bool FUN_026d5af8(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x150) != 0) {
    iVar2 = FUN_00f42d3c();
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}


