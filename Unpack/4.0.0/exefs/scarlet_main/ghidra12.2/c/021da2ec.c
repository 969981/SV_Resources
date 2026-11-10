/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 021da2ec; name: FUN_021da2ec
 */


long FUN_021da2ec(void)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_026f7244();
  lVar2 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = *plVar1 - (ulong)*(byte *)((long)plVar1 + 0xd);
  }
  return lVar2;
}


