/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003a4530; name: FUN_003a4530
 */


void FUN_003a4530(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    FUN_003a6d20(*param_1);
  }
  if (param_1[3] != 0) {
    FUN_003a6cb0(*param_1);
  }
  FUN_003a6dd0(param_1 + 0xa9,0x20);
  return;
}


