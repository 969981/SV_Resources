/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02993238; name: FUN_02993238
 */


void FUN_02993238(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_02993870();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_02993870();
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_02993870();
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    FUN_02993870();
  }
  if (*(long *)(param_1 + 0xd8) != 0) {
    FUN_02993870();
  }
  if (*(long *)(param_1 + 0x108) == 0) {
    return;
  }
  FUN_02993870();
  return;
}


