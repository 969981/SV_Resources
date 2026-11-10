/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02559ccc; name: FUN_02559ccc
 */


void FUN_02559ccc(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02559d38(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    FUN_02559d6c(param_1 + 8);
    break;
  case 2:
    FUN_02559da4(param_1 + 8);
    break;
  case 3:
    FUN_02559dec(param_1 + 8);
  }
  return;
}


