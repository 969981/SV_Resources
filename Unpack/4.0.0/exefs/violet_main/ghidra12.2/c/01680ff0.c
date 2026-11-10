/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01680ff0; name: FUN_01680ff0
 */


void FUN_01680ff0(undefined8 param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = (**(code **)(*param_2 + 0x308))(param_2);
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_01681080(uVar3,uVar1,1);
  }
  if (param_3 == 0) {
    return;
  }
  uVar3 = FUN_01243584(param_1);
  FUN_01681080(uVar3,param_3,1);
  return;
}


