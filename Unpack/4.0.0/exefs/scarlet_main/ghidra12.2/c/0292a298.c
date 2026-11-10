/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292a298; name: FUN_0292a298
 */


undefined8 FUN_0292a298(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_0292a354(param_1);
LAB_0292a2d8:
    FUN_01497d74(param_1);
    return 1;
  case 1:
    uVar2 = FUN_0292a398(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_0292a3bc(param_1);
    if ((uVar2 & 1) == 0) goto LAB_0292a2d8;
    break;
  case 2:
    FUN_0292a6c8(param_1);
    FUN_01497d74(param_1);
    return 0;
  case 3:
    uVar2 = FUN_0292a398(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x88) != '\0') {
      FUN_0292a70c(param_1);
      return 2;
    }
    break;
  default:
    goto LAB_0292a318;
  }
  FUN_0292a528(param_1);
LAB_0292a318:
  return 2;
}


