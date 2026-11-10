/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0299f214; name: FUN_0299f214
 */


void FUN_0299f214(long param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (param_2 != (long *)0x0) {
    do {
      plVar7 = (long *)*param_2;
      lVar6 = param_2[0xd];
      if (lVar6 != 0) {
        lVar5 = param_2[0xe];
        if (param_2[0xe] == lVar6) {
          lVar5 = lVar6;
        }
        else {
          do {
            pcVar2 = *(code **)(lVar5 + -0x88);
            lVar4 = lVar5 + -0x90;
            if (pcVar2 != (code *)0x0) {
              *(undefined8 *)(lVar5 + -0x80) = 0;
              *(undefined8 *)(lVar5 + -0x78) = 0;
              *(undefined8 *)(lVar5 + -0x90) = 0;
              *(undefined8 *)(lVar5 + -0x88) = 0;
              (*pcVar2)(lVar5 + -0x70);
            }
            lVar5 = lVar4;
          } while (lVar6 != lVar4);
          lVar5 = param_2[0xd];
        }
        lVar4 = param_2[0xf];
        plVar3 = (long *)param_2[0x10];
        param_2[0xe] = lVar6;
        uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar1 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4 - lVar5,0x10);
        }
        else {
          FUN_00c48fe8(plVar3,lVar5,lVar4 - lVar5,0x10);
        }
      }
      lVar6 = param_2[6];
      if (lVar6 != 0) {
        lVar5 = param_2[7];
        if (param_2[7] == lVar6) {
          lVar5 = lVar6;
        }
        else {
          do {
            pcVar2 = *(code **)(lVar5 + -0x88);
            lVar4 = lVar5 + -0x90;
            if (pcVar2 != (code *)0x0) {
              *(undefined8 *)(lVar5 + -0x80) = 0;
              *(undefined8 *)(lVar5 + -0x78) = 0;
              *(undefined8 *)(lVar5 + -0x90) = 0;
              *(undefined8 *)(lVar5 + -0x88) = 0;
              (*pcVar2)(lVar5 + -0x70);
            }
            lVar5 = lVar4;
          } while (lVar6 != lVar4);
          lVar5 = param_2[6];
        }
        lVar4 = param_2[8];
        plVar3 = (long *)param_2[9];
        param_2[7] = lVar6;
        uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if (((uVar1 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
          (**(code **)(*plVar3 + 0x18))(plVar3,lVar5,lVar4 - lVar5,0x10);
        }
        else {
          FUN_00c48fe8(plVar3,lVar5,lVar4 - lVar5,0x10);
        }
      }
      if ((long *)param_2[3] != (long *)0x0) {
        (**(code **)(*(long *)param_2[3] + 0x20))();
      }
      plVar3 = *(long **)(param_1 + 0x38);
      uVar1 = (**(code **)(*plVar3 + 0xf8))(plVar3);
      if (((uVar1 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
        (**(code **)(*plVar3 + 0x18))(plVar3,param_2,0xa0,8);
      }
      else {
        FUN_00c48fe8(plVar3,param_2,0xa0,8);
      }
      param_2 = plVar7;
    } while (plVar7 != (long *)0x0);
  }
  return;
}


