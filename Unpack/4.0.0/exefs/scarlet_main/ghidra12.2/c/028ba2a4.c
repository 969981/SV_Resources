/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 028ba2a4; name: FUN_028ba2a4
 */


undefined8 FUN_028ba2a4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  FUN_0088717c();
  uVar1 = FUN_00886988(param_1);
  return uVar1;
}


