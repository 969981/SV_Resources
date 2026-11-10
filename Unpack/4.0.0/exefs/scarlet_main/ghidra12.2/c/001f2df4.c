/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001f2df4; name: FUN_001f2df4
 */


bool FUN_001f2df4(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) == 0) {
    lVar2 = FUN_001f914c();
    if (lVar2 - *(long *)(param_1 + 0x908) == *(long *)(param_1 + 0x910)) {
      bVar1 = (*(byte *)(param_1 + 0x9ab) & 0xc) == 0;
    }
    else {
      bVar1 = true;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


