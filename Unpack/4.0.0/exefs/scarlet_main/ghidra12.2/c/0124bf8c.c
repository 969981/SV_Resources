/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124bf8c; name: FUN_0124bf8c
 */


uint FUN_0124bf8c(long param_1,undefined4 param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_0124bfdc(*(undefined8 *)(param_1 + 0x20));
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x69,param_2,param_3);
  return uVar1 & 1;
}


