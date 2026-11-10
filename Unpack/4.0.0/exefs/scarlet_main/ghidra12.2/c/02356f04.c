/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02356f04; name: FUN_02356f04
 */


void FUN_02356f04(undefined8 param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_02357108(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_0235717c(param_2 + 8);
    return;
  case 2:
    FUN_023571fc(param_2 + 8);
    return;
  case 3:
    FUN_02357288(param_2 + 8);
    return;
  default:
    FUN_02357374(param_1);
    return;
  }
}


