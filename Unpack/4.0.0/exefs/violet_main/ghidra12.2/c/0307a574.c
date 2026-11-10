/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0307a574; name: FUN_0307a574
 */


void FUN_0307a574(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *local_38;
  int local_30 [2];
  int local_28 [2];
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    uVar4 = 0;
    plVar6 = (long *)(*(long *)(param_1 + 0x38) + 0x10);
    do {
      if ((*(int *)((long)plVar6 + 0xc) == (int)param_3[3]) && (*plVar6 != 0)) goto LAB_0307a5d0;
      uVar4 = uVar4 + 1;
      plVar6 = plVar6 + 0x20;
    } while (uVar1 != uVar4);
  }
  uVar4 = 0xffffffff;
LAB_0307a5d0:
  local_28[0] = (int)uVar4;
  if (0 < (int)uVar1) {
    lVar5 = *(long *)(param_1 + 0x38);
    uVar4 = 0;
    plVar6 = (long *)(lVar5 + 0x10);
    do {
      if ((*(int *)((long)plVar6 + 0xc) == *(int *)((long)param_3 + 0x1c)) && (*plVar6 != 0)) {
        local_30[0] = (int)uVar4;
        if (local_28[0] == -1) {
          return;
        }
        if (local_30[0] == -1) {
          return;
        }
        if ((local_28[0] != *param_2) && (*param_2 != local_30[0])) {
          return;
        }
        if ((param_3 != (long *)0x0) && (param_3[1] != 0)) {
          plVar6 = param_3 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_38 = param_3;
        FUN_0307ba90(lVar5 + (long)local_28[0] * 0x100 + 0xd0,local_30,&local_38);
        if ((local_38 != (long *)0x0) && (local_38[1] != 0)) {
          plVar6 = local_38 + 2;
          do {
            lVar5 = *plVar6;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 + -1 == 0) {
            (**(code **)(*local_38 + 0x18))();
          }
        }
        lVar5 = *(long *)(param_1 + 0x38);
        if ((param_3 != (long *)0x0) && (param_3[1] != 0)) {
          plVar6 = param_3 + 2;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar3) {
              *plVar6 = *plVar6 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_38 = param_3;
        FUN_0307ba90(lVar5 + (long)local_30[0] * 0x100 + 0xd0,local_28,&local_38);
        if (local_38 == (long *)0x0) {
          return;
        }
        if (local_38[1] == 0) {
          return;
        }
        plVar6 = local_38 + 2;
        do {
          lVar5 = *plVar6;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *plVar6 = lVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar5 + -1 == 0) {
          (**(code **)(*local_38 + 0x18))();
          return;
        }
        return;
      }
      uVar4 = uVar4 + 1;
      plVar6 = plVar6 + 0x20;
    } while (uVar1 != uVar4);
  }
  return;
}


