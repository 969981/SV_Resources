/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a46a34; name: FUN_01a46a34
 */


void FUN_01a46a34(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_01b9e20c(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_01b9e25c(param_2 + 8);
    return;
  case 2:
    FUN_01b9e2b0(param_2 + 8);
    return;
  case 3:
    FUN_01b9e310(param_2 + 8);
    return;
  default:
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
}


