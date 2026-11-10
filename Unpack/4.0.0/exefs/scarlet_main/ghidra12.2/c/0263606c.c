/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0263606c; name: FUN_0263606c
 */


void FUN_0263606c(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_02636104(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_02636174(param_2 + 8);
    return;
  case 2:
    FUN_026361e8(param_2 + 8);
    return;
  case 3:
    FUN_02636268(param_2 + 8);
    return;
  default:
    *param_1 = 0;
    return;
  }
}


