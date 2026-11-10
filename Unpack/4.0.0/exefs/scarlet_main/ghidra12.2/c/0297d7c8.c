/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297d7c8; name: FUN_0297d7c8
 */


bool FUN_0297d7c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
  if ((*(byte *)(lVar1 + 0x499) >> 2 & 1) == 0) {
    return *(uint *)(lVar1 + 0x30) < 2;
  }
  return false;
}


