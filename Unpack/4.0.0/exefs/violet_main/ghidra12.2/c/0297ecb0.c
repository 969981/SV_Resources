/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297ecb0; name: FUN_0297ecb0
 */


void FUN_0297ecb0(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,
                 undefined8 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_38 [8];
  
  if (param_6 == 2) {
    FUN_01461214(param_1);
    uVar3 = FUN_014808b4();
    FUN_014808bc(uVar3,auStack_38,auStack_38 + 8);
    return;
  }
  if (param_6 == 1) {
    uVar3 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
    FUN_0167eba0(uVar3,uVar1,0x48,uVar2);
  }
  else {
    if (param_6 != 0) {
      return;
    }
    uVar3 = FUN_01243584(param_1);
    uVar1 = (**(code **)(*param_2 + 0x98))(param_2);
    FUN_0167a95c(uVar3,uVar1);
  }
  lVar4 = FUN_0149b698(param_1);
  *(undefined1 *)(lVar4 + 0xc0) = 1;
  return;
}


