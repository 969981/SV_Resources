/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00945a7c; name: FUN_00945a7c
 */


void FUN_00945a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04523da0;
  if (*(char *)((long)param_1 + 9) != '\0') {
    param_1[3] = 0;
    FUN_0226f4a0(3);
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  return;
}


