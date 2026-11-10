/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00452be0; name: FUN_00452be0
 */


undefined8 FUN_00452be0(undefined *param_1,undefined *param_2,undefined *param_3)

{
  if ((DAT_047f19b8 & 1) != 0) {
    return 0;
  }
  if (param_1 != (undefined *)0x0) {
    PTR_FUN_044aa1a0 = param_1;
  }
  if (param_2 != (undefined *)0x0) {
    PTR_FUN_044aa1a8 = param_2;
  }
  if (param_3 != (undefined *)0x0) {
    PTR_FUN_044aa1b0 = param_3;
  }
  return 1;
}


