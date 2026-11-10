/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb9ab8; name: FUN_00fb9ab8
 */


undefined8 FUN_00fb9ab8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x40));
  if (((((((uVar1 & 1) == 0) ||
         (uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x48)), (uVar1 & 1) == 0)) ||
        (uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x50)), (uVar1 & 1) == 0)) ||
       ((uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x58)), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x60)), (uVar1 & 1) == 0)))) ||
      ((uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x68)), (uVar1 & 1) == 0 ||
       ((uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x70)), (uVar1 & 1) == 0 ||
        (uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x78)), (uVar1 & 1) == 0)))))) ||
     ((uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x80)), (uVar1 & 1) == 0 ||
      (uVar1 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x88)), (uVar1 & 1) == 0)))) {
    return 0;
  }
  uVar2 = FUN_00fb3a58(*(undefined8 *)(param_1 + 0x90));
  return uVar2;
}


