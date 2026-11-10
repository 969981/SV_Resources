/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027deab8; name: FUN_027deab8
 */


void FUN_027deab8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  FUN_01d0e1a8();
  FUN_027bbf28(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_01d0e1a8(param_1 + 0x40,param_2 + 0x40);
  uVar3 = *(undefined1 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 0x60) = *(undefined2 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x62) = uVar3;
  if (param_1 != param_2) {
    FUN_027dec94(param_1 + 0x68,*(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x70));
  }
  return;
}


