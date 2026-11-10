/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01354cc4; name: FUN_01354cc4
 */


void FUN_01354cc4(long *param_1,long param_2)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  short sVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *local_60;
  long local_58;
  undefined8 *local_50;
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar5 = PTR_DAT_047d3908;
  lVar17 = *(long *)(param_2 + 8);
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  if (((*PTR_DAT_047d3908 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0))
  {
    FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
    __cxa_guard_release(PTR_DAT_047d3908);
  }
  puVar7 = PTR_DAT_047d3918;
  puVar6 = PTR_DAT_047d3910;
  uVar10 = *(undefined8 *)PTR_DAT_047d3910;
  *(undefined8 *)PTR_DAT_047d3918 = uVar10;
  FUN_00c44204(&local_50,uVar10,lVar17);
  if ((local_50 != (undefined8 *)0x0) &&
     (puVar18 = (undefined8 *)local_50[1], puVar18 != (undefined8 *)0x0)) {
    puVar12 = (undefined8 *)PTR_DAT_047e3018;
    if (((*PTR_DAT_047e3010 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_047e3010), puVar12 = (undefined8 *)PTR_DAT_047e3018,
       iVar9 != 0)) {
      uVar10 = FUN_00cf27f8();
      *(undefined8 *)PTR_DAT_047e3018 = uVar10;
      __cxa_guard_release(PTR_DAT_047e3010);
      puVar12 = (undefined8 *)PTR_DAT_047e3018;
    }
LAB_01354d4c:
    puVar8 = local_60;
    if (puVar18 != puVar12) goto LAB_01354e9c;
    local_60 = (undefined8 *)0x0;
    if (puVar8 != (undefined8 *)0x0) {
      psVar1 = (short *)(puVar8 + 3);
      do {
        sVar16 = *psVar1;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (sVar16 == 1) {
        piVar2 = (int *)((long)puVar8 + 0x1c);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar15) {
            *piVar2 = -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 != -1) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
            FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
            __cxa_guard_release(PTR_DAT_047d3908);
          }
          lVar13 = *(long *)puVar6;
          *(long *)puVar7 = lVar13;
          local_48 = *puVar8;
          FUN_00c44438(lVar13 + 0x8040,&local_48);
        }
      }
      else if (sVar16 == 0) goto LAB_01354de4;
    }
    local_60 = local_50;
    local_50 = (undefined8 *)0x0;
    local_58 = lVar17;
    goto LAB_01354d78;
  }
LAB_01354ea4:
  FUN_01358b08(&local_60);
LAB_01354d78:
  puVar18 = local_50;
  if (local_50 != (undefined8 *)0x0) {
    psVar1 = (short *)(local_50 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_50 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        local_48 = *puVar18;
        FUN_00c44438(lVar13 + 0x8040,&local_48);
      }
    }
    else if (sVar16 == 0) goto LAB_01354de4;
  }
  if (local_60 != (undefined8 *)0x0) {
    if (*(short *)((long)local_60 + 0x1a) != 0) {
      psVar1 = (short *)((long)local_60 + 0x1a);
      sVar16 = *(short *)((long)local_60 + 0x1a);
LAB_01354ec4:
      sVar3 = *psVar1;
      if (sVar3 == sVar16) {
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar15) {
          *psVar1 = sVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_01354ee8;
        bVar15 = true;
      }
      else {
        ClearExclusiveLocal();
LAB_01354ee8:
        bVar15 = false;
      }
      if (!bVar15) goto code_r0x01354ef0;
      lVar13 = local_60[2];
      if (lVar13 == 0) goto LAB_01354f00;
      plVar11 = (long *)*param_1;
      *param_1 = 0;
      if (plVar11 != (long *)0x0) {
        lVar14 = plVar11[6];
        psVar1 = (short *)(lVar14 + 0x1a);
        do {
          sVar16 = *psVar1;
          cVar4 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar15) {
            *psVar1 = sVar16 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar16 == 1) {
          *(undefined8 *)(lVar14 + 0x10) = 0;
          (**(code **)(*plVar11 + 0x50))();
        }
        else if (sVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl
                    ("count != std::numeric_limits<uint16_t>::max()","ReleaseReference",
                     "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                     ,0x60,"Reference counter underflows.");
        }
      }
      *param_1 = lVar13 + -0x28;
      param_1[1] = lVar17;
LAB_01354ef8:
      if (local_60 == (undefined8 *)0x0) {
        return;
      }
    }
LAB_01354f00:
    puVar18 = local_60;
    psVar1 = (short *)(local_60 + 3);
    do {
      sVar16 = *psVar1;
      cVar4 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(psVar1,0x10);
      if (bVar15) {
        *psVar1 = sVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (sVar16 == 1) {
      piVar2 = (int *)((long)local_60 + 0x1c);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar15 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar15) {
          *piVar2 = -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 != -1) {
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar9 != 0)) {
          FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
          __cxa_guard_release(PTR_DAT_047d3908);
        }
        lVar17 = *(long *)puVar6;
        *(long *)puVar7 = lVar17;
        local_48 = *puVar18;
        FUN_00c44438(lVar17 + 0x8040,&local_48);
      }
    }
    else if (sVar16 == 0) {
LAB_01354de4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("count != std::numeric_limits<uint16_t>::max()","ReleaseWeakReference",
                 "C:/jenkins/workspace/sudachi/nuget/nuget_trinity_build_s2/trinity_titan/lib/gflib3/include\\core/indexed_handle.h"
                 ,0x33,"Reference counter underflows.");
    }
  }
  return;
LAB_01354e9c:
  puVar18 = (undefined8 *)*puVar18;
  if (puVar18 == (undefined8 *)0x0) goto LAB_01354ea4;
  goto LAB_01354d4c;
code_r0x01354ef0:
  sVar16 = sVar3;
  if (sVar3 == 0) goto LAB_01354ef8;
  goto LAB_01354ec4;
}


