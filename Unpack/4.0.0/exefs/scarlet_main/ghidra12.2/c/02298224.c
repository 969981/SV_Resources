/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02298224; name: FUN_02298224
 */


void FUN_02298224(undefined8 *param_1,undefined1 *param_2)

{
  switch(*param_2) {
  case 0:
    FUN_02298424(*(undefined8 *)(param_2 + 8));
    return;
  case 1:
    FUN_0229845c(param_2 + 8);
    return;
  case 2:
    FUN_02298498(param_2 + 8);
    return;
  case 3:
    FUN_022984e0(param_2 + 8);
    return;
  default:
    *param_1 = 0x3f80000040c00000;
    param_1[1] = 0x42c800003f800000;
    param_1[2] = 0x3f000000;
    return;
  }
}


