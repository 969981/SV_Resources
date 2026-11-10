/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02010b5c; name: FUN_02010b5c
 */


void FUN_02010b5c(undefined4 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x40) != '\0') {
    *(undefined4 *)(*(long *)(param_2 + 0x78) + 0x4e4) = param_1;
  }
  return;
}


