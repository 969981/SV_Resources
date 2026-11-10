/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 006173c8; name: FUN_006173c8
 */


long FUN_006173c8(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == param_2) {
    return *(long *)(param_3 + 0x10);
  }
  uVar1 = FUN_006173c8();
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  return param_3;
}


