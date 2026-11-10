/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0124fcd8; name: FUN_0124fcd8
 */


void FUN_0124fcd8(long param_1,long *param_2,uint param_3,uint param_4,undefined4 param_5,
                 ulong param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
  if ((int)param_3 < 1) {
    if ((int)param_3 < 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_014fced4(uVar4,uVar3,-param_3,param_4,param_5);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      FUN_0129aff0(uVar4,1,uVar3,param_5,-param_3 & 0xffff,param_4 & 0xff);
    }
  }
  else {
    (**(code **)(*param_2 + 0x2e8))(param_2,param_3);
    FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),3,uVar2,param_3 & 0xffff);
  }
  if (((param_6 & 1) == 0) ||
     (cVar1 = FUN_01481420(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0xf0),uVar2), cVar1 == '\n'))
  {
    return;
  }
  FUN_0129aff0(*(undefined8 *)(param_1 + 0x18),0x9a,uVar2,param_3);
  return;
}


