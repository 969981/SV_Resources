/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017abc40; name: FUN_017abc40
 */


long FUN_017abc40(long param_1)

{
  long lVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  lVar1 = param_1 + 0x1b0;
  if ((((*(long *)(param_1 + 0x1b0) == 0) || (*(short *)(*(long *)(param_1 + 0x1b0) + 0x1a) == 0))
      && (*(long *)(param_1 + 0x80) != 0)) && (*(short *)(*(long *)(param_1 + 0x80) + 0x1a) != 0)) {
    plVar8 = (long *)FUN_00d6431c();
    lVar10 = *plVar8;
    if ((lVar10 != 0) && (*(short *)(lVar10 + 0x1a) != 0)) {
      psVar2 = (short *)(lVar10 + 0x1a);
      sVar11 = *(short *)(lVar10 + 0x1a);
      do {
        sVar4 = *psVar2;
        if (sVar4 == sVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 != '\0') goto LAB_017abce0;
          bVar6 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_017abce0:
          bVar6 = false;
        }
        if (bVar6) {
          lVar10 = *(long *)(lVar10 + 0x10);
          if (lVar10 == 0) {
            return lVar1;
          }
          lVar9 = FUN_014aee70(lVar10 + 0xe0);
          if (lVar9 != 0) {
            FUN_0184f18c(local_40);
            FUN_01e17f10(lVar1,local_40);
            if (local_40[0] != (undefined8 *)0x0) {
              psVar2 = (short *)(local_40[0] + 3);
              do {
                sVar11 = *psVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
                if (bVar6) {
                  *psVar2 = sVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (sVar11 == 1) {
                piVar3 = (int *)((long)local_40[0] + 0x1c);
                do {
                  iVar7 = *piVar3;
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                  if (bVar6) {
                    *piVar3 = -1;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                } while (cVar5 != '\0');
                if (iVar7 != -1) {
                  if (((*PTR_DAT_047d3908 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
                    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                    __cxa_guard_release(PTR_DAT_047d3908);
                  }
                  lVar9 = *(long *)PTR_DAT_047d3910;
                  *(long *)PTR_DAT_047d3918 = lVar9;
                  local_18 = *local_40[0];
                  FUN_00c44438(lVar9 + 0x8040,&local_18);
                }
              }
              else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                nn::diag::detail::AbortImpl
                          ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                           "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                           ,0x33,"Reference counter underflows.");
              }
            }
          }
          (**(code **)(*(long *)(lVar10 + -0x28) + 0x60))();
          return lVar1;
        }
        sVar11 = sVar4;
      } while (sVar4 != 0);
    }
  }
  return lVar1;
}


