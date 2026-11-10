/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01effa90; name: FUN_01effa90
 */


void FUN_01effa90(void)

{
  long lVar1;
  
  lVar1 = FUN_017ca36c();
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x3c) = 1;
    *(undefined4 *)(lVar1 + 0x38) = 1;
  }
  return;
}


