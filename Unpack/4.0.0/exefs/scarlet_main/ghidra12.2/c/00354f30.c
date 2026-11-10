/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00354f30; name: FUN_00354f30
 */


bool FUN_00354f30(void)

{
  ulong uVar1;
  
  uVar1 = FUN_003547e0();
  if ((uVar1 & 1) == 0) {
    return false;
  }
  return *(char *)(DAT_047ef690 + 8) != '\0';
}


