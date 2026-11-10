/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01a3a80c; name: FUN_01a3a80c
 */


void FUN_01a3a80c(double param_1,double param_2,double param_3,char *param_4)

{
  short *psVar1;
  char cVar2;
  short sVar3;
  bool bVar4;
  long lVar5;
  short sVar6;
  long *plVar7;
  long *local_38;
  
  cVar2 = *param_4;
  if (cVar2 == '\x02') {
    lVar5 = *(long *)(param_4 + 8);
    if ((lVar5 != 0) && (*(short *)(lVar5 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar5 + 0x1a);
      sVar6 = *(short *)(lVar5 + 0x1a);
      do {
        sVar3 = *psVar1;
        if (sVar3 == sVar6) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 != '\0') goto LAB_01a3a8e8;
          bVar4 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_01a3a8e8:
          bVar4 = false;
        }
        if (bVar4) {
          plVar7 = (long *)0x0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            plVar7 = (long *)(*(long *)(lVar5 + 0x10) + -0x28);
          }
          break;
        }
        plVar7 = (long *)0x0;
        sVar6 = sVar3;
      } while (sVar3 != 0);
      goto LAB_01a3a848;
    }
  }
  else if ((cVar2 == '\x01') || (cVar2 == '\0')) {
    plVar7 = *(long **)(param_4 + 8);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x58))(plVar7);
    }
    goto LAB_01a3a848;
  }
  plVar7 = (long *)0x0;
LAB_01a3a848:
  local_38 = plVar7;
  FUN_01a3a914((float)param_1,(float)param_2,(float)param_3,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x60))();
  }
  return;
}


