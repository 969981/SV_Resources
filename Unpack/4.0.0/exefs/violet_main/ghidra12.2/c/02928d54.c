/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02928d54; name: FUN_02928d54
 */


undefined8 FUN_02928d54(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_0155a574();
  switch(uVar1) {
  case 0:
    FUN_02928df4(param_1);
    FUN_01497d74(param_1);
    break;
  case 1:
    uVar2 = FUN_02928e38(param_1);
    if ((uVar2 & 1) != 0) goto LAB_02928dcc;
    break;
  case 2:
    FUN_01497d84(param_1);
    uVar2 = FUN_01497d90();
    if ((uVar2 & 1) != 0) {
      FUN_02928e5c(param_1);
    }
LAB_02928dcc:
    FUN_01497d74(param_1);
    return 1;
  case 3:
    FUN_02928ffc(param_1);
  default:
    return 2;
  }
  return 0;
}


