/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e97f14; name: FUN_00e97f14
 */


undefined8 FUN_00e97f14(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 0:
    uVar1 = FUN_00e97f74(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 1:
    uVar1 = FUN_00e982bc(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 2:
    uVar1 = FUN_00e98604(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 3:
    uVar1 = FUN_00e9894c(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 4:
    uVar1 = FUN_00e98fdc(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  case 5:
    uVar1 = FUN_00e98c94(*(undefined8 *)(param_1 + 0x70));
    return uVar1;
  default:
    return 0;
  }
}


