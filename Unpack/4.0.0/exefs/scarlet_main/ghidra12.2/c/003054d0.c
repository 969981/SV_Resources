/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003054d0; name: FUN_003054d0
 */


bool FUN_003054d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return param_1 != (undefined4 *)0x0;
}


