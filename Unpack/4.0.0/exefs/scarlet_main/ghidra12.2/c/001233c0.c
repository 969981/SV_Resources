/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001233c0; name: FUN_001233c0
 */


undefined8 FUN_001233c0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x10) + -8) == 'F') {
    uVar1 = FUN_001288f0(param_1,*(undefined8 *)
                                  (*(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18),param_2,
                         param_3,param_4);
    return uVar1;
  }
  return 1;
}


