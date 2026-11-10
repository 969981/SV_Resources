/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0051fe2c; name: FUN_0051fe2c
 */


undefined8 FUN_0051fe2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0051fe6c();
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar2 = FUN_0052d318(param_4,**(undefined8 **)(param_1 + 8));
  return uVar2;
}


