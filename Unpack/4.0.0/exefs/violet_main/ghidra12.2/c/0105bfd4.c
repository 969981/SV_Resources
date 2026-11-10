/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0105bfd4; name: FUN_0105bfd4
 */


/* WARNING: Control flow encountered bad instruction data */

void FUN_0105bfd4(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  *(undefined1 *)(*(long *)(param_1 + 0x40) + 0x81) = 1;
  plVar6 = *(long **)(param_1 + 0x138);
  if (plVar6 == (long *)0x0) {
    return;
  }
  lVar7 = plVar6[6];
  if (*(long *)(lVar7 + 0x10) != 0) {
    psVar1 = (short *)(lVar7 + 0x1a);
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
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar5;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar2 == -1) goto LAB_0105c194;
    lVar7 = plVar6[6];
    psVar1 = (short *)(lVar7 + 0x1a);
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
      *(undefined8 *)(lVar7 + 0x10) = 0;
      (**(code **)(*plVar6 + 0x50))(plVar6);
    }
    else if (sVar2 == 0) goto LAB_0105c0cc;
    plVar6 = *(long **)(param_1 + 0x138);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    lVar7 = plVar6[6];
    if (*(long *)(lVar7 + 0x10) != 0) {
      psVar1 = (short *)(lVar7 + 0x1a);
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
        uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar5;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
LAB_0105c194:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
      (**(code **)(*plVar6 + 0x70))(plVar6);
      lVar7 = plVar6[6];
      psVar1 = (short *)(lVar7 + 0x1a);
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
        *(undefined8 *)(lVar7 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0105c170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x50))(plVar6);
        return;
      }
      if (sVar2 != 0) {
        return;
      }
LAB_0105c0cc:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl
            ("m_object != nullptr","AddReference",
             "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
             ,0x3d);
}


