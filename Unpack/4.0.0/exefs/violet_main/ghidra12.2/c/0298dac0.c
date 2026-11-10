/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0298dac0; name: FUN_0298dac0
 */


void FUN_0298dac0(long param_1,long *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0298c67c(uVar2,uVar1,param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(uVar2,0x21,uVar1,param_3);
  return;
}


