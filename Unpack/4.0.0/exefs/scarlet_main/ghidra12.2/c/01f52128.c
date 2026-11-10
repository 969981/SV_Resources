/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f52128; name: FUN_01f52128
 */


void FUN_01f52128(long *param_1)

{
  short *psVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  short sVar5;
  long lVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_38;
  
  lVar14 = param_1[0x19];
  *param_1 = (long)&DAT_04556a28;
  param_1[4] = (long)&PTR_LAB_04556b00;
  param_1[5] = (long)&PTR_FUN_04556b50;
  if (lVar14 != 0) {
    lVar6 = param_1[0x1b];
    plVar11 = (long *)param_1[0x1c];
    param_1[0x1a] = lVar14;
    uVar10 = (**(code **)(*plVar11 + 0xf8))(plVar11);
    if ((uVar10 & 1) != 0) {
      lVar12 = FUN_00c4e600();
      if (0 < *(int *)(lVar12 + 0x12c8)) {
        FUN_00c48fe8(plVar11,lVar14,lVar6 - lVar14,4);
        goto LAB_01f5219c;
      }
    }
    (**(code **)(*plVar11 + 0x18))(plVar11,lVar14,lVar6 - lVar14,4);
  }
LAB_01f5219c:
  plVar11 = (long *)param_1[0x18];
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[6];
    psVar1 = (short *)(lVar14 + 0x1a);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      *(undefined8 *)(lVar14 + 0x10) = 0;
      (**(code **)(*plVar11 + 0x50))();
    }
    else if (sVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                 "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/packages/trinity_titan.2023.9.1-sudachi2/build//include/gflib3\\core/indexed_handle.h"
                 ,0x60,"Reference counter underflows.");
    }
  }
  puVar2 = PTR_DAT_047dab30 + 0xe8;
  puVar3 = PTR_DAT_047dab30 + 0x138;
  *param_1 = (long)(PTR_DAT_047dab30 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  if ((char)param_1[9] != '\0') {
    FUN_019ab5b0(param_1 + 10);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  puVar2 = PTR_DAT_047d8c78 + 0x88;
  puVar3 = PTR_DAT_047d8c78 + 0xd8;
  *param_1 = (long)(PTR_DAT_047d8c78 + 0x10);
  param_1[4] = (long)puVar2;
  param_1[5] = (long)puVar3;
  puVar13 = (undefined8 *)param_1[6];
  if (puVar13 != (undefined8 *)0x0) {
    psVar1 = (short *)(puVar13 + 3);
    do {
      sVar5 = *psVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar8) {
        *psVar1 = sVar5 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (sVar5 == 1) {
      piVar4 = (int *)((long)puVar13 + 0x1c);
      do {
        iVar9 = *piVar4;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar8) {
          *piVar4 = -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (iVar9 != -1) {
        if (((*PTR_DAT_047d3908 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
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


