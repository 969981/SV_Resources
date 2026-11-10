/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 017a4180; name: FUN_017a4180
 */


int FUN_017a4180(long param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0xc)) {
    return *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20) + -1;
  }
  piVar1 = (int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    piVar1 = (int *)(param_1 + 0x24);
  }
  return *(int *)(param_1 + 8) + ~(*piVar1 * *(int *)(param_1 + 0xc));
}


