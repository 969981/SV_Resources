/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00de9fbc; name: FUN_00de9fbc
 */


void FUN_00de9fbc(long param_1)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if ((*(long *)(param_1 + 0x40) != 0) &&
     (lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 0x10), lVar7 != 0)) {
    puVar5 = (undefined8 *)FUN_01a6a8cc(lVar7 + -0x28);
    plVar8 = (long *)*puVar5;
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x3d);
      }
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
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_50 = 0x865a9dc04bbf40de;
    pcStack_48 = "SyncAnimComponent";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_0182c014(plVar8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x865a9dc04bbf40de;
    pcStack_48 = "SyncAnimComponent";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_0182c3d4(plVar8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x865a9dc04bbf40de;
    pcStack_48 = "SyncAnimComponent";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_0171304c(plVar8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    local_50 = 0x865a9dc04bbf40de;
    pcStack_48 = "SyncAnimComponent";
    local_40 = 0x11;
    local_38 = (long *)0x0;
    FUN_01ea6634(plVar8,&local_50);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[6];
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
        (**(code **)(*plVar8 + 0x50))(plVar8);
      }
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


