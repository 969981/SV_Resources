/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e8fa88; name: FUN_00e8fa88
 */


undefined8 FUN_00e8fa88(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_00e8fae8(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 1:
    uVar1 = FUN_00e8fe2c(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 2:
    uVar1 = FUN_00e90170(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 3:
    uVar1 = FUN_00e904b4(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 4:
    uVar1 = FUN_00e90b3c(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 5:
    uVar1 = FUN_00e907f8(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  default:
    return 0;
  }
}


