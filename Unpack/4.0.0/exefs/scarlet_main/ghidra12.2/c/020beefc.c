/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020beefc; name: FUN_020beefc
 */


undefined8 FUN_020beefc(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0x48;
  if (param_2 != 0) {
    lVar1 = 0x50;
  }
  return *(undefined8 *)(param_1 + lVar1);
}


