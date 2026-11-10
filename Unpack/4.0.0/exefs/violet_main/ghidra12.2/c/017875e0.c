/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 017875e0; name: FUN_017875e0
 */


void FUN_017875e0(long *param_1)

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
  code *pcVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_38;
  
  *param_1 = (long)&DAT_045ac930;
  param_1[4] = (long)&PTR_LAB_045aca18;
  param_1[5] = (long)&DAT_045aca68;
  pcVar11 = (code *)param_1[0x7b];
  if (pcVar11 != (code *)0x0) {
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7b] = 0;
    param_1[0x7a] = 0;
    (*pcVar11)(param_1 + 0x7e);
  }
  pcVar11 = (code *)param_1[0x6b];
  if (pcVar11 != (code *)0x0) {
    param_1[0x6d] = 0;
    param_1[0x6c] = 0;
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    (*pcVar11)(param_1 + 0x6e);
  }
  FUN_01787954(param_1 + 0x62);
  FUN_01787954(param_1 + 0x5b);
  FUN_01787c08(param_1 + 0x54);
  FUN_01787cb0(param_1 + 0x4d);
  lVar14 = param_1[0x46];
  if (lVar14 != 0) {
    lVar12 = param_1[0x48];
    param_1[0x47] = lVar14;
    plVar15 = (long *)param_1[0x49];
    uVar9 = (**(code **)(*plVar15 + 0xf8))(plVar15);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_00c4e600();
      if (0 < *(int *)(lVar10 + 0x12c8)) {
        FUN_00c48fe8(plVar15,lVar14,lVar12 - lVar14,4);
        goto LAB_017876b8;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar14,lVar12 - lVar14,4);
  }
LAB_017876b8:
  FUN_01787d58(param_1 + 0x3f);
  FUN_01787824(param_1 + 0x32);
  FUN_01787824(param_1 + 0x25);
  FUN_01787874(param_1 + 0x18);
  FUN_0178784c(param_1 + 0xb);
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar13 = (undefined8 *)param_1[6];
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
        lVar14 = *(long *)PTR_DAT_047d3910;
        *(long *)PTR_DAT_047d3918 = lVar14;
        local_38 = *puVar13;
        FUN_00c44438(lVar14 + 0x8040,&local_38);
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
  return;
}


