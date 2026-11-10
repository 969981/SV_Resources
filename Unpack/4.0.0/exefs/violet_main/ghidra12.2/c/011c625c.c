/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011c625c; name: FUN_011c625c
 */


void FUN_011c625c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long *param_5)

{
  short *psVar1;
  short sVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  char local_70 [8];
  undefined1 auStack_68 [24];
  long *local_50;
  long *local_48;
  
  plVar6 = *(long **)(param_1 + 0x178);
  plVar3 = *(long **)(param_1 + 0x180);
  if (plVar6 != plVar3) {
    while (*(undefined1 **)(*plVar6 + 0x1d0) != &DAT_afc4d6c05abef19e) {
      plVar6 = plVar6 + 1;
      if (plVar3 == plVar6) {
        return;
      }
    }
  }
  if (plVar6 == plVar3) {
    return;
  }
  if (*plVar6 == 0) {
    return;
  }
  FUN_011c6558(&local_48,*plVar6,local_70);
  if (local_48 == (long *)0x0) {
    return;
  }
  FUN_011c6408(local_70,local_48,param_2,param_3);
  if (local_70[0] != '\0') {
    plVar6 = *(long **)(param_1 + 0x178);
    plVar3 = *(long **)(param_1 + 0x180);
    if (plVar6 == plVar3) {
LAB_011c6314:
      if ((((plVar6 != plVar3) && (*plVar6 != 0)) &&
          (plVar6 = *(long **)(*plVar6 + 0x38), plVar6 != (long *)0x0)) &&
         ((**(code **)(*plVar6 + 0x50))(plVar6,auStack_68,param_4), local_70[0] == '\0'))
      goto LAB_011c6354;
    }
    else {
      do {
        if (*(long *)(*plVar6 + 0x1d0) == *param_5) goto LAB_011c6314;
        plVar6 = plVar6 + 1;
      } while (plVar3 != plVar6);
    }
    if (local_50 != (long *)0x0) {
      (**(code **)(*local_50 + 0x20))();
    }
    local_70[0] = '\0';
  }
LAB_011c6354:
  if (local_48 != (long *)0x0) {
    lVar7 = local_48[6];
    psVar1 = (short *)(lVar7 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar5) {
        *psVar1 = sVar2 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*local_48 + 0x50))();
    }
    else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  return;
}


