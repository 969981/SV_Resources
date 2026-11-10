/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02640a40; name: FUN_02640a40
 */


undefined8 FUN_02640a40(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_02645c08(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_02645df0(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_02645fdc(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_026461d0(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


