/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00799c60; name: FUN_00799c60
 */


bool FUN_00799c60(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x10) != 0) {
    iVar2 = FUN_007a07fc();
    bVar1 = iVar2 == 1;
  }
  return bVar1;
}


