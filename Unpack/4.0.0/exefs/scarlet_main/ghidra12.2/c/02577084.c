/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02577084; name: FUN_02577084
 */


undefined8 FUN_02577084(undefined1 *param_1)

{
  undefined8 uVar1;
  
  switch(*param_1) {
  case 0:
    uVar1 = FUN_0257a3e4(*(undefined8 *)(param_1 + 8));
    return uVar1;
  case 1:
    uVar1 = FUN_0257a5cc(param_1 + 8);
    return uVar1;
  case 2:
    uVar1 = FUN_0257a7b8(param_1 + 8);
    return uVar1;
  case 3:
    uVar1 = FUN_0257a9ac(param_1 + 8);
    return uVar1;
  default:
    return 0;
  }
}


