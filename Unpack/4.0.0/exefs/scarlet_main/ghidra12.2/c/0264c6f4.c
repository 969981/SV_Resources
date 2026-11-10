/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0264c6f4; name: FUN_0264c6f4
 */


void FUN_0264c6f4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  plVar7 = param_1 + 3;
  lVar1 = FUN_0264afa0(param_1,(param_1[1] - *param_1 >> 6) + 1);
  lVar5 = *param_1;
  lVar6 = param_1[1];
  local_50 = 0;
  lVar2 = 0;
  local_48 = plVar7;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar7 + 0x10))((long *)*plVar7,lVar1 << 6,0x10), lVar2 == 0))
  {
    (**(code **)(*(long *)*plVar7 + 0xe8))((long *)*plVar7);
  }
  lVar5 = lVar2 + (lVar6 - lVar5 >> 6) * 0x40;
  local_50 = lVar2 + lVar1 * 0x40;
  local_60 = lVar5;
  FUN_0264c5e8(plVar7,lVar5,param_2);
  local_58 = lVar5 + 0x40;
  FUN_0264afe4(plVar7,*param_1,param_1[1],&local_60);
  lVar2 = *param_1;
  lVar5 = param_1[1];
  lVar6 = param_1[2];
  *param_1 = local_60;
  param_1[1] = local_58;
  param_1[2] = local_50;
  local_60 = lVar2;
  local_58 = lVar5;
  local_50 = lVar6;
  while (lVar1 = lVar5, lVar1 != lVar2) {
    lVar5 = lVar1 + -0x40;
    pcVar4 = *(code **)(lVar1 + -0x38);
    local_58 = lVar5;
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(lVar1 + -0x30) = 0;
      *(undefined8 *)(lVar1 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x40) = 0;
      *(undefined8 *)(lVar1 + -0x38) = 0;
      (*pcVar4)(lVar1 + -0x20);
    }
  }
  if (lVar2 != 0) {
    lVar6 = lVar6 - lVar2;
    plVar7 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
      (**(code **)(*plVar7 + 0x18))(plVar7,lVar2,lVar6,0x10);
    }
    else {
      FUN_00c48fe8(plVar7,lVar2,lVar6,0x10);
    }
  }
  return;
}


