/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00362550; name: FUN_00362550
 */


uint FUN_00362550(void)

{
  uint uVar1;
  
  uVar1 = FUN_00362c20(0,0);
  if (-1 < (int)uVar1) {
    nnsocketClose(uVar1);
  }
  return ~uVar1 >> 0x1f;
}


