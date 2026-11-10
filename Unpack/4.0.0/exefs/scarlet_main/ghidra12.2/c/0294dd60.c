/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0294dd60; name: FUN_0294dd60
 */


undefined8 FUN_0294dd60(void)

{
  long lVar1;
  
  lVar1 = FUN_0294db90();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x42) == '\0') {
    return 0;
  }
  *(undefined1 *)(lVar1 + 0x42) = 0;
  return 1;
}


