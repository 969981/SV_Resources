/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 010a0110; name: FUN_010a0110
 */


void FUN_010a0110(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x708) == 0) {
    return;
  }
  uVar1 = FUN_01445c30(param_2);
  FUN_010a06a0(uVar1,*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x708));
  return;
}


