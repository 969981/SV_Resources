/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e28240; name: FUN_00e28240
 */


void FUN_00e28240(undefined8 *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  lVar8 = *(long *)(param_2 + 200);
  if (((lVar8 == 0) || (*(long **)(lVar8 + 0x28) == *(long **)(lVar8 + 0x20))) ||
     (lVar8 = **(long **)(lVar8 + 0x20), lVar8 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    (**(code **)(*(long *)(param_2 + 0x20) + 0x20))(local_48);
    *param_1 = 0;
    param_1[1] = 0;
    if (local_48[0] != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)local_48[0][1];
      if (puVar9 != (undefined8 *)0x0) {
        puVar10 = (undefined8 *)PTR_DAT_047d39b8;
        if (((*PTR_DAT_047d39b0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39b0), puVar6 = PTR_DAT_047d39c8,
           puVar10 = (undefined8 *)PTR_DAT_047d39b8, iVar7 != 0)) {
          if (((*PTR_DAT_047d39c0 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_047d39c0), iVar7 != 0)) {
            *(undefined8 *)puVar6 = 0;
            __cxa_guard_release(PTR_DAT_047d39c0);
          }
          puVar10 = (undefined8 *)PTR_DAT_047d39b8;
          *(undefined **)PTR_DAT_047d39b8 = puVar6;
          __cxa_guard_release(PTR_DAT_047d39b0);
        }
        do {
          if (puVar9 == puVar10) {
            FUN_00d30d98(param_1,local_48);
            break;
          }
          puVar9 = (undefined8 *)*puVar9;
        } while (puVar9 != (undefined8 *)0x0);
      }
      if (local_48[0] != (undefined8 *)0x0) {
        psVar1 = (short *)(local_48[0] + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_48[0] + 0x1c);
          do {
            iVar7 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar7 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar7 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)PTR_DAT_047d3910;
            *(long *)PTR_DAT_047d3918 = lVar11;
            local_38 = *local_48[0];
            FUN_00c44438(lVar11 + 0x8040,&local_38);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
    }
    param_1[2] = lVar8;
  }
  return;
}


