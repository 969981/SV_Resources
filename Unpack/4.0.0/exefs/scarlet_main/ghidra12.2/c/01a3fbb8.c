/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a3fbb8; name: FUN_01a3fbb8
 */


void FUN_01a3fbb8(undefined8 param_1,undefined8 *param_2)

{
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    FUN_01a3fbd0(param_1,0);
    return;
  }
  FUN_01a3fbd0(param_1,*(undefined8 *)*param_2);
  return;
}


