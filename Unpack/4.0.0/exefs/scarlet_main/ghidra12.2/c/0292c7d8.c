/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0292c7d8; name: FUN_0292c7d8
 */


undefined8 FUN_0292c7d8(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_0292c868(param_1);
    break;
  case 1:
    uVar2 = FUN_0292c8ac(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_0292c8d0(param_1);
    break;
  case 2:
    FUN_0292c8f4(param_1);
    break;
  case 3:
    uVar2 = FUN_0292c8ac(param_1);
    if ((uVar2 & 1) != 0) {
      return 2;
    }
  default:
    goto LAB_0292c830;
  }
  FUN_01497d74(param_1);
LAB_0292c830:
  return 0;
}


