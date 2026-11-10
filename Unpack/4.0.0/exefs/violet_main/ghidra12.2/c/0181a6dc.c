/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0181a6dc; name: FUN_0181a6dc
 */


void FUN_0181a6dc(undefined8 param_1,long *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0181a7ec(0x32);
  if (param_3 == 7) {
    uVar3 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0181a804(uVar3,uVar2,2,uVar1);
    uVar3 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar4 = 4;
  }
  else {
    if (param_3 != 6) {
      return;
    }
    uVar3 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0181a804(uVar3,uVar2,1,uVar1);
    uVar3 = FUN_01243584(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar4 = 3;
  }
  FUN_0181a804(uVar3,uVar2,uVar4,uVar1);
  return;
}


