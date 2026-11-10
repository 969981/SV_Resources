/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01c229c8; name: FUN_01c229c8
 */


undefined8 FUN_01c229c8(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_01c22bd0(*(undefined8 *)(param_1 + 8));
    break;
  case 1:
    uVar1 = FUN_01c22c08(param_1 + 8);
    break;
  case 2:
    uVar1 = FUN_01c22c48(param_1 + 8);
    break;
  case 3:
    uVar1 = FUN_01c22c94(param_1 + 8);
    break;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


