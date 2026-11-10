/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00fa6de0; name: FUN_00fa6de0
 */


void FUN_00fa6de0(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  short sVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar11 = *(long *)(param_2 + 8);
  FUN_00fa6fe8(local_48,lVar11);
  if (local_48[0] != (undefined8 *)0x0) {
    puVar12 = local_48[0];
    if (*(short *)((long)local_48[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_48[0] + 0x1a);
      sVar10 = *(short *)((long)local_48[0] + 0x1a);
LAB_00fa6e3c:
      sVar3 = *psVar1;
      if (sVar3 == sVar10) {
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar9) {
          *psVar1 = sVar10 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_00fa6e60;
        bVar9 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_00fa6e60:
        bVar9 = false;
      }
      if (!bVar9) goto code_r0x00fa6e68;
      lVar7 = local_48[0][2];
      if (lVar7 == 0) goto LAB_00fa6ea4;
      plVar6 = (long *)*param_1;
      *param_1 = 0;
      if (plVar6 != (long *)0x0) {
        lVar8 = plVar6[6];
        psVar1 = (short *)(lVar8 + 0x1a);
        do {
          sVar10 = *psVar1;
          cVar4 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar9) {
            *psVar1 = sVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar10 == 1) {
          *(undefined8 *)(lVar8 + 0x10) = 0;
          (**(code **)(*plVar6 + 0x50))();
        }
        else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar7 + -0x28;
      param_1[1] = lVar11;
LAB_00fa6ea0:
      puVar12 = local_48[0];
      if (local_48[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_00fa6ea4:
    psVar1 = (short *)(puVar12 + 3);
    do {
      sVar10 = *psVar1;
      cVar4 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar9) {
        *psVar1 = sVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar10 == 1) {
      piVar2 = (int *)((long)puVar12 + 0x1c);
      do {
        iVar5 = *piVar2;
        cVar4 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar9) {
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar12;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
      }
    }
    else if (sVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
code_r0x00fa6e68:
  sVar10 = sVar3;
  if (sVar3 == 0) goto LAB_00fa6ea0;
  goto LAB_00fa6e3c;
}


