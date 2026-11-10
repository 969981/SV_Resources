/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01581924; name: FUN_01581924
 */


void FUN_01581924(int *param_1,long param_2)

{
  FUN_007cd6f8(param_2,*(undefined8 *)(param_2 + 0x18));
  if (*param_1 == 0) {
    *(undefined4 *)(param_2 + 0xb0) = 10;
    return;
  }
  return;
}


