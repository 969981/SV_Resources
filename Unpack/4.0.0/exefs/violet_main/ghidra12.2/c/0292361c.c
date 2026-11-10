/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0292361c; name: FUN_0292361c
 */


void FUN_0292361c(int *param_1,uint *param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  uint uVar7;
  
  *param_1 = 0;
  *param_2 = 0;
  uVar4 = FUN_00f7e27c(param_3);
  uVar5 = FUN_00f7d7d8(uVar4,param_4);
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_00f7e27c(param_3);
    uVar5 = FUN_00f7e28c(uVar4,0);
    uVar7 = 0;
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_00f7e27c(param_3);
      uVar2 = FUN_00f7e3e0(uVar4,0);
      uVar7 = 0;
      if ((uVar2 & 0xff) == (param_4 & 0xff)) {
        uVar4 = FUN_00f7e284(param_3);
        uVar4 = FUN_00f7e3c8(uVar4,0);
        bVar1 = FUN_00f7e274();
        uVar7 = 0;
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            plVar6 = (long *)FUN_0124e4c0(uVar4,uVar2);
            uVar3 = (**(code **)(*plVar6 + 0x110))();
            uVar7 = uVar7 + (uVar3 & 0xffff);
            uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + (uVar3 & 0xffff);
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_00f7e27c(param_3);
    uVar5 = FUN_00f7e28c(uVar4,1);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_00f7e27c(param_3);
      uVar2 = FUN_00f7e3e0(uVar4,1);
      if ((uVar2 & 0xff) == (param_4 & 0xff)) {
        uVar4 = FUN_00f7e284(param_3);
        uVar4 = FUN_00f7e3c8(uVar4,1);
        bVar1 = FUN_00f7e274();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            plVar6 = (long *)FUN_0124e4c0(uVar4,uVar2);
            uVar3 = (**(code **)(*plVar6 + 0x110))();
            uVar7 = uVar7 + (uVar3 & 0xffff);
            uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + (uVar3 & 0xffff);
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_00f7e27c(param_3);
    uVar5 = FUN_00f7e28c(uVar4,2);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_00f7e27c(param_3);
      uVar2 = FUN_00f7e3e0(uVar4,2);
      if ((uVar2 & 0xff) == (param_4 & 0xff)) {
        uVar4 = FUN_00f7e284(param_3);
        uVar4 = FUN_00f7e3c8(uVar4,2);
        bVar1 = FUN_00f7e274();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            plVar6 = (long *)FUN_0124e4c0(uVar4,uVar2);
            uVar3 = (**(code **)(*plVar6 + 0x110))();
            uVar7 = uVar7 + (uVar3 & 0xffff);
            uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + (uVar3 & 0xffff);
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_00f7e27c(param_3);
    uVar5 = FUN_00f7e28c(uVar4,3);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_00f7e27c(param_3);
      uVar2 = FUN_00f7e3e0(uVar4,3);
      if ((uVar2 & 0xff) == (param_4 & 0xff)) {
        uVar4 = FUN_00f7e284(param_3);
        uVar4 = FUN_00f7e3c8(uVar4,3);
        bVar1 = FUN_00f7e274();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            plVar6 = (long *)FUN_0124e4c0(uVar4,uVar2);
            uVar3 = (**(code **)(*plVar6 + 0x110))();
            uVar7 = uVar7 + (uVar3 & 0xffff);
            uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + (uVar3 & 0xffff);
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar4 = FUN_00f7e27c(param_3);
    uVar5 = FUN_00f7e28c(uVar4,4);
    if ((uVar5 & 1) != 0) {
      uVar4 = FUN_00f7e27c(param_3);
      uVar2 = FUN_00f7e3e0(uVar4,4);
      if ((uVar2 & 0xff) == (param_4 & 0xff)) {
        uVar4 = FUN_00f7e284(param_3);
        uVar4 = FUN_00f7e3c8(uVar4,4);
        bVar1 = FUN_00f7e274();
        if (bVar1 != 0) {
          uVar2 = 0;
          do {
            plVar6 = (long *)FUN_0124e4c0(uVar4,uVar2);
            uVar3 = (**(code **)(*plVar6 + 0x110))();
            uVar7 = uVar7 + (uVar3 & 0xffff);
            uVar3 = (**(code **)(*plVar6 + 0x108))(plVar6);
            uVar2 = uVar2 + 1;
            *param_1 = *param_1 + (uVar3 & 0xffff);
          } while (bVar1 != uVar2);
        }
      }
    }
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = (uint)(*param_1 * 100) / uVar7;
    }
    *param_2 = uVar2;
  }
  return;
}


