/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028a31b8; name: FUN_028a31b8
 */


void FUN_028a31b8(long param_1)

{
  long lVar1;
  undefined8 local_8;
  
  FUN_028a3238(param_1 + 0x30);
  local_8 = *(undefined8 *)(param_1 + 0x308);
  *(undefined8 *)(param_1 + 0x308) = 0;
  FUN_012e4320(&local_8);
  lVar1 = *(long *)(param_1 + 800);
  *(undefined8 *)(param_1 + 800) = 0;
  if (lVar1 != 0) {
    FUN_028a2658(param_1 + 0x328);
  }
  lVar1 = *(long *)(param_1 + 0x340);
  *(undefined8 *)(param_1 + 0x340) = 0;
  if (lVar1 != 0) {
    FUN_028a2b84(param_1 + 0x348);
  }
  lVar1 = *(long *)(param_1 + 0x360);
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (lVar1 == 0) {
    return;
  }
  FUN_028a1ee0(param_1 + 0x368);
  return;
}


