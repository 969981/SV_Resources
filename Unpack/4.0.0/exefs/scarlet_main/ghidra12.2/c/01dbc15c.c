/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01dbc15c; name: FUN_01dbc15c
 */


void FUN_01dbc15c(long param_1)

{
  FUN_0192cbc0(param_1 + 0x88);
  if (*(undefined4 **)(param_1 + 0x90) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0x90) = 0;
  }
  FUN_0192cbc0(param_1 + 0xa8);
  if (*(undefined4 **)(param_1 + 0xb0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xb0) = 0;
  }
  FUN_0192cbc0(param_1 + 200);
  if (*(undefined4 **)(param_1 + 0xd0) != (undefined4 *)0x0) {
    **(undefined4 **)(param_1 + 0xd0) = 0;
  }
  return;
}


