/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007e5294; name: FUN_007e5294
 */


undefined8 FUN_007e5294(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_007967e8(param_1 + 0x18,param_2 + 0x18);
  if (((((uVar1 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_2 + 8))) ||
      (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10))) ||
     (*(char *)(param_1 + 0x38) != *(char *)(param_2 + 0x38))) {
    return 1;
  }
  return 0;
}


