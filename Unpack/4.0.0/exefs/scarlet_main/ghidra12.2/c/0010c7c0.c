/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0010c7c0; name: FUN_0010c7c0
 */


undefined4 FUN_0010c7c0(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0x6832424b) {
    return 1;
  }
  uVar1 = param_1 + 0x96cdbdb5U >> 0x18 | (param_1 + 0x96cdbdb5U) * 0x100;
  if (uVar1 < 6) {
    return *(undefined4 *)(&DAT_03cb4b60 + (long)(int)uVar1 * 4);
  }
  return 0;
}


