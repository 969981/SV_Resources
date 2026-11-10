/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00cf7698; name: FUN_00cf7698
 */


void FUN_00cf7698(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  FUN_00cf7854(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x40);
  FUN_00cf76e4(param_1 + 0xa0,param_2 + 0x48);
  uVar2 = *(undefined1 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0xe8) = uVar1;
  *(undefined1 *)(param_1 + 0xf0) = uVar2;
  return;
}


