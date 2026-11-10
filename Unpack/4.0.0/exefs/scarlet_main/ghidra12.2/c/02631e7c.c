/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02631e7c; name: FUN_02631e7c
 */


void FUN_02631e7c(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_0263207c(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    FUN_02632100(param_1 + 8);
    break;
  case 2:
    FUN_02632188(param_1 + 8);
    break;
  case 3:
    FUN_0263221c(param_1 + 8);
  }
  return;
}


