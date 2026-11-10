/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd41c0; name: FUN_00dd41c0
 */


void FUN_00dd41c0(long *param_1,long *param_2,undefined8 param_3,ulong param_4,long *param_5)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  
  if (param_4 != 0) {
    if (param_4 == 2) {
      if (*(int *)(param_2[-1] + 0x1e4) < *(int *)(*param_1 + 0x1e4)) {
        *param_5 = param_2[-1];
        lVar4 = *param_1;
      }
      else {
        *param_5 = *param_1;
        lVar4 = param_2[-1];
      }
      param_5[1] = lVar4;
    }
    else if (param_4 == 1) {
      *param_5 = *param_1;
    }
    else {
      if ((long)param_4 < 9) {
        FUN_0270bab0(param_1,param_2,param_5);
        return;
      }
      uVar7 = param_4 >> 1;
      plVar2 = param_1 + uVar7;
      FUN_00dd3ea0(param_1,plVar2,param_3,uVar7,param_5,uVar7);
      lVar4 = param_4 - (param_4 >> 1);
      FUN_00dd3ea0(plVar2,param_2,param_3,lVar4,param_5 + uVar7,lVar4);
      plVar5 = plVar2;
      do {
        if (plVar5 == param_2) {
          if (param_1 == plVar2) {
            return;
          }
          *param_5 = *param_1;
          if (param_1 + 1 == plVar2) {
            return;
          }
          param_5[1] = param_1[1];
          if (param_1 + 2 == plVar2) {
            return;
          }
          param_5[2] = param_1[2];
          if (param_1 + 3 == plVar2) {
            return;
          }
          param_5[3] = param_1[3];
          if (param_1 + 4 == plVar2) {
            return;
          }
          param_5[4] = param_1[4];
          if (param_1 + 5 == plVar2) {
            return;
          }
          param_5[5] = param_1[5];
          if (param_1 + 6 == plVar2) {
            return;
          }
          param_5[6] = param_1[6];
          if (param_1 + 7 == plVar2) {
            return;
          }
          lVar4 = 0x38;
          do {
            *(undefined8 *)((long)param_5 + lVar4) = *(undefined8 *)((long)param_1 + lVar4);
            lVar4 = lVar4 + 8;
          } while ((long)plVar2 - (long)param_1 != lVar4);
          return;
        }
        lVar4 = *param_1;
        if (*(int *)(*plVar5 + 0x1e4) < *(int *)(lVar4 + 0x1e4)) {
          *param_5 = *plVar5;
          plVar5 = plVar5 + 1;
        }
        else {
          param_1 = param_1 + 1;
          *param_5 = lVar4;
        }
        param_5 = param_5 + 1;
      } while (param_1 != plVar2);
      if (plVar5 != param_2) {
        uVar7 = (long)param_2 + (-8 - (long)plVar5);
        uVar1 = ((uint)(uVar7 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) != 0) {
          lVar6 = 0;
          lVar4 = -((ulong)uVar1 & 3);
          do {
            bVar3 = lVar4 != -1;
            lVar4 = lVar4 + 1;
            *(undefined8 *)((long)param_5 + lVar6) = *(undefined8 *)((long)plVar5 + lVar6);
            lVar6 = lVar6 + 8;
          } while (bVar3);
          param_5 = (long *)((long)param_5 + lVar6);
          plVar5 = (long *)((long)plVar5 + lVar6);
        }
        if (0x17 < uVar7) {
          do {
            *param_5 = *plVar5;
            param_5[1] = plVar5[1];
            param_5[2] = plVar5[2];
            plVar2 = plVar5 + 3;
            plVar5 = plVar5 + 4;
            param_5[3] = *plVar2;
            param_5 = param_5 + 4;
          } while (plVar5 != param_2);
        }
      }
    }
  }
  return;
}


