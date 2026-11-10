/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01460480; name: FUN_01460480
 */


void FUN_01460480(long param_1,long *param_2,long *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_01460524(uVar3,uVar1,uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
  FUN_0129aff0(uVar3,0x41,uVar1,uVar2);
  return;
}


