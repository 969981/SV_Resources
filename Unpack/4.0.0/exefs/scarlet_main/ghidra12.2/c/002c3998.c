/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002c3998; name: FUN_002c3998
 */


void FUN_002c3998(byte *param_1)

{
  if (4 < *(ulong *)(param_1 + 0x30)) {
                    /* try { // try from 002c39b0 to 002c39b3 has its CatchHandler @ 002c3a04 */
    FUN_00350fd0();
  }
  FUN_002c3a30(param_1 + 0x38,*(undefined8 *)(param_1 + 0x40));
  if ((param_1[0x18] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x28));
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  FUN_0049e790(PTR_LAB_047cba48,*(undefined8 *)(param_1 + 0x10));
  return;
}


