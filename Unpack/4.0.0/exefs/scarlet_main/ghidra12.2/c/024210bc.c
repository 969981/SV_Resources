/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024210bc; name: FUN_024210bc
 */


undefined8 FUN_024210bc(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_02430dcc(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_02430fb4(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_024311a0(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_02431394(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


