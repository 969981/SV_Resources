/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00dd3ea0; name: FUN_00dd3ea0
 */


void FUN_00dd3ea0(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5,
                 long param_6)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  
  if (1 < param_4) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x1e4) < *(int *)(*param_1 + 0x1e4)) {
        lVar5 = *param_1;
        *param_1 = param_2[-1];
        param_2[-1] = lVar5;
      }
    }
    else if ((long)param_4 < 0x81) {
      if ((param_1 != param_2) && (plVar4 = param_1 + 1, plVar4 != param_2)) {
        lVar5 = 0;
        do {
          lVar6 = *plVar4;
          if (plVar4 != param_1) {
            lVar7 = lVar5;
            do {
              if (*(int *)(*(long *)((long)param_1 + lVar7) + 0x1e4) <= *(int *)(lVar6 + 0x1e4)) {
                plVar8 = (long *)((long)param_1 + lVar7 + 8);
                goto LAB_00dd3f78;
              }
              *(long *)((long)param_1 + lVar7 + 8) = *(long *)((long)param_1 + lVar7);
              bVar3 = lVar7 != 0;
              lVar7 = lVar7 + -8;
            } while (bVar3);
          }
          plVar8 = param_1;
LAB_00dd3f78:
          plVar4 = plVar4 + 1;
          lVar5 = lVar5 + 8;
          *plVar8 = lVar6;
        } while (plVar4 != param_2);
      }
    }
    else {
      uVar9 = param_4 >> 1;
      plVar4 = param_1 + uVar9;
      if (param_6 < (long)param_4) {
        FUN_00dd3ea0(param_1,plVar4,param_3,uVar9,param_5,param_6);
        FUN_00dd3ea0(plVar4,param_2,param_3,param_4 - uVar9,param_5,param_6);
        FUN_0270b810(param_1,plVar4,param_2,param_3,uVar9,param_4 - uVar9,param_5,param_6);
        return;
      }
      FUN_00dd41c0();
      plVar8 = param_5 + uVar9;
      FUN_00dd41c0(plVar4,param_2,param_3,param_4 - uVar9,plVar8);
      plVar2 = param_5 + param_4;
      plVar4 = plVar8;
      do {
        if (plVar4 == plVar2) {
          if (param_5 == plVar8) {
            return;
          }
          *param_1 = *param_5;
          if (param_5 + 1 == plVar8) {
            return;
          }
          param_1[1] = param_5[1];
          if (param_5 + 2 == plVar8) {
            return;
          }
          param_1[2] = param_5[2];
          if (param_5 + 3 == plVar8) {
            return;
          }
          param_1[3] = param_5[3];
          if (param_5 + 4 == plVar8) {
            return;
          }
          param_1[4] = param_5[4];
          if (param_5 + 5 == plVar8) {
            return;
          }
          param_1[5] = param_5[5];
          if (param_5 + 6 == plVar8) {
            return;
          }
          param_1[6] = param_5[6];
          if (param_5 + 7 == plVar8) {
            return;
          }
          lVar5 = 0x38;
          do {
            *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_5 + lVar5);
            lVar5 = lVar5 + 8;
          } while ((long)plVar8 - (long)param_5 != lVar5);
          return;
        }
        lVar5 = *param_5;
        if (*(int *)(*plVar4 + 0x1e4) < *(int *)(lVar5 + 0x1e4)) {
          *param_1 = *plVar4;
          plVar4 = plVar4 + 1;
        }
        else {
          param_5 = param_5 + 1;
          *param_1 = lVar5;
        }
        param_1 = param_1 + 1;
      } while (param_5 != plVar8);
      if (plVar4 != plVar2) {
        uVar9 = (long)plVar2 + (-8 - (long)plVar4);
        uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar6 = 0;
          lVar5 = -((ulong)uVar1 & 3);
          do {
            bVar3 = lVar5 != -1;
            lVar5 = lVar5 + 1;
            *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)plVar4 + lVar6);
            lVar6 = lVar6 + 8;
          } while (bVar3);
          plVar4 = (long *)((long)plVar4 + lVar6);
          param_1 = (long *)((long)param_1 + lVar6);
        }
        if (0x17 < uVar9) {
          do {
            *param_1 = *plVar4;
            param_1[1] = plVar4[1];
            param_1[2] = plVar4[2];
            plVar8 = plVar4 + 3;
            plVar4 = plVar4 + 4;
            param_1[3] = *plVar8;
            param_1 = param_1 + 4;
          } while (plVar4 != plVar2);
        }
      }
    }
  }
  return;
}


