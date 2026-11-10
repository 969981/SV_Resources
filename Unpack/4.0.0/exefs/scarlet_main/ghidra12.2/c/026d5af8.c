/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


