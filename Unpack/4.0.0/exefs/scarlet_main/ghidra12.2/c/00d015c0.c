/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d015c0; name: FUN_00d015c0
 */


void FUN_00d015c0(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 local_68;
  
  puVar8 = PTR_LAB_047d3de8;
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  lVar14 = param_1[1];
  lVar12 = param_1[2];
  if (lVar12 != lVar14) {
    pbVar13 = PTR_DAT_047d3908;
    do {
      param_1[2] = lVar12 + -0x20;
      puVar15 = *(undefined8 **)(lVar12 + -0x10);
      if (puVar15 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar15 + 3);
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
          piVar2 = (int *)((long)puVar15 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar13 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)
               ) {
              FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar11 = *(long *)puVar6;
            *(long *)puVar7 = lVar11;
            local_68 = *puVar15;
            FUN_00c44438(lVar11 + 0x8040,&local_68);
            pbVar13 = PTR_DAT_047d3908;
          }
        }
        else if (sVar3 == 0) goto LAB_00d0170c;
      }
      puVar15 = *(undefined8 **)(lVar12 + -0x20);
      if (puVar15 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar15 + 3);
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
          piVar2 = (int *)((long)puVar15 + 0x1c);
          do {
            iVar9 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar9 != -1) {
            if (((*pbVar13 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar13), iVar9 != 0)) {
              FUN_00100190(puVar8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(pbVar13);
            }
            lVar12 = *(long *)puVar6;
            *(long *)puVar7 = lVar12;
            local_68 = *puVar15;
            FUN_00c44438(lVar12 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) {
LAB_00d0170c:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x33,"Reference counter underflows.");
        }
      }
      lVar12 = param_1[2];
    } while (lVar12 != lVar14);
  }
  lVar14 = *param_1;
  if (lVar14 == 0) {
    return;
  }
  lVar12 = param_1[3];
  plVar16 = *(long **)param_1[4];
  uVar10 = (**(code **)(*plVar16 + 0xf8))(plVar16);
  if (((uVar10 & 1) == 0) || (lVar11 = FUN_00c4e600(), *(int *)(lVar11 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x00d0164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar16 + 0x18))(plVar16,lVar14,lVar12 - lVar14,8);
    return;
  }
  FUN_00c48fe8(plVar16,lVar14,lVar12 - lVar14,8);
  return;
}


