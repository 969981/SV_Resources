/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00df5bb4; name: FUN_00df5bb4
 */


void FUN_00df5bb4(long param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  short sVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 local_18;
  
  lVar7 = *(long *)(param_1 + 0x388);
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar9 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar9) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00df5c14;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00df5c14:
        bVar5 = false;
      }
      if (bVar5) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (lVar7 == 0) {
          return;
        }
        puVar11 = *(undefined8 **)(param_1 + 0x388);
        *(undefined8 *)(param_1 + 0x388) = 0;
        if (puVar11 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar11 + 3);
          do {
            sVar9 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar9 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar9 == 1) {
            piVar2 = (int *)((long)puVar11 + 0x1c);
            do {
              iVar6 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar6 != -1) {
              if (((*PTR_DAT_047d3908 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar6 != 0)) {
                FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
                __cxa_guard_release(PTR_DAT_047d3908);
              }
              lVar8 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar8;
              local_18 = *puVar11;
              FUN_00c44438(lVar8 + 0x8040,&local_18);
            }
          }
          else if (sVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        plVar10 = (long *)(lVar7 + -0x28);
        *(undefined8 *)(param_1 + 0x390) = 0;
        FUN_00dfba48(param_1,plVar10);
                    /* WARNING: Could not recover jumptable at 0x00df5c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar10 + 0x60))(plVar10);
        return;
      }
      sVar9 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


