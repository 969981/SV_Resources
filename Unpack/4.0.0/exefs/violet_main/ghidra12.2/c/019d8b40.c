/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 019d8b40; name: FUN_019d8b40
 */


bool FUN_019d8b40(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)PTR_DAT_047d0a08 != 0) {
    iVar2 = FUN_00f21480();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


