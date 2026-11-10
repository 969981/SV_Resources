/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 022840c0; name: FUN_022840c0
 */


undefined8 FUN_022840c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    return 0;
  }
  uVar1 = FUN_00d80f14(DAT_0485a0e8,param_1 + 0x24);
  return uVar1;
}


