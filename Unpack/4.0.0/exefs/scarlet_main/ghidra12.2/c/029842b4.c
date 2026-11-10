/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 029842b4; name: FUN_029842b4
 */


uint FUN_029842b4(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0298ce6c(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x11,param_2);
  return uVar1 & 1;
}


