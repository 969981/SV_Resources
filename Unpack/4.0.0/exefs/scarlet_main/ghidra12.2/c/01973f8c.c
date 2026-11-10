/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01973f8c; name: FUN_01973f8c
 */


uint FUN_01973f8c(long param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_01973fd4(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xf,param_2);
  return uVar1 & 1;
}


