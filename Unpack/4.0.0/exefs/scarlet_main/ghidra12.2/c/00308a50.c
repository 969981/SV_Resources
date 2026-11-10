/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00308a50; name: FUN_00308a50
 */


void FUN_00308a50(long param_1)

{
  if (*(char *)(param_1 + 0xc48) == '\0') {
    *(undefined8 *)(param_1 + 0xee8) = 0x8000000000000000;
    *(undefined4 *)(param_1 + 0xef0) = 0;
    *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe48);
    return;
  }
  *(undefined4 *)(param_1 + 0xe68) = *(undefined4 *)(param_1 + 0xe48);
  return;
}


