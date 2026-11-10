/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ec750; name: FUN_026ec750
 */


void FUN_026ec750(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_60;
  long local_58;
  long local_50;
  long *local_48;
  
  plVar6 = param_1 + 3;
  lVar1 = FUN_026eca24(param_1,(param_1[1] - *param_1 >> 3) + 1);
  lVar4 = *param_1;
  lVar5 = param_1[1];
  local_50 = 0;
  lVar2 = 0;
  local_48 = plVar6;
  if ((lVar1 != 0) &&
     (lVar2 = (**(code **)(*(long *)*plVar6 + 0x10))((long *)*plVar6,lVar1 << 3,8), lVar2 == 0)) {
    (**(code **)(*(long *)*plVar6 + 0xe8))((long *)*plVar6);
  }
  lVar4 = lVar2 + (lVar5 - lVar4 >> 3) * 8;
  local_50 = lVar2 + lVar1 * 8;
  local_60 = lVar4;
  FUN_021b7250(plVar6,lVar4,param_2);
  local_58 = lVar4 + 8;
  FUN_026ec8fc(plVar6,*param_1,param_1[1],&local_60);
  lVar2 = *param_1;
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  *param_1 = local_60;
  param_1[1] = local_58;
  param_1[2] = local_50;
  local_60 = lVar2;
  local_58 = lVar4;
  local_50 = lVar5;
  while (lVar4 != lVar2) {
    local_58 = lVar4 + -8;
    plVar6 = (long *)(lVar4 + -8);
    lVar4 = local_58;
    if ((long *)*plVar6 != (long *)0x0) {
      (**(code **)(*(long *)*plVar6 + 0x20))();
    }
  }
  if (lVar2 != 0) {
    lVar5 = lVar5 - lVar2;
    plVar6 = (long *)*local_48;
    uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
    if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
      (**(code **)(*plVar6 + 0x18))(plVar6,lVar2,lVar5,8);
    }
    else {
      FUN_00c48fe8(plVar6,lVar2,lVar5,8);
    }
  }
  return;
}


