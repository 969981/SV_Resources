/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f44bc; name: FUN_007f44bc
 */


undefined8 FUN_007f44bc(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (*(char *)(param_1 + 0x28) != -3) {
      uVar1 = FUN_007f3c70(*(long *)(param_1 + 0x40),*(char *)(param_1 + 0x28),param_2);
      return uVar1;
    }
  }
  return 0xffffffff;
}


