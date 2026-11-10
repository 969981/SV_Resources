/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0353b230; name: FUN_0353b230
 */


void FUN_0353b230(undefined4 param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long *plVar6;
  
  plVar6 = (long *)(param_2 + 0x1860);
  do {
    plVar5 = (long *)*plVar6;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
    if (bVar4) {
      *plVar6 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (plVar5 != (long *)0x0) {
    if (param_3 == (long *)0x0) {
      do {
        plVar6 = (long *)*plVar5;
        if (*(uint *)((long)plVar5 + 0xc) < 0x7e) {
          *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + -1;
          lVar1 = param_2 + (ulong)*(uint *)((long)plVar5 + 0xc) * 8;
          if (*(long **)(lVar1 + 0x7a80) == plVar5) {
            *(long *)(lVar1 + 0x7a80) = plVar5[9];
          }
          else {
LAB_0353b388:
            lVar1 = plVar5[9];
            lVar2 = plVar5[10];
            *(long *)(lVar2 + 0x48) = lVar1;
            if (lVar1 != 0) {
              *(long *)(lVar1 + 0x50) = lVar2;
            }
          }
LAB_0353b3a8:
          FUN_0353b410(param_1,param_2);
        }
        else {
          if (*(uint *)((long)plVar5 + 0xc) != 0xffffffff) {
            *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + -1;
            if (*(long **)(param_2 + 0x7e70) != plVar5) goto LAB_0353b388;
            *(long *)(param_2 + 0x7e70) = plVar5[9];
            goto LAB_0353b3a8;
          }
          FUN_0353b560(param_1,plVar5);
        }
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
    else {
      do {
        plVar6 = (long *)*plVar5;
        if (*(uint *)((long)plVar5 + 0xc) < 0x7e) {
          *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + -1;
          lVar1 = param_2 + (ulong)*(uint *)((long)plVar5 + 0xc) * 8;
          if (*(long **)(lVar1 + 0x7a80) == plVar5) {
            *(long *)(lVar1 + 0x7a80) = plVar5[9];
          }
          else {
            lVar1 = plVar5[9];
            lVar2 = plVar5[10];
            *(long *)(lVar2 + 0x48) = lVar1;
            if (lVar1 != 0) {
              *(long *)(lVar1 + 0x50) = lVar2;
            }
          }
LAB_0353b2c8:
          if (*param_3 == 0) {
            *param_3 = (long)plVar5;
          }
          else {
LAB_0353b2d0:
            FUN_0353b410(param_1,param_2);
          }
        }
        else {
          if (*(uint *)((long)plVar5 + 0xc) != 0xffffffff) {
            *(long *)(param_2 + 0x1868) = *(long *)(param_2 + 0x1868) + -1;
            if (*(long **)(param_2 + 0x7e70) == plVar5) {
              *(long *)(param_2 + 0x7e70) = plVar5[9];
            }
            else {
              lVar1 = plVar5[9];
              lVar2 = plVar5[10];
              *(long *)(lVar2 + 0x48) = lVar1;
              if (lVar1 != 0) {
                *(long *)(lVar1 + 0x50) = lVar2;
              }
            }
            if (*(int *)((long)plVar5 + 0x2c) == 1) goto LAB_0353b2c8;
            goto LAB_0353b2d0;
          }
          FUN_0353b560(param_1,plVar5);
        }
        plVar5 = plVar6;
      } while (plVar6 != (long *)0x0);
    }
  }
  return;
}


