/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 028ccdcc; name: FUN_028ccdcc
 */


void FUN_028ccdcc(long *param_1)

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
  
  *param_1 = (long)&PTR_FUN_045eac30;
  param_1[4] = (long)&PTR_LAB_045eace0;
  param_1[5] = (long)&DAT_045ead30;
  FUN_028ccf9c(param_1 + 0x76);
  if (param_1[0x6f] != 0) {
    FUN_028cd03c(param_1 + 0x6f);
    lVar12 = param_1[0x6f];
    lVar11 = param_1[0x71];
    plVar14 = (long *)param_1[0x72];
    uVar9 = (**(code **)(*plVar14 + 0xf8))(plVar14);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar14,lVar12,lVar11 - lVar12,8);
        goto LAB_028cce54;
      }
    }
    (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar11 - lVar12,8);
  }
LAB_028cce54:
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
        lVar11 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar11;
        local_38 = *puVar13;
        FUN_00c44438(lVar11 + 0x8040,&local_38);
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


