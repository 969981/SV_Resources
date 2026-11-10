/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01cf4200; name: FUN_01cf4200
 */


bool FUN_01cf4200(void)

{
  bool bVar1;
  
  FUN_019b511c();
  DAT_0483a570 = DAT_0483a578;
  if (DAT_0483a578 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(DAT_0483a578 + 0x30) != 0;
  }
  return bVar1;
}


