/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0191f29c; name: FUN_0191f29c
 */


undefined1 FUN_0191f29c(long param_1)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (lVar2 == 0) {
    uVar1 = 6;
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 4);
  }
  return uVar1;
}


