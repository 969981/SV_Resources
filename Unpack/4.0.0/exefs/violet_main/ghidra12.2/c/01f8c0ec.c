/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f8c0ec; name: FUN_01f8c0ec
 */


void FUN_01f8c0ec(undefined1 param_1 [16],long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_1._8_8_;
  uVar2 = param_1._0_8_;
  lVar1 = FUN_00d3ccd4();
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x4d8) = uVar3;
    *(undefined8 *)(lVar1 + 0x4d0) = uVar2;
  }
  lVar1 = FUN_00da75d8(param_2);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x4d8) = uVar3;
    *(undefined8 *)(lVar1 + 0x4d0) = uVar2;
  }
  *(undefined8 *)(param_2 + 0x218) = uVar3;
  *(undefined8 *)(param_2 + 0x210) = uVar2;
  *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_2 + 0x210);
  *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x218);
  return;
}


