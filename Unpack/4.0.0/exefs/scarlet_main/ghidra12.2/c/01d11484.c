/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01d11484; name: FUN_01d11484
 */


void FUN_01d11484(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    FUN_01d115c8(*(undefined8 *)(param_1 + 8));
    return;
  case 1:
    FUN_01d115e4(param_1 + 8);
    return;
  case 2:
    FUN_01d11604(param_1 + 8);
    return;
  case 3:
    FUN_01d11630(param_1 + 8);
    return;
  default:
    FUN_01d116a8();
    return;
  }
}


