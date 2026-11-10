/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001d141c; name: FUN_001d141c
 */


undefined8 FUN_001d141c(long *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar1 = 1;
  }
  else if ((char)param_1[0x3c] == '\0') {
    FUN_001cf980();
    uVar1 = 0;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}


