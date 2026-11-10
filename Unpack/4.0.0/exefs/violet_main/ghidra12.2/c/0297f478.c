/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f478; name: FUN_0297f478
 */


void FUN_0297f478(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = FUN_0154b6d4(*(undefined8 *)(param_1 + 0x10));
  uVar2 = FUN_01465adc(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_0291b234(*(undefined8 *)(param_1 + 0x10));
  uVar4 = (**(code **)(*param_2 + 0x98))(param_2);
  uVar4 = FUN_01689a40(param_1,uVar4);
  uVar5 = FUN_0154b6c8(*(undefined8 *)(param_1 + 8));
  FUN_010a5f84(uVar1,uVar2,uVar3,uVar5,uVar4);
  return;
}


