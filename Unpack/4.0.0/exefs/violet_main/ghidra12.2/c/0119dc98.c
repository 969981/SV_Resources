/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0119dc98; name: FUN_0119dc98
 */


void FUN_0119dc98(long *param_1,char *param_2)

{
  short *psVar1;
  long lVar2;
  char cVar3;
  short sVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  short sVar8;
  
  cVar3 = *param_2;
  if (cVar3 == '\x02') {
    lVar7 = *(long *)(param_2 + 8);
    if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
      psVar1 = (short *)(lVar7 + 0x1a);
      sVar8 = *(short *)(lVar7 + 0x1a);
      do {
        sVar4 = *psVar1;
        if (sVar4 == sVar8) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar8 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 != '\0') goto LAB_0119ddc4;
          bVar5 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_0119ddc4:
          bVar5 = false;
        }
        if (bVar5) {
          lVar2 = 0;
          if (*(long *)(lVar7 + 0x10) != 0) {
            lVar2 = *(long *)(lVar7 + 0x10) + -0x28;
          }
          *param_1 = lVar2;
          return;
        }
        sVar8 = sVar4;
      } while (sVar4 != 0);
    }
LAB_0119dcb8:
    *param_1 = 0;
  }
  else {
    if (cVar3 == '\0') {
      lVar7 = *(long *)(param_2 + 8);
      *param_1 = lVar7;
      if (lVar7 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) {
LAB_0119ddf0:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      if (cVar3 != '\x01') goto LAB_0119dcb8;
      lVar7 = *(long *)(param_2 + 8);
      *param_1 = lVar7;
      if (lVar7 == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x30);
      if (*(long *)(lVar7 + 0x10) == 0) goto LAB_0119ddf0;
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar8 = *psVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (sVar8 == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      *(undefined8 *)(lVar7 + 8) = uVar6;
      *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
    }
    else if (sVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != 0","AddReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x58,"Reference counter overflows.");
    }
  }
  return;
}


