/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003f0d70; name: FUN_003f0d70
 */


undefined8 FUN_003f0d70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_003f06e0();
  if ((int)uVar1 != 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar1 = FUN_003f0310(param_1,param_1,param_4);
      return uVar1;
    }
    uVar1 = 1;
  }
  return uVar1;
}


