/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 020f86fc; name: FUN_020f86fc
 */


void FUN_020f86fc(long *param_1)

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
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  undefined8 local_38;
  
  lVar12 = param_1[10];
  *param_1 = (long)&PTR_FUN_04583660;
  param_1[4] = (long)&PTR_LAB_045836f0;
  param_1[5] = (long)&DAT_04583740;
  if (lVar12 != 0) {
    plVar13 = (long *)param_1[1];
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_020f8754:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,0x97e00,8);
    }
    else {
      lVar10 = FUN_00c4e600();
      if (*(int *)(lVar10 + 0x12c8) < 1) goto LAB_020f8754;
      FUN_00c48fe8(plVar13,lVar12,0x97e00,8);
    }
    param_1[10] = 0;
  }
  lVar12 = param_1[0xd];
  if (lVar12 != 0) {
    plVar13 = (long *)param_1[1];
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_020f8794:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,0xf200,8);
    }
    else {
      lVar10 = FUN_00c4e600();
      if (*(int *)(lVar10 + 0x12c8) < 1) goto LAB_020f8794;
      FUN_00c48fe8(plVar13,lVar12,0xf200,8);
    }
    param_1[0xd] = 0;
  }
  lVar12 = param_1[0x10];
  if (lVar12 != 0) {
    plVar13 = (long *)param_1[1];
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_020f87d4:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,0x97e00,8);
    }
    else {
      lVar10 = FUN_00c4e600();
      if (*(int *)(lVar10 + 0x12c8) < 1) goto LAB_020f87d4;
      FUN_00c48fe8(plVar13,lVar12,0x97e00,8);
    }
    param_1[0x10] = 0;
  }
  lVar12 = param_1[0x13];
  if (lVar12 != 0) {
    plVar13 = (long *)param_1[1];
    uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
    if ((uVar9 & 1) == 0) {
LAB_020f8814:
      (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,0xf200,8);
    }
    else {
      lVar10 = FUN_00c4e600();
      if (*(int *)(lVar10 + 0x12c8) < 1) goto LAB_020f8814;
      FUN_00c48fe8(plVar13,lVar12,0xf200,8);
    }
    param_1[0x13] = 0;
  }
  lVar12 = param_1[0x16];
  if (lVar12 == 0) goto LAB_020f8874;
  plVar13 = (long *)param_1[1];
  uVar9 = (**(code **)(*plVar13 + 0xf8))(plVar13);
  if ((uVar9 & 1) == 0) {
LAB_020f8854:
    (**(code **)(*plVar13 + 0x18))(plVar13,lVar12,0xff000,8);
  }
  else {
    lVar10 = FUN_00c4e600();
    if (*(int *)(lVar10 + 0x12c8) < 1) goto LAB_020f8854;
    FUN_00c48fe8(plVar13,lVar12,0xff000,8);
  }
  param_1[0x16] = 0;
LAB_020f8874:
  puVar1 = PTR_DAT_047d8c78 + 0x88;
  puVar2 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar1;
  param_1[5] = (long)puVar2;
  puVar11 = (undefined8 *)param_1[6];
  if (puVar11 != (undefined8 *)0x0) {
    psVar3 = (short *)(puVar11 + 3);
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
      piVar4 = (int *)((long)puVar11 + 0x1c);
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
        local_38 = *puVar11;
        FUN_00c44438(lVar12 + 0x8040,&local_38);
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


