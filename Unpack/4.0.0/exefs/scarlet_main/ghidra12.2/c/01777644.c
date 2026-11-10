/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


