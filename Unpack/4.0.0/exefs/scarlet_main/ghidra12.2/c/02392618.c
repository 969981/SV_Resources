/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02392618; name: FUN_02392618
 */


undefined8 FUN_02392618(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_023a0564(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_023a074c(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_023a0938(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_023a0b2c(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


