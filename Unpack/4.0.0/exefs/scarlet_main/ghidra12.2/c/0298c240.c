/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c240; name: FUN_0298c240
 */


void FUN_0298c240(undefined8 param_1,long *param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 local_60 [16];
  
  uVar1 = (uint)param_4 & 0xff;
  if ((uVar1 < 0x24) && ((1L << (param_4 & 0x3f) & 0x804020002U) != 0)) {
    lVar3 = FUN_0149b698(param_1);
    lVar4 = FUN_0149b698(param_1);
    uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
    *(undefined4 *)(lVar3 + 8) = uVar2;
    *(short *)(lVar3 + 6) = (short)param_3;
    *(undefined2 *)(lVar3 + 0xc) = 0x10a;
    uVar5 = FUN_01678f00(param_1);
    FUN_0292410c(uVar5,lVar3,lVar4 + 0x10);
  }
  uVar5 = FUN_01243584(param_1);
  FUN_01582e80(uVar5,param_2,param_3,param_4 & 0xffffffff);
  if (uVar1 < 4) {
    if (uVar1 == 2) {
      uVar5 = FUN_01243584(param_1);
      uVar7 = 0x2a;
    }
    else {
      if (uVar1 != 3) {
        return;
      }
      uVar5 = FUN_01243584(param_1);
      uVar7 = 0x2e;
    }
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 0x17) {
        FUN_01582534(param_1);
        uVar5 = FUN_012440e8();
        uVar7 = FUN_0124acbc(param_1);
        FUN_01582534(param_1);
        uVar6 = FUN_015d96d8();
        uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
        local_60 = FUN_01580a6c(uVar6,2,uVar2,uVar5,uVar7);
        uVar5 = FUN_01243584(param_1);
        uVar2 = (**(code **)(*param_2 + 0x98))(param_2);
        FUN_01681080(uVar5,uVar2,0);
        uVar5 = FUN_01243584(param_1);
        FUN_0298c444(uVar5,param_2,2,local_60);
        uVar5 = FUN_01243584(param_1);
        FUN_0124ade8(uVar5,param_2,0x2a);
      }
      return;
    }
    uVar5 = FUN_01243584(param_1);
    uVar7 = 0x2d;
  }
  FUN_0124ade8(uVar5,param_2,uVar7);
  return;
}


