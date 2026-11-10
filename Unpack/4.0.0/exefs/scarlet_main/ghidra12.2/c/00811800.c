/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00811800; name: FUN_00811800
 */


undefined8 FUN_00811800(long param_1)

{
  ulong uVar1;
  
  do {
    if (*(int *)(param_1 + 0x40) == 0) {
      return 1;
    }
    uVar1 = FUN_00811834(param_1);
  } while ((uVar1 & 1) != 0);
  return 0;
}


