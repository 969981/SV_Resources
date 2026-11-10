/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d4b674; name: FUN_00d4b674
 */


long * FUN_00d4b674(long *param_1,undefined8 param_2,long *param_3,undefined8 param_4,long param_5)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  long *aplStack_b0 [12];
  long *local_38;
  
  param_1[1] = (long)param_3;
  param_1[2] = param_5;
  (**(code **)(*param_3 + 0x48))(&local_d0,param_3,param_2,param_4,param_1);
  param_1[4] = (long)local_c8;
  param_1[5] = (long)local_c0;
  param_1[3] = (long)local_d0;
  (**(code **)(*(long *)param_1[1] + 0x40))(&local_d0,(long *)param_1[1],param_2,param_4);
  param_1[7] = (long)local_c8;
  param_1[8] = (long)local_c0;
  param_1[6] = (long)local_d0;
  lVar3 = (**(code **)(*(long *)param_1[1] + 0x50))((long *)param_1[1],param_2,param_4);
  param_1[0x10] = lVar3;
  if (param_1[4] != 0) {
    lVar3 = param_1[5];
    lVar7 = lVar3 * param_1[4];
    if (lVar7 != 0) {
      plVar6 = (long *)param_1[3];
      lVar8 = 0;
      plVar5 = plVar6;
      do {
        iVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
        if (iVar2 == 2) goto LAB_00d4b724;
        plVar5 = (long *)((long)plVar6 + lVar8 + lVar3);
        lVar8 = lVar8 + lVar3;
      } while (lVar7 != lVar8);
    }
  }
  plVar5 = (long *)0x0;
LAB_00d4b724:
  param_1[0x11] = (long)plVar5;
  local_c0 = &LAB_02e5218c;
  local_d0 = FUN_019aa930;
  local_c8 = FUN_02e52188;
  local_b8 = &LAB_02e52198;
  aplStack_b0[0] = param_1;
  local_38 = param_1;
  uVar4 = (**(code **)(*param_1 + 0x178))(param_1);
  if ((uVar4 & 1) != 0) {
    FUN_019aa978(param_1 + 9,&local_38);
  }
  lVar3 = param_1[4];
  lVar7 = param_1[5];
  lVar8 = lVar3 * lVar7;
  if (lVar8 != 0) {
    plVar5 = (long *)param_1[3];
    (**(code **)(*plVar5 + 0x180))(plVar5,&local_d0);
    if (lVar8 != lVar7) {
      plVar6 = (long *)((long)plVar5 + lVar7);
      (**(code **)(*plVar6 + 0x180))(plVar6,&local_d0);
      if ((long *)((long)plVar5 + lVar8) != (long *)((long)plVar6 + lVar7)) {
        lVar8 = 0;
        do {
          plVar5 = (long *)((long)plVar6 + lVar7 + lVar8);
          (**(code **)(*plVar5 + 0x180))(plVar5,&local_d0);
          lVar8 = lVar8 + lVar7;
        } while (lVar7 * (lVar3 + -2) != lVar8);
      }
    }
  }
  pcVar1 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar1)(aplStack_b0);
  }
  return param_1;
}


