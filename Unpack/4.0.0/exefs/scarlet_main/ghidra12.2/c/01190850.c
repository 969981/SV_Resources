/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01190850; name: FUN_01190850
 */


void FUN_01190850(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_38;
  
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  lVar13 = param_1[1];
  lVar12 = param_1[2];
  if (lVar12 != lVar13) {
    pbVar11 = PTR_DAT_047d3908;
    do {
      param_1[2] = lVar12 + -0x18;
      puVar14 = *(undefined8 **)(lVar12 + -0x18);
      if (puVar14 != (undefined8 *)0x0) {
        psVar1 = (short *)(puVar14 + 3);
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
          piVar2 = (int *)((long)puVar14 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*pbVar11 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)
               ) {
              FUN_00100190(PTR_LAB_047d3de8,puVar6,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar12 = *(long *)puVar6;
            *(long *)puVar7 = lVar12;
            local_38 = *puVar14;
            FUN_00c44438(lVar12 + 0x8040,&local_38);
            pbVar11 = PTR_DAT_047d3908;
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
      lVar12 = param_1[2];
    } while (lVar12 != lVar13);
  }
  lVar13 = *param_1;
  if (lVar13 == 0) {
    return;
  }
  lVar12 = param_1[3];
  plVar15 = *(long **)param_1[4];
  uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
  if (((uVar9 & 1) == 0) || (lVar10 = FUN_00c4e600(), *(int *)(lVar10 + 0x12c8) < 1)) {
                    /* WARNING: Could not recover jumptable at 0x011908d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar13,lVar12 - lVar13,8);
    return;
  }
  FUN_00c48fe8(plVar15,lVar13,lVar12 - lVar13,8);
  return;
}


