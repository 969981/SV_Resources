/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bac78; name: FUN_027bac78
 */


void FUN_027bac78(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_01cfa5b0();
  FUN_01cfa5b0(param_1 + 0x20,param_2 + 0x20);
  FUN_01d01ed8(param_1 + 0x40,param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  return;
}


