/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0124d360; name: FUN_0124d360
 */


uint FUN_0124d360(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_012440e8(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_0124da8c(uVar2,param_2);
  return uVar1 & 1;
}


