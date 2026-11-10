/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025d6820; name: FUN_025d6820
 */


void FUN_025d6820(long param_1)

{
  if ((*(long *)(param_1 + 0xf8) == 0) ||
     (*(int *)(param_1 + 0x100) != *(int *)(*(long *)(param_1 + 0xf8) + 0x2c))) {
    return;
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  return;
}


