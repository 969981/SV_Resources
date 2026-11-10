/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dd46b8; name: FUN_00dd46b8
 */


void FUN_00dd46b8(long param_1,undefined8 param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_8;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    local_8 = *(long **)(*(long *)(*(long *)(param_1 + 0x48) +
                                  (*(ulong *)(param_1 + 0x80) >> 6 & 0x3fffffffffffff8)) +
                        (*(ulong *)(param_1 + 0x80) & 0x1ff) * 8);
    if (local_8 != (long *)0x0) {
      lVar7 = local_8[6];
      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl
                  ("m_object != nullptr","AddReference",
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
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
                   "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                   ,0x58,"Reference counter overflows.");
      }
    }
    plVar5 = local_8;
    (**(code **)(*local_8 + 0x68))(local_8,param_2);
    if ((char)plVar5[8] != '\0') {
      FUN_00dd4c08(param_1 + 0x40);
    }
    if ((*(long *)(param_1 + 0x88) == 0) && (*(code **)(param_1 + 0x130) != (code *)0x0)) {
      (**(code **)(param_1 + 0x130))(param_1 + 0x150);
    }
    FUN_015a7af4(&local_8);
  }
  return;
}


