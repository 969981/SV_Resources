/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01243a30; name: FUN_01243a30
 */


void FUN_01243a30(long param_1,long *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_01243ab8(uVar2,uVar1,param_3,param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
  FUN_0129aff0(uVar2,0x35,uVar1,param_3 & 0xff,param_4 & 0xff);
  return;
}


