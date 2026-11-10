/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a2be0; name: FUN_003a2be0
 */


undefined8 FUN_003a2be0(long param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_2 != (long *)0x0) && (*(long *)(param_1 + 0x28) != 0)) {
    uVar1 = 1;
    *param_2 = *(long *)(param_1 + 0x18) - *(long *)(*(long *)(param_1 + 0x28) + 0x18);
  }
  return uVar1;
}


