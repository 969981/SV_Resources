/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007cb1f0; name: FUN_007cb1f0
 */


void FUN_007cb1f0(void)

{
  undefined1 auStack_30 [16];
  
  if (DAT_047fb1f1 == '\x01') {
    if (DAT_047fb1f2 == '\x01') {
      FUN_007cb250(auStack_30);
    }
    FUN_0078a088(0x11);
    DAT_047fb1f1 = '\0';
    FUN_00794a5c(auStack_30,0x11);
  }
  return;
}


