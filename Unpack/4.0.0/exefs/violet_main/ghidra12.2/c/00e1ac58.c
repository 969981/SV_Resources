/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e1ac58; name: FUN_00e1ac58
 */


void FUN_00e1ac58(long *param_1)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 local_18;
  
  puVar11 = (undefined8 *)param_1[10];
  *param_1 = (long)&DAT_04605430;
  if (puVar11 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar11 + 3);
    do {
      sVar3 = *psVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar7) {
        *psVar1 = sVar3 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar3 == 1) {
      piVar2 = (int *)((long)puVar11 + 0x1c);
      do {
        iVar8 = *piVar2;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar8 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar12 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar12;
        local_18 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_18);
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
  *param_1 = (long)(PTR_DAT_047e31c0 + 0x10);
  if (lVar12 == 0) {
    return;
  }
  lVar4 = param_1[4];
  plVar5 = (long *)param_1[5];
  param_1[3] = lVar12;
  uVar9 = (**(code **)(*plVar5 + 0xf8))(plVar5);
  if ((uVar9 & 1) != 0) {
    lVar10 = FUN_00c4e600();
    if (0 < *(int *)(lVar10 + 0x12c8)) {
      FUN_00c48fe8(plVar5,lVar12,lVar4 - lVar12,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00e1acdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x18))(plVar5,lVar12,lVar4 - lVar12,8);
  return;
}


