/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297fd64; name: FUN_0297fd64
 */


void FUN_0297fd64(long param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_50 [16];
  
  local_50 = (**(code **)(*param_2 + 0x240))(param_2,6);
  uVar1 = FUN_02978880(local_50);
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x91,uVar2);
  FUN_0124fcd8(param_1,param_2,-param_3,2,uVar1,1);
  FUN_0167ebc0(*(undefined8 *)(param_1 + 0x18),0xca,uVar2,0x240,uVar2,0xffff0000);
  return;
}


