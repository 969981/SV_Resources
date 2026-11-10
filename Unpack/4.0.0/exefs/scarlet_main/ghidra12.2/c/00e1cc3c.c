/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00e1cc3c; name: FUN_00e1cc3c
 */


void FUN_00e1cc3c(long param_1,long *param_2)

{
  undefined *puVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar13;
  long *plVar12;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  if (*(long **)(param_1 + 8) != param_2) {
    puVar1 = PTR_DAT_047e31c8 + 0x10;
    plVar12 = *(long **)(param_1 + 8);
    do {
      plVar13 = plVar12 + -0xc;
      *plVar13 = (long)puVar1;
      puVar11 = (undefined8 *)plVar12[-4];
      if (puVar11 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar11 + 3);
        do {
          sVar4 = *psVar2;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(psVar2,0x10);
          if (bVar6) {
            *psVar2 = sVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (sVar4 == 1) {
          piVar3 = (int *)((long)puVar11 + 0x1c);
          do {
            iVar9 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar9 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)puVar7;
            *(long *)puVar8 = lVar10;
            local_68 = *puVar11;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
          }
        }
        else if (sVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      if ((long *)plVar12[-5] != (long *)0x0) {
        (**(code **)(*(long *)plVar12[-5] + 0x20))();
      }
      plVar12 = plVar13;
    } while (plVar13 != param_2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


