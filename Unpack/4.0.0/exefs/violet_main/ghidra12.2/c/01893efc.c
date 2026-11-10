/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01893efc; name: FUN_01893efc
 */


void FUN_01893efc(undefined8 param_1,uint param_2,long *param_3,undefined1 (*param_4) [16],
                 undefined8 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar1 = param_2 & 0xf;
  if (uVar1 == 2) {
    uVar1 = FUN_0189405c(param_5,(param_2 & 0xffff) >> 4 & 0x3f,param_2 >> 10 & 0x3f);
    uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
    auVar7._8_4_ = (uVar1 & 0x3f) << 3 | 2;
    auVar7._0_8_ = uVar5 & 0xffffffff;
    auVar7._12_4_ = 0;
  }
  else if (uVar1 == 1) {
    uVar6 = (**(code **)(*param_3 + 0x98))(param_3);
    auVar7 = FUN_01894040(uVar6,param_2 >> 10 & 0x3f,(param_2 & 0xffff) >> 4 & 0x3f);
  }
  else if (uVar1 == 4) {
    uVar2 = (**(code **)(*param_3 + 0x98))(param_3);
    uVar3 = (**(code **)(*param_3 + 0x98))(param_3);
    uVar4 = FUN_0189405c(param_5,(param_2 & 0xffff) >> 4 & 0x3f,param_2 >> 10 & 0x3f);
    auVar7 = FUN_01894970(uVar2,uVar3,uVar4);
  }
  else if (uVar1 == 3) {
    uVar5 = (**(code **)(*param_3 + 0x98))(param_3);
    uVar1 = (**(code **)(*param_3 + 0x98))(param_3);
    auVar7._8_4_ = (uVar1 & 0x3f) << 3 | 3;
    auVar7._0_8_ = uVar5 & 0xffffffff;
    auVar7._12_4_ = 0;
  }
  else {
    auVar7 = FUN_01894120();
  }
  *param_4 = auVar7;
  return;
}


