/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00533400; name: FUN_00533400
 */


void FUN_00533400(int param_1,undefined1 *param_2)

{
  if (param_1 < 0) {
    *param_2 = 0x2d;
    FUN_00533270(-param_1,param_2 + 1);
    return;
  }
  FUN_00533270();
  return;
}


