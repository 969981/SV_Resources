/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01680450; name: FUN_01680450
 */


void FUN_01680450(long param_1,undefined4 param_2,long *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  uVar1 = FUN_011e2da8(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x290),uVar2);
  FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,param_2,0x2d5,uVar2,uVar1,0xffff0000);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0xb3,uVar2,0);
  return;
}


