/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f85c4; name: FUN_030f85c4
 */


void FUN_030f85c4(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long local_18;
  
  if (0 < (int)*(uint *)(param_1 + 0xa8)) {
    lVar7 = 0;
    iVar8 = 1;
    do {
      if (*(long *)(*(long *)(param_1 + 0xa0) + lVar7) == param_2) {
        local_18 = param_1;
        FUN_030f8730(param_1 + 0x20,iVar8 + -1,&local_18);
        plVar4 = *(long **)(*(long *)(param_1 + 0xa0) + lVar7);
        if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
          plVar5 = plVar4 + 2;
          do {
            lVar6 = *plVar5;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar3) {
              *plVar5 = lVar6 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar6 + -1 == 0) {
            (**(code **)(*plVar4 + 0x18))();
          }
        }
        iVar1 = *(int *)(param_1 + 0xa8);
        lVar6 = (long)iVar1 + -1;
        *(int *)(param_1 + 0xa8) = (int)lVar6;
        if (iVar1 != iVar8) {
          plVar5 = (long *)(*(long *)(param_1 + 0xa0) + lVar6 * 0x60);
          plVar4 = (long *)(*(long *)(param_1 + 0xa0) + lVar7);
          *plVar4 = *plVar5;
          lVar7 = plVar5[5];
          *plVar5 = 0;
          plVar4[3] = plVar5[3];
          plVar4[5] = lVar7;
          lVar7 = plVar5[2];
          plVar4[4] = plVar5[4];
          plVar4[2] = lVar7;
          plVar4[7] = plVar5[7];
          plVar4[6] = plVar5[6];
          plVar4[9] = plVar5[9];
          plVar4[8] = plVar5[8];
          lVar7 = plVar5[10];
          *(undefined1 *)((long)plVar4 + 0x52) = *(undefined1 *)((long)plVar5 + 0x52);
          *(short *)(plVar4 + 10) = (short)lVar7;
          plVar5 = (long *)*plVar5;
          if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
            plVar4 = plVar5 + 2;
            do {
              lVar7 = *plVar4;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
              if (bVar3) {
                *plVar4 = lVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar7 + -1 == 0) {
              (**(code **)(*plVar5 + 0x18))();
            }
          }
        }
        break;
      }
      lVar7 = lVar7 + 0x60;
      iVar8 = iVar8 + 1;
    } while ((ulong)*(uint *)(param_1 + 0xa8) * 0x60 != lVar7);
  }
  *(undefined1 *)(param_1 + 0xc4) = 1;
  return;
}


