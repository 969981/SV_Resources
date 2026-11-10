/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 014608b0; name: FUN_014608b0
 */


void FUN_014608b0(long param_1,long param_2)

{
  if ((param_2 == 0) || (*(char *)(param_2 + 0x44) == '\0')) {
    return;
  }
  if (*(char *)(param_2 + 0x3f) == '\0') {
    FUN_014608e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0xd0));
    return;
  }
  FUN_01460cdc(param_2,1);
  return;
}


