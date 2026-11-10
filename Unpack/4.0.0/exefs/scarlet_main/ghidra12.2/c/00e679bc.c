/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e679bc; name: FUN_00e679bc
 */


undefined8 FUN_00e679bc(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(*(long *)(param_1 + 0x70) + 0x19) != '\0') && ((param_2 & 1) != 0)) {
    FUN_00e679f0(*(long *)(param_1 + 0x70));
    uVar1 = 1;
  }
  return uVar1;
}


