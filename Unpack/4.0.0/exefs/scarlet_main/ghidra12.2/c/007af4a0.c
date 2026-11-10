/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007af4a0; name: FUN_007af4a0
 */


void FUN_007af4a0(void)

{
  undefined1 auStack_20 [16];
  
  if (DAT_047f9c80 == '\x01') {
    if (DAT_047f9c81 == '\x01') {
      FUN_007af500(auStack_20);
    }
    FUN_0078a088(6);
    DAT_047f9c80 = '\0';
    FUN_00794a5c(auStack_20,6);
  }
  return;
}


