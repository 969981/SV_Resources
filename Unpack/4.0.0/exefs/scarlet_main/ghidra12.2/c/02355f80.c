/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02355f80; name: FUN_02355f80
 */


void FUN_02355f80(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_02356194(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_02356250(param_1 + 8);
    return;
  case 2:
    FUN_02356310(param_1 + 8);
    return;
  case 3:
    FUN_023563dc(param_1 + 8);
    return;
  default:
    return;
  }
}


