/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02b60cec; name: FUN_02b60cec
 */


bool FUN_02b60cec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x610);
  if (lVar1 == 0) {
    return false;
  }
  return *(long *)(lVar1 + 0x28) != *(long *)(lVar1 + 0x20);
}


