/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019b7db4; name: FUN_019b7db4
 */


void FUN_019b7db4(long param_1,undefined8 param_2)

{
  long lVar1;
  uint local_24;
  
  local_24 = FUN_0136b014(param_2);
  local_24 = local_24 & 0xff;
  lVar1 = FUN_019b7e00(param_1 + 0x1a0,&local_24);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x30) = param_2;
  }
  return;
}


