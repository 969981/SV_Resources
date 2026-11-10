/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 015f45fc; name: FUN_015f45fc
 */


void FUN_015f45fc(long *param_1,long param_2)

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
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = *(long *)(param_2 + 8);
  FUN_015f4808(local_38,lVar12);
  if (local_38[0] != (undefined8 *)0x0) {
    puVar7 = local_38[0];
    if (*(short *)((long)local_38[0] + 0x1a) != 0) {
      psVar1 = (short *)((long)local_38[0] + 0x1a);
      sVar11 = *(short *)((long)local_38[0] + 0x1a);
LAB_015f4650:
      sVar3 = *psVar1;
      if (sVar3 == sVar11) {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar10) {
          *psVar1 = sVar11 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_015f4674;
        bVar10 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_015f4674:
        bVar10 = false;
      }
      if (!bVar10) goto code_r0x015f467c;
      lVar9 = local_38[0][2];
      if (lVar9 == 0) goto LAB_015f46b8;
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
LAB_015f46b4:
      puVar7 = local_38[0];
      if (local_38[0] == (undefined8 *)0x0) {
        return;
      }
    }
LAB_015f46b8:
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
        local_28 = *puVar7;
        FUN_00c44438(lVar12 + 0x8040,&local_28);
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
code_r0x015f467c:
  sVar11 = sVar3;
  if (sVar3 == 0) goto LAB_015f46b4;
  goto LAB_015f4650;
}


