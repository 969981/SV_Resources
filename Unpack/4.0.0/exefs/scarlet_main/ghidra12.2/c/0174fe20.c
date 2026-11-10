/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


