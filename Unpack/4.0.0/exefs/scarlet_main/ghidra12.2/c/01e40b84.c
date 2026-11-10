/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e40b84; name: FUN_01e40b84
 */


void FUN_01e40b84(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short *psVar3;
  int *piVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_38;
  
  lVar14 = param_1[0x25];
  *param_1 = (long)&DAT_04546ba8;
  param_1[4] = (long)&PTR_LAB_04546c20;
  param_1[5] = (long)&PTR_LAB_04546c70;
  if (lVar14 != 0) {
    lVar6 = param_1[0x27];
    plVar7 = (long *)param_1[0x28];
    param_1[0x26] = lVar14;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 - lVar14,4);
        goto LAB_01e40bf8;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 - lVar14,4);
  }
LAB_01e40bf8:
  lVar14 = param_1[0x1e];
  if (lVar14 != 0) {
    lVar6 = param_1[0x20];
    plVar7 = (long *)param_1[0x21];
    param_1[0x1f] = lVar14;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 - lVar14,4);
        goto LAB_01e40c3c;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 - lVar14,4);
  }
LAB_01e40c3c:
  lVar14 = param_1[0x17];
  if (lVar14 != 0) {
    lVar6 = param_1[0x19];
    plVar7 = (long *)param_1[0x1a];
    param_1[0x18] = lVar14;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 - lVar14,4);
        goto LAB_01e40c80;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 - lVar14,4);
  }
LAB_01e40c80:
  lVar14 = param_1[8];
  if (lVar14 != 0) {
    lVar6 = param_1[10];
    plVar7 = (long *)param_1[0xb];
    param_1[9] = lVar14;
    uVar11 = (**(code **)(*plVar7 + 0xf8))(plVar7);
    if ((uVar11 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar7,lVar14,lVar6 - lVar14,4);
        goto LAB_01e40cc4;
      }
    }
    (**(code **)(*plVar7 + 0x18))(plVar7,lVar14,lVar6 - lVar14,4);
  }
LAB_01e40cc4:
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
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(psVar3,0x10);
      if (bVar9) {
        *psVar3 = sVar5 + -1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar10 = *piVar4;
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar9) {
          *piVar4 = -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      if (iVar10 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar10 != 0)) {
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
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
}


