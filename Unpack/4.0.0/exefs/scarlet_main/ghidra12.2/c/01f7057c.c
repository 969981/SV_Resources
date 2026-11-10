/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7057c; name: FUN_01f7057c
 */


undefined8 FUN_01f7057c(long *param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*param_1 + 0x60) == 0) {
    return 0;
  }
  uVar1 = FUN_01f65db0(*param_1 + 0x70);
  return uVar1;
}


