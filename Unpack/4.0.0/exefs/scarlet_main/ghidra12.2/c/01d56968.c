/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d56968; name: FUN_01d56968
 */


void FUN_01d56968(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_01d56afc(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_01d56be4(param_2 + 8);
    return;
  case 2:
    FUN_01d56cd0(param_2 + 8);
    return;
  case 3:
    FUN_01d56dc8(param_2 + 8);
    return;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}


