/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0149a400; name: FUN_0149a400
 */


void FUN_0149a400(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 local_38;
  
  lVar12 = param_1[0x76];
  *param_1 = (long)&DAT_045eba50;
  param_1[4] = (long)&PTR_LAB_045ebb00;
  param_1[5] = (long)&DAT_045ebb50;
  if (lVar12 != 0) {
    lVar11 = param_1[0x78];
    param_1[0x77] = lVar12;
    plVar14 = (long *)param_1[0x79];
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar14,lVar12,lVar11 - lVar12,8);
        goto LAB_0149a438;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar11 - lVar12,8);
  }
LAB_0149a438:
  FUN_0149a5cc(param_1 + 0x6f);
  puVar13 = (undefined8 *)param_1[0x6c];
  puVar1 = PTR_DAT_047dd318 + 0xc0;
  puVar2 = PTR_DAT_047dd318 + 0x110;
  *param_1 = (long)(PTR_DAT_047dd318 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  if (puVar13 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar3;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar7) {
        *psVar3 = sVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar8 = *piVar4;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar7) {
          *piVar4 = -1;
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
        local_38 = *puVar13;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
      }
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  FUN_00fef530(param_1);
  return;
}


