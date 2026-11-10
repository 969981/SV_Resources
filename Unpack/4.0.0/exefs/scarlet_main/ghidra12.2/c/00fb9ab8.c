/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


