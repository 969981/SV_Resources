/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0230a19c; name: FUN_0230a19c
 */


ulong FUN_0230a19c(void)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_01ea74c4();
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = (ulong)(*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20)) >> 5;
  }
  return uVar2;
}


