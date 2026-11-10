/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f84a68; name: FUN_00f84a68
 */


void FUN_00f84a68(long param_1,undefined8 *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long *plStack_58;
  ulong local_50;
  ulong local_48;
  undefined1 local_3c [4];
  long *local_38;
  
  local_70 = *param_2;
  uStack_68 = param_2[1];
  local_60 = param_2[2];
  plVar7 = (long *)param_2[3];
  plStack_58 = plVar7;
  if (plVar7 == (long *)0x0) {
    lVar5 = FUN_00f839cc(param_1,&local_70);
  }
  else {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = FUN_00f839cc(param_1,&local_70);
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  if (lVar5 != -1) {
    plVar7 = *(long **)(*(long *)(param_1 + 0x168) + lVar5 * 8);
    if (plVar7 != (long *)0x0) {
      lVar5 = plVar7[6];
      if (*(long *)(lVar5 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x3d);
      }
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
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != 0","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    local_48 = param_2[4];
    local_50 = param_2[5];
    local_3c[0] = local_50 < local_48;
    plVar7[0x17] = local_48;
    plVar7[0x18] = local_50;
    local_38 = plVar7;
    FUN_00f84c44(plVar7[0x19],&local_38,local_3c,&local_48,&local_50);
    if (plVar7 != (long *)0x0) {
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
      else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x60,"Reference counter underflows.");
      }
    }
  }
  return;
}


