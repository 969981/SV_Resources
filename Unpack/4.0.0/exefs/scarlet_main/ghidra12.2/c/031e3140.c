/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 031e3140; name: FUN_031e3140
 */


void FUN_031e3140(long *param_1,long *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  long *plVar9;
  ulong uVar10;
  long local_50;
  long lStack_48;
  undefined8 local_40;
  ulong local_38;
  
  pbVar7 = (byte *)param_2[1];
  if (pbVar7 != (byte *)0x0) {
    pbVar8 = pbVar7;
    if ((*pbVar7 & 1) == 0) {
      do {
        pbVar8 = *(byte **)(pbVar8 + 8);
      } while ((*pbVar8 & 1) == 0);
    }
    if ((*(ulong *)(pbVar8 + 0x10) & 0x1f) == 8) {
      lVar6 = *param_2;
      uVar10 = param_2[2];
      if ((uVar10 & 1) != 0) {
        piVar1 = (int *)((uVar10 & 0xfffffffffffffffe) + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar10 = param_2[2];
      }
      if (lVar6 != 0) {
        local_40 = 0;
        local_38 = 0;
        plVar9 = (long *)(uVar10 & 0xfffffffffffffffe);
        local_50 = 0;
        lStack_48 = 0;
        (**(code **)(*plVar9 + 0x50))(plVar9,lVar6,pbVar7,&local_50);
        if ((param_3 < 0) || ((int)local_40 <= param_3)) {
          param_1[1] = 0;
          param_1[2] = 0;
          *param_1 = 0;
        }
        else {
          *param_1 = local_50 + (long)local_40._4_4_ * (long)param_3;
          param_1[1] = lStack_48;
          param_1[2] = local_38;
          if ((local_38 & 1) != 0) {
            piVar1 = (int *)((local_38 & 0xfffffffffffffffe) + 8);
            do {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
        }
        if ((local_38 & 1) != 0) {
          plVar4 = (long *)(local_38 & 0xfffffffffffffffe);
          plVar5 = plVar4 + 1;
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *(int *)plVar5 = (int)lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((plVar4 != (long *)0x0) && ((int)lVar6 == 1)) {
            (**(code **)(*plVar4 + 8))();
          }
        }
        if ((uVar10 & 1) == 0) {
          return;
        }
        plVar5 = plVar9 + 1;
        do {
          lVar6 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *(int *)plVar5 = (int)lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (plVar9 == (long *)0x0) {
          return;
        }
        if ((int)lVar6 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
          return;
        }
        return;
      }
      if ((uVar10 & 1) != 0) {
        plVar5 = (long *)(uVar10 & 0xfffffffffffffffe);
        plVar9 = plVar5 + 1;
        do {
          lVar6 = *plVar9;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *(int *)plVar9 = (int)lVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar6 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


