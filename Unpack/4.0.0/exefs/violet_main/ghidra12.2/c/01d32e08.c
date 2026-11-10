/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01d32e08; name: FUN_01d32e08
 */


void FUN_01d32e08(long param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_0113b8a0(*(undefined8 *)(param_1 + 0x70));
  if (uVar1 < 0x137) {
    return;
  }
  uVar2 = FUN_00cf44f4(*(undefined8 *)(param_1 + 0x70));
  uVar3 = FUN_00cf41a8(*(undefined8 *)(param_1 + 0x70));
  uVar4 = FUN_00e99784(param_1);
  FUN_0143b78c(uVar2,uVar3,uVar4);
  return;
}


