/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0193f12c; name: FUN_0193f12c
 */


void FUN_0193f12c(long param_1,long *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0193f194(*(undefined8 *)(param_1 + 0x20),uVar1,param_3,param_4);
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x7d,param_3 & 0xff,uVar1,*param_4,param_4[1]);
  return;
}


