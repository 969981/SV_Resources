/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01042450; name: FUN_01042450
 */


void FUN_01042450(long param_1,long param_2)

{
  long *plVar1;
  short *psVar2;
  int *piVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 local_68;
  
  lVar11 = FUN_010425f0(param_2 + 0x30,*(undefined8 *)(param_1 + 8),param_2);
  puVar9 = PTR_LAB_047d3de8;
  puVar8 = PTR_DAT_047d3918;
  puVar7 = PTR_DAT_047d3910;
  lVar15 = *(long *)(param_1 + 8);
  if (lVar15 != lVar11) {
    pbVar13 = PTR_DAT_047d3908;
    do {
      puVar14 = *(undefined8 **)(lVar15 + -0x10);
      if (puVar14 != (undefined8 *)0x0) {
        psVar2 = (short *)(puVar14 + 3);
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
          piVar3 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar10 = *piVar3;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar6) {
              *piVar3 = -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar10 != -1) {
            if (((*pbVar13 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
              FUN_00100190(puVar9,puVar7,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar7;
            *(long *)puVar8 = lVar12;
            local_68 = *puVar14;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
            pbVar13 = PTR_DAT_047d3908;
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
      plVar1 = (long *)(lVar15 + -0x18);
      lVar15 = lVar15 + -0x30;
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 0x20))();
      }
    } while (lVar15 != lVar11);
  }
  *(long *)(param_1 + 8) = lVar11;
  return;
}


