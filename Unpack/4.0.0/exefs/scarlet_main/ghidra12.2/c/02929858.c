/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02929858; name: FUN_02929858
 */


undefined8 FUN_02929858(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_0292991c(param_1);
    break;
  case 1:
    uVar2 = FUN_02929960(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    goto LAB_029298ec;
  case 2:
    FUN_01497d84(param_1);
    uVar2 = FUN_01497d90();
    if ((uVar2 & 1) != 0) {
      FUN_02929984(param_1);
    }
LAB_029298ec:
    FUN_01497d74(param_1);
    return 1;
  case 3:
    FUN_02929b24(param_1);
    break;
  case 4:
    uVar2 = FUN_02929960(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x78) == '\x01') {
      FUN_02929cb8(param_1);
    }
  default:
    return 2;
  }
  FUN_01497d74(param_1);
  return 0;
}


