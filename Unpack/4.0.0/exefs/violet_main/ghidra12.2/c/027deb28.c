/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027deb28; name: FUN_027deb28
 */


void FUN_027deb28(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  
  FUN_01cfa5b0();
  FUN_01d01ed8(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  FUN_01cfa5b0(param_1 + 0x40,param_2 + 0x40);
  uVar3 = *(undefined2 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x62) = *(undefined1 *)(param_2 + 0x62);
  *(undefined2 *)(param_1 + 0x60) = uVar3;
  FUN_027defbc(param_1 + 0x68,param_2 + 0x68);
  return;
}


