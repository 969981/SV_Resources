/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 011238c4; name: FUN_011238c4
 */


void FUN_011238c4(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  short sVar11;
  long lVar12;
  undefined8 *local_40 [2];
  undefined8 local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = *(long *)(param_2 + 8);
  FUN_01123ad4(local_40,lVar12);
  if (local_40[0] != (undefined8 *)0x0) {
    puVar7 = local_40[0];
    if (*(short *)((long)local_40[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_40[0] + 0x1a);
      sVar11 = *(short *)((long)local_40[0] + 0x1a);
LAB_01123924:
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01123948;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01123948:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x01123950;
      lVar9 = local_40[0][2];
      if (lVar9 == 0) goto LAB_0112395c;
      plVar6 = (long *)*param_1;
      *param_1 = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar11 = *psVar1;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar10) {
            *psVar1 = sVar11 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar11 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar9 + -0x28;
      param_1[1] = lVar12;
LAB_01123958:
      puVar7 = local_40[0];
      if (local_40[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_0112395c:
    psVar1 = (short *)(puVar7 + 3);
    do {
      sVar11 = *psVar1;
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar10) {
        *psVar1 = sVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar11 == 1) {
      piVar2 = (int *)((long)puVar7 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar10) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar5 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_18 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_18);
      }
    }
    else if (sVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x01123950:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_01123958;
  goto LAB_01123924;
}


