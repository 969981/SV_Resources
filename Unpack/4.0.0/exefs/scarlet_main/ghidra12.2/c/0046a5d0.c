/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0046a5d0; name: FUN_0046a5d0
 */


undefined4 FUN_0046a5d0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x400) {
    return 2;
  }
  if (param_1 < 0x1000) {
    return 3;
  }
  uVar1 = 4;
  if (0x1fff < param_1) {
    uVar1 = 5;
  }
  return uVar1;
}


