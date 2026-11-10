/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a0579c; name: FUN_01a0579c
 */


void FUN_01a0579c(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_01af8754(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_01af8804(param_1 + 8);
    return;
  case 2:
    FUN_01af88b8(param_1 + 8);
    return;
  case 3:
    FUN_01af8978(param_1 + 8);
    return;
  default:
    return;
  }
}


