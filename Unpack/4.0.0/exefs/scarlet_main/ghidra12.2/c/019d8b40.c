/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


