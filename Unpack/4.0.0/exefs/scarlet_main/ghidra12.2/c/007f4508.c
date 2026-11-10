/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f4508; name: FUN_007f4508
 */


undefined8 FUN_007f4508(long param_1)

{
  undefined8 uVar1;
  
  if ((*(long *)(param_1 + 0x40) == 0) || (*(char *)(param_1 + 0x28) == -3)) {
    return 0xffffffff;
  }
  uVar1 = FUN_007f3e4c();
  return uVar1;
}


