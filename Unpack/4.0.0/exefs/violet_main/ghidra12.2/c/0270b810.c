/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0270b810; name: FUN_0270b810
 */


void FUN_0270b810(long *param_1,long *param_2,long *param_3,undefined8 param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (param_6 != 0) {
    do {
      if ((param_5 <= param_8) || (param_6 <= param_8)) {
        FUN_0270bb60(param_1,param_2,param_3,param_4,param_5,param_6);
        return;
      }
      if (param_5 == 0) {
        return;
      }
      lVar6 = -param_5;
      while (*(int *)(*param_1 + 0x1e4) <= *(int *)(*param_2 + 0x1e4)) {
        param_1 = param_1 + 1;
        bVar1 = lVar6 == -1;
        lVar6 = lVar6 + 1;
        if (bVar1) {
          return;
        }
      }
      param_5 = -lVar6;
      if (param_5 < param_6) {
        lVar7 = param_6;
        if (param_6 < 0) {
          lVar7 = param_6 + 1;
        }
        lVar7 = lVar7 >> 1;
        plVar8 = param_2 + lVar7;
        plVar9 = param_1;
        if ((long)param_2 - (long)param_1 != 0) {
          uVar3 = (long)param_2 - (long)param_1 >> 3;
          do {
            uVar4 = uVar3 >> 1;
            uVar5 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
            uVar3 = uVar4;
            if (*(int *)(plVar9[uVar4] + 0x1e4) <= *(int *)(*plVar8 + 0x1e4)) {
              plVar9 = plVar9 + uVar4 + 1;
              uVar3 = uVar5;
            }
          } while (uVar3 != 0);
        }
        param_5 = (long)plVar9 - (long)param_1 >> 3;
      }
      else {
        if (lVar6 == -1) {
          lVar6 = *param_1;
          *param_1 = *param_2;
          *param_2 = lVar6;
          return;
        }
        if (param_5 < 0) {
          param_5 = param_5 + 1;
        }
        param_5 = param_5 >> 1;
        plVar9 = param_1 + param_5;
        if ((long)param_3 - (long)param_2 == 0) {
          plVar8 = param_2;
        }
        else {
          uVar3 = (long)param_3 - (long)param_2 >> 3;
          plVar2 = param_2;
          do {
            uVar5 = uVar3 >> 1;
            plVar8 = plVar2 + uVar5 + 1;
            uVar3 = uVar3 + (uVar3 >> 1 ^ 0xffffffffffffffff);
            if (*(int *)(*plVar9 + 0x1e4) <= *(int *)(plVar2[uVar5] + 0x1e4)) {
              plVar8 = plVar2;
              uVar3 = uVar5;
            }
            plVar2 = plVar8;
          } while (uVar3 != 0);
        }
        lVar7 = (long)plVar8 - (long)param_2 >> 3;
      }
      if (plVar9 == param_2) {
        plVar2 = plVar8;
      }
      else if (param_2 == plVar8) {
        plVar2 = plVar9;
      }
      else {
        plVar2 = (long *)FUN_0270bc60(plVar9,param_2,plVar8);
      }
      if (param_5 + lVar7 < (param_6 - (param_5 + lVar7)) - lVar6) {
        FUN_0270b810(param_1,plVar9,plVar2,param_4,param_5,lVar7,param_7,param_8);
        param_1 = plVar2;
        param_2 = plVar8;
        param_6 = param_6 - lVar7;
        param_5 = -(param_5 + lVar6);
      }
      else {
        FUN_0270b810(plVar2,plVar8,param_3,param_4,-(param_5 + lVar6),param_6 - lVar7,param_7,
                     param_8);
        param_3 = plVar2;
        param_2 = plVar9;
        param_6 = lVar7;
      }
    } while (param_6 != 0);
  }
  return;
}


