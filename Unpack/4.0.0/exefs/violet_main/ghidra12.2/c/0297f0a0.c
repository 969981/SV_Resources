/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297f0a0; name: FUN_0297f0a0
 */


void FUN_0297f0a0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_01246e90();
  uVar3 = FUN_02938f00(uVar2,param_3);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0297f114(uVar2,uVar1,param_3);
    return;
  }
  return;
}


