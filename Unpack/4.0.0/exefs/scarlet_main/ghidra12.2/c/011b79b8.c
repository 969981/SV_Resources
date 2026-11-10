/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b79b8; name: FUN_011b79b8
 */


undefined8 FUN_011b79b8(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_011b7194();
  if (lVar1 == 0) {
    uVar2 = 0xe8cd8d64013d532;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}


