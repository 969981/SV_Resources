/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01092f78; name: FUN_01092f78
 */


void FUN_01092f78(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  do {
    lVar5 = FUN_010932d4(param_1 + 0x28);
    if (((lVar5 != 0) && (*(long *)(lVar5 + 0x40) == param_2[1])) && (*(long *)*param_2 == 0)) {
      *(long *)*param_2 = lVar5;
    }
    plVar7 = *(long **)(param_1 + 0x78);
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
      if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01093264;
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        *(undefined8 *)(lVar5 + 8) = uVar6;
        *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_01093284;
      lVar5 = plVar7[6];
      psVar1 = (short *)(lVar5 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar5 + 0x10) = 0;
        (**(code **)(*plVar7 + 0x50))(plVar7);
      }
      else if (sVar2 == 0) goto LAB_010932ac;
      plVar7 = *(long **)(param_1 + 0x78);
      if (plVar7 == (long *)0x0) {
        FUN_01092f78(0,param_2);
      }
      else {
        lVar5 = plVar7[6];
        if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01093264;
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          *(undefined8 *)(lVar5 + 8) = uVar6;
          *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
        }
        else if (sVar2 == -1) goto LAB_01093284;
        FUN_01092f78(plVar7,param_2);
        lVar5 = plVar7[6];
        psVar1 = (short *)(lVar5 + 0x1a);
        do {
          sVar2 = *psVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar4) {
            *psVar1 = sVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (sVar2 == 1) {
          *(undefined8 *)(lVar5 + 0x10) = 0;
          (**(code **)(*plVar7 + 0x50))(plVar7);
        }
        else if (sVar2 == 0) goto LAB_010932ac;
      }
    }
    plVar7 = *(long **)(param_1 + 0x70);
    if (plVar7 == (long *)0x0) {
      return;
    }
    lVar5 = plVar7[6];
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_01093264;
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      *(undefined8 *)(lVar5 + 8) = uVar6;
      *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_01093284;
    lVar5 = plVar7[6];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
      (**(code **)(*plVar7 + 0x50))(plVar7);
    }
    else if (sVar2 == 0) goto LAB_010932ac;
    plVar7 = *(long **)(param_1 + 0x70);
    param_1 = 0;
  } while (plVar7 == (long *)0x0);
  lVar5 = plVar7[6];
  if (*(long *)(lVar5 + 0x10) != 0) {
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      *(undefined8 *)(lVar5 + 8) = uVar6;
      *(undefined4 *)(lVar5 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) {
LAB_01093284:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
    FUN_01092f78(plVar7,param_2);
    lVar5 = plVar7[6];
    psVar1 = (short *)(lVar5 + 0x1a);
    do {
      sVar2 = *psVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar4) {
        *psVar1 = sVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (sVar2 == 1) {
      *(undefined8 *)(lVar5 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x01093260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x50))(plVar7);
      return;
    }
    if (sVar2 != 0) {
      return;
    }
LAB_010932ac:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
               "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
               ,0x60,"Reference counter underflows.");
  }
LAB_01093264:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


