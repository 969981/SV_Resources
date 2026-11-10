/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cb68c; name: FUN_001cb68c
 */


void FUN_001cb68c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    while (lVar1 != 0) {
      FUN_001cb600(param_1,*(undefined8 *)(param_1 + 8),param_2);
      lVar1 = *(long *)(param_1 + 0x18);
    }
  }
  return;
}


