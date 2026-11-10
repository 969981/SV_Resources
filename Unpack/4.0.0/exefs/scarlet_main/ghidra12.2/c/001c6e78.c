/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c6e78; name: FUN_001c6e78
 */


undefined8 FUN_001c6e78(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0xe8) == 0) {
    uVar1 = *(undefined8 *)(param_1[0xcc] + 8);
  }
  else {
    FUN_001dc298(*param_1,5,2);
    uVar1 = *(undefined8 *)(param_1[0xcc] + 8);
    if (*(long *)(*param_1 + 0xe8) != 0) {
      FUN_001dc2d8(*param_1,5);
    }
  }
  return uVar1;
}


