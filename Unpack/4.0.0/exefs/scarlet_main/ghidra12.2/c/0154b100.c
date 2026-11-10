/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0154b100; name: FUN_0154b100
 */


void FUN_0154b100(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  short sVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *local_38;
  
  lVar7 = param_1[0x71];
  if ((lVar7 != 0) && (*(short *)(lVar7 + 0x1a) != 0)) {
    psVar1 = (short *)(lVar7 + 0x1a);
    sVar8 = *(short *)(lVar7 + 0x1a);
    do {
      sVar3 = *psVar1;
      if (sVar3 == sVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar5) {
          *psVar1 = sVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_0154b168;
        bVar5 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_0154b168:
        bVar5 = false;
      }
      if (bVar5) {
        if (*(long *)(lVar7 + 0x10) == 0) {
          return;
        }
        plVar9 = (long *)(*(long *)(lVar7 + 0x10) + -0x28);
        local_38 = plVar9;
        FUN_010ca1a8(param_1,&local_38);
        FUN_028ec320(plVar9,param_1);
        puVar10 = (undefined8 *)param_1[0x71];
        param_1[0x71] = 0;
        if (puVar10 != (undefined8 *)0x0) {
          psVar1 = (short *)(puVar10 + 3);
          do {
            sVar8 = *psVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
            if (bVar5) {
              *psVar1 = sVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (sVar8 == 1) {
            piVar2 = (int *)((long)puVar10 + 0x1c);
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
              lVar7 = *(long *)PTR_DAT_047d3910;
              *(long *)PTR_DAT_047d3918 = lVar7;
              local_38 = (long *)*puVar10;
              FUN_00c44438(lVar7 + 0x8040,&local_38);
            }
          }
          else if (sVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl
                      ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                       "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                       ,0x33,"Reference counter underflows.");
          }
        }
        param_1[0x72] = 0;
        (**(code **)(*param_1 + 0xf8))(param_1);
        (**(code **)(*plVar9 + 0x60))(plVar9);
        return;
      }
      sVar8 = sVar3;
    } while (sVar3 != 0);
  }
  return;
}


