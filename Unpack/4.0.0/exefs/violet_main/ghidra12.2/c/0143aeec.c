/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0143aeec; name: FUN_0143aeec
 */


void FUN_0143aeec(undefined8 param_1,long param_2,long param_3,byte param_4)

{
  short *psVar1;
  short sVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long local_18;
  
  if ((param_4 < *(byte *)(param_3 + 0x30)) &&
     (plVar10 = *(long **)(param_3 + (ulong)param_4 * 8), plVar10 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)plVar10[5])(plVar10 + 5);
    if (((*PTR_DAT_047d3f00 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3f00), iVar6 != 0)) {
      uVar8 = FUN_01b07aa4();
      *(undefined8 *)PTR_DAT_047d3f08 = uVar8;
      __cxa_guard_release(PTR_DAT_047d3f00);
    }
    for (; plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
      if (plVar7 == (long *)PTR_DAT_047d3f08) {
        FUN_0143b06c(plVar10,1);
        plVar10 = (long *)(**(code **)(*plVar10 + 0x1e0))(plVar10);
        if (5 < *(byte *)(param_2 + 0x60)) {
          return;
        }
        (**(code **)(*plVar10 + 0x198))(&local_18);
        bVar3 = *(byte *)(param_2 + 0x60);
        *(byte *)(param_2 + 0x60) = bVar3 + 1;
        plVar7 = (long *)(param_2 + (ulong)bVar3 * 8 + 0x30);
        plVar10 = (long *)*plVar7;
        *plVar7 = 0;
        if (plVar10 != (long *)0x0) {
          lVar9 = plVar10[6];
          psVar1 = (short *)(lVar9 + 0x1a);
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
            *(undefined8 *)(lVar9 + 0x10) = 0;
            (**(code **)(*plVar10 + 0x50))();
          }
          else if (sVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_battleLogic_build_s2/battleLogic_titan/prog/../lib/gflib3/include\\core/indexed_handle.h"
                       ,0x60,"Reference counter underflows.");
          }
        }
        *plVar7 = local_18;
        return;
      }
    }
  }
  return;
}


