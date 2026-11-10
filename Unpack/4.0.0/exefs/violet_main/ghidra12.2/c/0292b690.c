/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292b690; name: FUN_0292b690
 */


undefined8 FUN_0292b690(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_0292b724(param_1);
    break;
  case 1:
    uVar2 = FUN_0292b768(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    FUN_01497d74(param_1);
    return 1;
  case 2:
    FUN_0292b78c(param_1);
    break;
  case 3:
    uVar2 = FUN_0292b768(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    return 2;
  default:
    return 2;
  }
  FUN_01497d74(param_1);
  return 0;
}


