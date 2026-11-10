/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 029533b8; name: FUN_029533b8
 */


void FUN_029533b8(undefined8 param_1,uint param_2,long *param_3,undefined1 (*param_4) [16],
                 undefined8 param_5,long *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_2 & 0xffff;
  if (uVar1 < 6) {
    uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
    auVar5 = FUN_01580a6c(uVar4,param_2,uVar4 & 0xffffffff,param_5,param_6);
    *param_4 = auVar5;
  }
  else {
    *(undefined8 *)(*param_4 + 8) = 0;
    if (uVar1 == 6) {
      uVar2 = (**(code **)(*param_6 + 0x68))(param_6,&DAT_03d69cc8);
      uVar3 = (**(code **)(*param_6 + 0x68))(param_6,&DAT_03d69cd0);
      uVar1 = FUN_0189405c(param_5,uVar2,uVar3);
      uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar1 = (uVar1 & 0x3f) << 3 | 2;
    }
    else {
      if (uVar1 != 7) {
        uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
        *(ulong *)*param_4 = uVar4 & 0xffffffff;
        *(undefined8 *)(*param_4 + 8) = 1;
        return;
      }
      uVar4 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
      uVar1 = (uVar1 & 0x3f) << 3 | 3;
    }
    *(ulong *)*param_4 = uVar4 & 0xffffffff;
    *(ulong *)(*param_4 + 8) = (ulong)uVar1;
  }
  return;
}


