/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dba258; name: FUN_01dba258
 */


void FUN_01dba258(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04540808;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_0159a808(*(undefined4 *)(param_1 + 1),*(undefined4 *)((long)param_1 + 0xc),param_1 + 2);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  FUN_00db239c(param_1 + 2);
  return;
}


