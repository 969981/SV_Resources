/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011b70b0; name: FUN_011b70b0
 */


undefined8 FUN_011b70b0(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_011b7194();
  if (lVar1 == 0) {
    uVar2 = 0xd32a13c3020ab619;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}


